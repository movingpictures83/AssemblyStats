#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "AssemblyStatsPlugin.h"

void AssemblyStatsPlugin::input(std::string file) {
 inputfile = file;
}

void AssemblyStatsPlugin::run() {
   
}

void AssemblyStatsPlugin::output(std::string file) {
 // spades.py -o 02_AssemblyStats -1 $1 -2 $2 --careful
 // assembly-stats -t ./All_assemblies/*.fasta > ./All_assemblies/00_Metrics_all_assemblies.txt
	std::string command = "assembly-stats -t "+inputfile+"/*.fasta";
 std::cout << command << std::endl;

 system(command.c_str());

}

PluginProxy<AssemblyStatsPlugin> AssemblyStatsPluginProxy = PluginProxy<AssemblyStatsPlugin>("AssemblyStats", PluginManager::getInstance());
