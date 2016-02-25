#include "LongRest.h"

LongRest::LongRest(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	m_timer = new QTimer(this);
	m_showMin = 3;
	this->hide();
	connect(m_timer, SIGNAL(timeout()), this, SLOT(On_timeout()));
}

LongRest::~LongRest()
{

}

void LongRest::keyPressEvent(QKeyEvent * e)
{
	if (e->key() == Qt::Key_Space)
	{
		On_timeout();
	}
}

void LongRest::showLongRestWidget()
{
	showFullScreen();
	m_timer->start(m_showMin * 60 * 1000);
}

void LongRest::On_timeout()
{
	close();
	m_timer->stop();
}

void LongRest::closeEvent(QCloseEvent * e)
{
	hide();
	e->ignore();
}
