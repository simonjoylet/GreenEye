#ifndef GREENTRAY_H
#define GREENTRAY_H
#include <QAction>
#include <QSystemTrayIcon>

class Tray : public QSystemTrayIcon
{
	Q_OBJECT

public:
	Tray(QObject *parent = NULL);
	~Tray();

	
private:
};

#endif // GREENTRAY_H
