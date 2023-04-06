class Solution {
public:
    double angleClock(int hour, int minutes) {
        float h=(hour%12+(float)minutes/60)*30; //360/12
        float m=minutes*6; //360/60
        float a=fabs(h-m);
        if(a>180)
            a=360-a;
        return a;
    } 
};
