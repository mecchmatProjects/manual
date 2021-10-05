#include <iostream>

class Vehicle {
 public:
     explicit  Vehicle( int topSpeed ) : m_topSpeed( topSpeed ) {}
     int TopSpeed() const {
        return m_topSpeed;
     }

     virtual void Save( std::ostream& ) const = 0;
 
 private:
     int m_topSpeed;
 };

 class WheeledLandVehicle : public Vehicle {
 public:
     WheeledLandVehicle( int topSpeed, int numberOfWheels )
     : Vehicle( topSpeed ), m_numberOfWheels( numberOfWheels ) {}
     int NumberOfWheels() const {
       return m_numberOfWheels;
     }

     void  print( std::ostream& ) const; // цей метод implicitly virtual
 
 private:
     int m_numberOfWheels;
 };

 class TrackedLandVehicle : public Vehicle {
 public:
    TrackedLandVehicle ( int topSpeed, int numberOfTracks )
    : Vehicle( topSpeed ), m_numberOfTracks ( numberOfTracks )
    {}
    int NumberOfTracks() const {
       return m_numberOfTracks;
    }
    void Save( std::ostream& ) const; // метод implicitly virtual
  private:
    int m_numberOfTracks;
  };
