#include "TrayIcon.h"

TrayIcon::TrayIcon(QObject *parent)
	: QSystemTrayIcon(parent)
{
	setToolTip("This is GreenEye by Simon.");
	setIcon(QIcon(":/GreenEye/trayIcon"));
	showMessage("GreenEye", "GreenEye has started.", QSystemTrayIcon::Information, 1000);
	show();
}

TrayIcon::~TrayIcon()
{

}


