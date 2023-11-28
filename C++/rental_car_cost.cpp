int rental_car_cost(int d){
  return (d * 40) - (d >= 3 ? (d >= 7 ? 50 : 20) : 0);
}