#ifndef EVALUADOR_H
#define EVALUADOR_H

#include "evaluador_global.h"

#include <QObject>
#include <QDebug>
#include <QMetaObject>
#include <QMetaProperty>
#include <QMetaMethod>
#include <QMetaType>

class EVALUADORSHARED_EXPORT Evaluador : QObject
{
    Q_OBJECT

public:
    explicit Evaluador(QObject *parent=0);

    void vigilaObjecto(QObject *objeto,const char *propiedad);

private slots:

    void recibeNotificacion(bool value);
    void recibeNotificacion(double value);
    void recibeNotificacion(QString value);
    void recibeNotificacion(int value);
};

#endif // EVALUADOR_H
