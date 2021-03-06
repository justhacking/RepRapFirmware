/****************************************************************************************************

RepRapFirmware - Heat

This is all the code to deal with heat and temperature.

-----------------------------------------------------------------------------------------------------

Version 0.1

18 November 2012

Adrian Bowyer
RepRap Professional Ltd
http://reprappro.com

Licence: GPL

****************************************************************************************************/

#ifndef HEAT_H
#define HEAT_H

class PID
{
  public:
  
    PID();
    
  private:
  
};

class Heat
{
    
  public:
  
    Heat(Platform* p);
    void Spin();
    void Init();
    void Exit();
    
  private:
  
  Platform* platform;
  boolean active;
  unsigned long lastTime;
  //float frac;
  //float inc;
  
};


#endif
