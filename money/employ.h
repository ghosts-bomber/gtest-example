#ifndef EMPLOY_H
#define EMPLOY_H

class Employ{
public:
    Employ();
    ~Employ();
    void setEmployId(int id);
    int getEmployId();
private:
    int m_id = -1;
};


#endif // EMPLOY_H