#ifndef TRIPORGANIZER_TRIP_H
#define TRIPORGANIZER_TRIP_H

#include <stdio.h>

#define BCN_LAT 41.3818
#define BCN_LON 2.1685

#define EARTH_RADIUS 6371000.0

typedef struct {
	double lat;
	double lon;
} Coordinates;

typedef struct {
	char * name;
	char * country;

	int area;
	int n;
	double ** travelAltitude;

	int nHotels;
	double * hotelPrices;

	Coordinates location;
} Destination;

double haversine(double ang);
double getDistanceFromBcn(Destination dest);
double getDistanceBetween(Destination this, Destination that);
double getAverageHotelPrice(Destination dest);
void advanceInDirection(int *i, int *j, int direction);
double checkAltitudeInDirection(double ** travelAltitude, int i, int j, int direction, int n);
double travelThroughAltitude(double ** travelAltitude, int i, int j, int n);
double getTimeFromBcn(Destination dest);
void mapAltitude(double ** travelAltitude, char ** map, int i, int j, int n);
char ** mapAltitudeTravel(Destination dest);
void freeAll(Destination dest);
char * readString(FILE * file);
Destination readFromFile(FILE * file);

#endif
