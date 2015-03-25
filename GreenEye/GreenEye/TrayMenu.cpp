#include "TrayMenu.h"

TrayMenu::TrayMenu(QWidget *parent)
	: QMenu(parent)
{
	initActions();
}

TrayMenu::~TrayMenu()
{

}

void TrayMenu::initActions()
{
	m_settingAction = new QAction(this);
	m_pauseAction = new QAction(this);
	m_quitAction = new QAction(this);

	m_settingAction->setText("GreenEye Settings");
	m_pauseAction->setText("Pause Monitoring");
	m_quitAction->setText("Quit");

	this->addAction(m_settingAction);
	this->addAction(m_pauseAction);
	this->addAction(m_quitAction);
}
