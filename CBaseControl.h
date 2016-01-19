#ifndef CBASECONTROL_H
#define CBASECONTROL_H


class CBaseControl
{
    public:
        CBaseControl();
        virtual ~CBaseControl();
        virtual void subscribeToEvent(ALLEGRO_EVENT oEventSuscribe);
    protected:
        int _posX;
        int _posY;
    private:
};

#endif // CBASECONTROL_H
