// VectorSample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

int main()
{
	typedef struct VkLayerProperties {
		char        layerName[128];
		uint32_t    specVersion;
		uint32_t    implementationVersion;
		char        description[128];
	} VkLayerProperties;

	std::vector<VkLayerProperties> availableLayers(2);
	availableLayers.clear();
	struct VkLayerProperties p { "Hello\0", 12, 23};
	availableLayers.push_back(p);
	auto a = availableLayers.data();
	cout << a->layerName << endl;
	availableLayers.clear();
	auto b = availableLayers.data();
	cout << b->layerName << endl;
	return 0;
}

