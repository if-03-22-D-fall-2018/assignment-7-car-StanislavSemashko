
#include "car.h"

struct CarImplimintation
{
  enum CarType type;
  enum Color color;
  double fill_level;
  double acceleration_rate;
  int speed;
  bool is_available = true;

};


struct CarImplimintation aixam1{AIXAM, RED, 16.0, 0.0, 0};
struct CarImplimintation fiat1{FIAT_MULTIPLA, GREEN, 65.0, 0.0, 0};
struct CarImplimintation fiat2{FIAT_MULTIPLA, BLUE, 65.0, 0.0, 0};
struct CarImplimintation fiat3{FIAT_MULTIPLA, ORANGE ,65.0, 0.0, 0};
struct CarImplimintation jeep1{JEEP, SILVER, 80.0, 0.0, 0};
struct CarImplimintation jeep2{JEEP, BLACK, 80.0, 0.0, 0};

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
  return 0;
}
void init()
{
  for (int i = 0; i < 6; i++)
  {
    car_park[i]->is_available = true;
    car_park[i]->acceleration_rate = 0;
  }
}
void set_acceleration_rate(Car car, int acceleration)
{
  car->acceleration_rate += acceleration;
}
void accelerate(Car car)
{

}
