
#include "car.h"

struct CarImplimintation
{
  enum CarType type;
  enum Color color;
  double fill_level;
  double acceleration_rate;
  int speed;
  bool is_available = true;
  double maximum_acceleration;
  double minimum_accelaration;

};


struct CarImplimintation aixam1{AIXAM, RED, 16.0, 0.0, 0, true, 1, -8};
struct CarImplimintation fiat1{FIAT_MULTIPLA, GREEN, 65.0, 0.0, 0, true,2.26, -8};
struct CarImplimintation fiat2{FIAT_MULTIPLA, BLUE, 65.0, 0.0, 0, true, 2.26, -8};
struct CarImplimintation fiat3{FIAT_MULTIPLA, ORANGE ,65.0, 0.0, 0, true, 2.26, -8};
struct CarImplimintation jeep1{JEEP, SILVER, 80.0, 0.0, 0, true, 3.14, -8};
struct CarImplimintation jeep2{JEEP, BLACK, 80.0, 0.0, 0, true, 3.14, -8};

Car car_park[6]={&aixam1, &fiat1, & fiat2, &fiat3, &jeep1, &jeep2};

Car get_car(CarType type)
{
  for (int i = 0; i < 6; i++)
  {
      if (car_park[i]->type == type && car_park[i]->is_available == true)
      {
        car_park[i]->is_available = false;
        return car_park[i];
      }
  }
  return 0;
}
CarType get_type(Car car)
{
  return car->type;
}
Color get_color(Car car)
{
  return car->color;
}
double get_fill_level(Car car)
{
  return car->fill_level;
}
double get_acceleration_rate(Car car)
{
  return car->acceleration_rate;
}
int get_speed(Car car)
{
  return car->speed;
}
void init()
{
  for (int i = 0; i < 6; i++)
  {
    car_park[i]->is_available = true;
    car_park[i]->acceleration_rate = 0;
  }
}
void set_acceleration_rate(Car car, double acceleration)
{
  if (acceleration > car->maximum_acceleration)
  {
    car->acceleration_rate = car->maximum_acceleration;
  }
  else if (acceleration < car->minimum_accelaration)
  {
    car->acceleration_rate = car->minimum_accelaration;
  }
  else
  {
      car->acceleration_rate = acceleration;
  }
}
void accelerate(Car car)
{
  car->speed = car->acceleration_rate * 4;
}
