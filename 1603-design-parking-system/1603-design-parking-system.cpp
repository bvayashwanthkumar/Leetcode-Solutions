class ParkingSystem {
public:
    int b1,m1,s1;
    ParkingSystem(int big, int medium, int small) {
        b1=big;
        m1=medium;
        s1=small;
    }
    
    bool addCar(int carType) {
        if(carType==1){
            if(b1!=0){
                b1--;
                return true;
            }
            else return false;
        }
        else if(carType==2){
            if(m1!=0){
                m1--;
                return true;
            }
            else return false;
        }
        else{
            if(s1!=0){
                s1--;
                return true;
            }
            else return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */