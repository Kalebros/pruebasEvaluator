#include "evaluador.h"


Evaluador::Evaluador(QObject *parent)
    : QObject(parent)
{
}

void Evaluador::vigilaObjecto(QObject *objeto,const char *propiedad)
{
    const QMetaObject *mObject=objeto->metaObject();

    qDebug() << QString(mObject->className());
    bool found=false;
    QMetaProperty mPropiedad;
    for(int i=0;i<mObject->propertyCount() && !found;i++) {
        if(QString(mObject->property(i).name())==QString(propiedad)) {
            found=true;
            mPropiedad=mObject->property(i);
        }
    }

    if(found) {
        QMetaMethod mSlot;
        int tipoSignal=mPropiedad.notifySignal().parameterType(0);
        for(int i=0;i<this->metaObject()->methodCount();i++) {
            if(tr(this->metaObject()->method(i).name())==tr("recibeNotificacion") && (tipoSignal==this->metaObject()->method(i).parameterType(0)))
                mSlot=this->metaObject()->method(i);
        }
        connect(objeto,mPropiedad.notifySignal(),this,mSlot);
    }
}

void Evaluador::recibeNotificacion(bool value)
{
    qDebug() << "El objeto emisor ha cambiado su propiedad a " << value;
}
void Evaluador::recibeNotificacion(double value)
{
    qDebug() << "El objeto emisor ha cambiado su propiedad a " << value;
}
void Evaluador::recibeNotificacion(QString value)
{
    qDebug() << "El objeto emisor ha cambiado su propiedad a " << value;
}

void Evaluador::recibeNotificacion(int value)
{
    qDebug() << "El objeto emisor ha cambiado su propiedad a "<<value;
}

