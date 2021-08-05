#ifndef ASSEMBLYSTATSPLUGIN_H
#define ASSEMBLYSTATSPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class AssemblyStatsPlugin : public Plugin
{
public: 
 std::string toString() {return "AssemblyStats";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
