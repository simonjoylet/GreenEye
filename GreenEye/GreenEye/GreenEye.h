#ifndef GREENEYE_H
#define GREENEYE_H

#include <QMainWindow>
#include "ui_GreenEye.h"
#include "LongRest.h"
#include "ShortRest.h"
#include "Tray.h"
#include <QTimer>

class GreenEye : public QMainWindow
{
	Q_OBJECT

public:
	GreenEye(QWidget *parent = 0);
	~GreenEye();
	void initActions();

private:
	Ui::GreenEye ui;

	LongRest * m_longRestWidget;
	ShortRest * m_shortRestWidget;
	Tray * m_trayIcon;

	QAction * m_settingAction;
	QAction * m_pauseAction;
	QAction * m_quitAction;
};

#endif // GREENEYE_H
