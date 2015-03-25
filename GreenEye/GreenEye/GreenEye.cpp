#include "GreenEye.h"

const int TIMER_INTERNAL = 1000;

GreenEye::GreenEye(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	m_longRestWidget = new LongRest();
	m_shortRestWidget = new ShortRest();
	m_settingWidget = new Setting();
	m_trayIcon = new TrayIcon(this);
	m_trayMenu = new TrayMenu(this);
	m_trayIcon->setContextMenu(m_trayMenu);

	m_timer = new QTimer(this);
	m_timer->start(TIMER_INTERNAL);

	m_localTime = QTime::currentTime();

	m_shortRestTime = 10 * 1000;//only for test
	m_longRestTime = 60 * 1000;//only for test

	signalSlot();
	this->hide();//Ö÷´°¿ÚÒþ²Ø¡£
}

GreenEye::~GreenEye()
{

	if (m_longRestWidget != NULL)
	{
		delete m_longRestWidget;
		m_longRestWidget = NULL;
	}

	if (m_shortRestWidget != NULL)
	{
		delete m_shortRestWidget;
		m_shortRestWidget = NULL;
	}
}

void GreenEye::signalSlot()
{
	connect(m_trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), 
		this, SLOT(On_trayIconActivated(QSystemTrayIcon::ActivationReason)));

	connect(m_trayMenu->m_settingAction, SIGNAL(triggered()), this, SLOT(On_settingActionTriggered()));
	connect(m_trayMenu->m_pauseAction, SIGNAL(triggered()), this, SLOT(On_pauseActionTriggered()));
	connect(m_trayMenu->m_quitAction, SIGNAL(triggered()), this, SLOT(On_quitActionTriggered()));

	connect(m_timer, SIGNAL(timeout()), this, SLOT(On_timeout()));
}

void GreenEye::On_trayIconActivated(QSystemTrayIcon::ActivationReason _reason)
{
	switch (_reason)
	{
	case QSystemTrayIcon::Unknown:
		break;
	case QSystemTrayIcon::Context:
		m_trayMenu->show();
		break;
	case QSystemTrayIcon::DoubleClick:
		break;
	case QSystemTrayIcon::Trigger:
		break;
	case QSystemTrayIcon::MiddleClick:
		break;
	default:
		break;
	}
}

void GreenEye::On_settingActionTriggered()
{
	m_settingWidget->show();
}

void GreenEye::On_pauseActionTriggered()
{
	if (m_trayMenu->m_pauseAction->text() == QString("Pause Monitoring"))
	{
		m_timer->stop();
		m_trayMenu->m_pauseAction->setText("Start Monitoring");
	}
	else
	{
		m_localTime = QTime::currentTime();
		m_timer->start(TIMER_INTERNAL);
		m_trayMenu->m_pauseAction->setText("Pause Monitoring");
	}
}

void GreenEye::On_quitActionTriggered()
{
	close();
}

void GreenEye::On_timeout()
{
	int deltaTime = m_localTime.msecsTo(QTime::currentTime());
	
	if (deltaTime % m_longRestTime < TIMER_INTERNAL)
	{
		m_longRestWidget->showLongRestWidget();
		m_localTime = QTime::currentTime();
	}
	else if (deltaTime % m_shortRestTime < TIMER_INTERNAL)
	{
		m_shortRestWidget->show();
	}
}


