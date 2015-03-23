#include "GreenEye.h"

GreenEye::GreenEye(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	m_longRestWidget = new LongRest();
	m_shortRestWidget = new ShortRest();
	m_trayIcon = new Tray(this);

	hide();
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

	
void GreenEye::initActions()
{
	m_settingAction = new QAction(this);
	m_pauseAction = new QAction(this);
	m_quitAction = new QAction(this);

	m_settingAction->setText("GreenEye Settings");
	m_pauseAction->setText("Pause Monitoring");
	m_quitAction->setText("Quit");
}
