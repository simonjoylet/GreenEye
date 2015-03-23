#ifndef GREENEYESETTING_H
#define GREENEYESETTING_H

#include <QWidget>
#include "ui_Setting.h"

class Setting : public QWidget
{
	Q_OBJECT

public:
	Setting(QWidget *parent = 0);
	~Setting();

private:
	Ui::Setting ui;
};

#endif // GREENEYESETTING_H
