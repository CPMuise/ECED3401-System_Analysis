/*
 * File:    bakery.cpp
 * Authors: Christian Muise and Rod Naugler
 * Created on November 21, 2016
 */

/* PREPROCESSOR DIRECTIVES */
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <deque>
#include <list>

#include "bakery.h"
#include "customer.h"
#include "food.h"
#include "supplier.h"
#include "tallySheet.h"

using namespace std;

const int SIM_DURATION  = 16*60; // number of minutes the simulation runs for

int main(void)
{
	// Initialize variables
	ifstream custIn("input.txt");
	ifstream paramIn("input2.txt");
	ofstream foodRptOut("output1.txt");
	ofstream custRptOut("output2.txt");
	ofstream smryRptOut("output3.txt");
	
	// Parameters from input files
	double lambda;
	double mu;
	double cakeKitPrice;
	double cakePrice;
	double croissantKitPrice;
	double croissantprice;
	int totalCustomers;
 	
 	// Gather parameters from paramIn
 	paramIn >> lambda;
	paramIn >> mu;
	paramIn >> cakeKitPrice;
	paramIn >> cakePrice;
	paramIn >> croissantKitPrice;
	paramIn >> croissantprice;
	
	// Gather parameters from custIn	
	custIn >> totalCustomers;
	
	// Create Master Lists
	list<customer> custMaster;
	list<foodItem> foodMaster;
	
	// Set up scenario
	bakery   OldBedford(cakePrice, croissantPrice, custMaster, foodMaster);
	supplier kitSupplier(cakeKitPrice, croissantKitPrice, custMaster, foodMaster);
 	
  	for(int t = 0; t <= SIM_DURATION; t++){
  		
		  // Check up on orders
  		
  		
  	}
 	// Open-up shop
 	// Iterate minute-by-minute through day
    // Check input files
    // React appropriately
  
	// Close-up Shop
	custIn.close();
	paramIn.close();
	foodRptOut.close();
	CustRptOut.close();
	SmryRptOut.close();
	return 0
}
