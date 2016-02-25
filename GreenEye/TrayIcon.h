#ifndef TRAYICON_H
#define TRAYICON_H
#include <QAction>
#include <QSystemTrayIcon>

class TrayIcon : public QSystemTrayIcon
{
	Q_OBJECT

public:
	TrayIcon(QObject *parent = NULL);
	~TrayIcon();

	
private:
};

#endif // TRAYICON_H
