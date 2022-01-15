#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_field2.h"

class field2 : public QMainWindow
{
    Q_OBJECT

public:
    field2(QWidget *parent = Q_NULLPTR);

private:
    Ui::field2Class ui;
};
