#pragma once
#include "Vehicle.h"

class Bus : public Vehicle
{
private:

	size_t rating;
	bool hasAC;


public:
	Bus();
	Bus(const MyString &, const MyString &, const size_t, const size_t, const size_t, const bool);

	const size_t getRating() const;
	void setRating(const size_t);
	const bool getHasAC() const;
	void setHasAC(const bool);

	Vehicle *clone() const override;
	void print() const override;
};
