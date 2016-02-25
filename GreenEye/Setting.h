#ifndef GREENEYESETTING_H
#define GREENEYESETTING_H

#include <QWidget>
#include "ui_Setting.h"
#include <QCloseEvent>
class Setting : public QWidget
{
	Q_OBJECT

public:
	Setting(QWidget *parent = 0);
	~Setting();
	virtual void closeEvent(QCloseEvent * e);

private:
	Ui::Setting ui;
};

#endif // GREENEYESETTING_H
