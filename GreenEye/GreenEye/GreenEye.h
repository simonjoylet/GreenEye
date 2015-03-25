#ifndef GREENEYE_H
#define GREENEYE_H

#include <QMainWindow>
#include "ui_GreenEye.h"
#include "LongRest.h"
#include "ShortRest.h"
#include "TrayIcon.h"
#include "TrayMenu.h"
#include "Setting.h"
#include <QTimer>
#include <QTime>

class GreenEye : public QMainWindow
{
	Q_OBJECT

public:
	GreenEye(QWidget *parent = 0);
	~GreenEye();
	void signalSlot();
	
public slots:
	void On_trayIconActivated(QSystemTrayIcon::ActivationReason _reason);
	void On_settingActionTriggered();
	void On_pauseActionTriggered();
	void On_quitActionTriggered();

	void On_timeout();


private:
	Ui::GreenEye ui;

	LongRest * m_longRestWidget;
	ShortRest * m_shortRestWidget;
	TrayIcon * m_trayIcon;
	TrayMenu * m_trayMenu;
	Setting * m_settingWidget;

	QTimer * m_timer;
	QTime m_localTime;

	int m_shortRestTime;
	int m_longRestTime;

};

#endif // GREENEYE_H
