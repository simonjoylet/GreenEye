#ifndef LONGREST_H
#define LONGREST_H

#include <QWidget>
#include "ui_LongRest.h"
#include <QKeyEvent>
#include <QTimer>

class LongRest : public QWidget
{
	Q_OBJECT

public:
	LongRest(QWidget *parent = 0);
	~LongRest();
	virtual void keyPressEvent(QKeyEvent * e);

public slots:
	void showLongRestWidget();
	void On_timeout();

private:
	Ui::LongRest ui;
	QTimer * m_timer;
	int m_showMin;

};

#endif // LONGREST_H
