#ifndef DataTreeTOFSegment_H
#define DataTreeTOFSegment_H 1

#include <vector>
#include <iostream>
#include "TClonesArray.h"
#include "TObject.h"

class DataTreeTOFSegment : public TObject
{
    
public:
  
    DataTreeTOFSegment(int idx = 0);
    ~DataTreeTOFSegment();
    
    void ClearEvent(){Time = 0.; MassSq = 0.;}
    
    int GetId(){return id;}
    
    double GetPositionComponent(int idx){return Position[idx];}
    double GetX(){return Position[0];}
    double GetY(){return Position[1];}
    double GetZ(){return Position[2];}
    
    double GetTime(){return Time;}
    double GetMass2(){return Mass2;}
    double GetLength(){return Length;}
    double GetBeta(){return Beta;}
    double GetP(){return P;}
    double GetCharge(){return Charge;}
    
    void SetPositionComponent(int idx, double fValue){Position[idx]=fValue;}
    void SetPosition(double fX, double fY, double fZ){Position[0]=fX; Position[1]=fY; Position[2]=fZ;}
    
    void SetTime(double fValue){Time = fValue;}
    void SetMass2(double fValue){Mass2 = fValue;}
    void SetLength(double fValue){Length = fValue;}
    void SetBeta(double fValue){Beta = fValue;}
    void SetP(double fValue){P = fValue;}
    void SetCharge(double fValue){Charge = fValue;}
    
private:    
    void SetId(int idx){id = idx;}
    
    int id;
    double Position[3];
    double Time;
    double Mass2;
    
    double Length;
    double Beta;
    double P;
    double Charge;
    
    ClassDefNV(DataTreeTOFSegment, 1)
};

#endif