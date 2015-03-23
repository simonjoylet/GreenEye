#include "Tray.h"

Tray::Tray(QObject *parent)
	: QSystemTrayIcon(parent)
{
	setToolTip("This is GreenEye by Simon.");
	setIcon(QIcon(":/GreenEye/trayIcon"));
	showMessage("GreenEye", "GreenEye has started.", QSystemTrayIcon::Information, 1000);
}

Tray::~Tray()
{

}


