class ParkingSystem {
    int big, medium, small;
public:
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }
    
    bool addCar(int carType) {
        bool status = false;
        switch(carType){
            case 1:
                big-=1;
                status = big>=0;
                break;
             case 2:
                medium-=1;
                status = medium>=0;
                break;
            case 3:
                small-=1;
                status = small>=0;
                break;        
        }
        return status;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */