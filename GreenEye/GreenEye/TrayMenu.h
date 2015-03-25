#ifndef TRAYMENU_H
#define TRAYMENU_H

#include <QMenu>

class TrayMenu : public QMenu
{
	Q_OBJECT

public:
	TrayMenu(QWidget *parent = 0);
	~TrayMenu();

	void initActions();

public:

	QAction * m_settingAction;
	QAction * m_pauseAction;
	QAction * m_quitAction;
};

#endif // TRAYMENU_H
