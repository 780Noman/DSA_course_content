#include <iostream>
#include <vector>
#include <cstdlib>
#include <list> //use doubly list to make graph structure
#include <iterator>
using namespace std;
class Edge
{
private:
public:
int destVertexId, weight;
Edge() {}
Edge(int dvId, int w)
{
destVertexId = dvId;
weight = w;
}
void setEdgetValues(int dvId, int w)
{
destVertexId = dvId;
weight = w;
}
void setweight(int w)
{
weight = w;
}
int getDestVertexId()
{
return destVertexId;
}
};
class Vertex
{
private:
public:
int state_id;
string state_name;
list<Edge> edgelist;
Vertex(){};
Vertex(int s_id, string s_name)
{
state_id = s_id;
state_name = s_name;
}
int getState_Id()
{
return state_id;
}
void SetID(int id)
{
state_id = id;
}
void getState_Name(string name)
{
state_name = name;
}
list<Edge> getEdgelist()
{
return edgelist;
}
};
class Graph
{
private:
public:
vector<Vertex> vertices;
};
class SmartMap : Graph
{
private:
struct loc
{
int CpLocId, CrLocId, DpLocId, DrLocId;
} l;
string current_location,destination_location;
public:
SmartMap()
{
l.CpLocId = -1;
l.CrLocId = -1;
l.DpLocId = -1;
l.DrLocId = -1;
current_location = "";
destination_location = "";
}
enum current_loc_primary
{
SatelliteTown = 1,
TenchBhata,
RajaBazar,
noIdea
} clp;
void loc()
{
int choice, ch;
cout << "Choose Your Primary Location from the List" << endl<< endl;
cout << "Press " << SatelliteTown << " for Satellite town" << endl;
cout << "Press " << TenchBhata << " for Tench Bhata" << endl;
cout << "Press " << RajaBazar << " for Raja Bazar" << endl;
cin >> choice;
// Now Restricting the Location on the Map
do
{
if (choice == SatelliteTown)
{
l.CpLocId = SatelliteTown;
system("CLS");
cout << "Choose Your Nearest Location on the List" << endl;
enum SatelliteLoc
{
Bblock = 1,
Eblock,
AlJanatMallCommercialMarket,
RehmanaBad,
noIdea
} sl;
system("CLS");
cout << "Press " << Bblock << " to select B Block\n";
cout << "Press " << Eblock << " to select E Block\n";
cout << "Press " <<AlJanatMallCommercialMarket << " to select Al Janat Commercial Market\n";
cout << "Press " << RehmanaBad << "to select RehmanaBad Chowk\n";
cin >> ch;
if (ch == Bblock)
{
l.CrLocId = Bblock;
system("CLS");
current_location = "B block,Satellite town";
}
else if (ch == Eblock)
{
l.CrLocId = Eblock;
system("CLS");
current_location = "E block,Satellite town";
}
else if (ch ==AlJanatMallCommercialMarket)
{
l.CrLocId =AlJanatMallCommercialMarket;
system("CLS");
current_location = "Al Janat Mall,Commercial Market, Satellite town";
}
else if (ch == RehmanaBad)
{
l.CrLocId = RehmanaBad;
system("CLS");
current_location = "RehmanaBad Chowk, Satellite town";
}
else
{
l.CrLocId = -1;
system("CLS");
current_location = "Satellite town";
}
}
else if (choice == TenchBhata)
{
enum TenchBhataloc
{
FaisalGarments = 1,
ChinaTownMarket,
HabibBankLtd,
AlRehamnElectronicStore,
noIdea
} tloc;
cout << "Choose Your Nearest Location on the List" << endl;
cout << "Press " << FaisalGarments <<" to select Faisal Garments\n";
cout << "Press " << ChinaTownMarket<< " to select China Town Market\n";
cout << "Press " << HabibBankLtd << " to select Habib Bank Ltd\n";
cout << "Press " <<AlRehamnElectronicStore << " to select Al Rehamn Electronics Store\n";
cout << "Press " << noIdea << " to select no Idea\n";
cin >> ch;
if (ch == FaisalGarments)
{
l.CrLocId = FaisalGarments;
system("CLS");
current_location = "Faisal Garments, TenchBhata";
}
else if (ch == ChinaTownMarket)
{
l.CrLocId = ChinaTownMarket;
system("CLS");
current_location = "China Town Market, TenchBhata";
}
else if (ch == HabibBankLtd)
{
l.CrLocId = HabibBankLtd;
system("CLS");
current_location = "Habib Bank Ltd,TenchBhata";
}
}
else if (choice == RajaBazar)
{
l.CrLocId = RajaBazar;
system("CLS");
cout << "Choose Your Nearest Location on the List" << endl;
enum RajaBazarLoc
{
MadinaMarket = 1,
MakkaMarket,
JaddaMarket,
MottiBazar,
FaisaMarket,
JamaMasjidRoad,
noIdea
} Rloc;
cout << "Press " << MadinaMarket << " to select Madina Market\n";
cout << "Press " << MakkaMarket << " to select Makka Market\n";
cout << "Press " << JaddaMarket << " to select Jadda Market\n";
cout << "Press " << MottiBazar << "  to select Motti Bazar\n";
cout << "Press " << FaisaMarket << " to select Faisa Market\n";
cout << "Press " << JamaMasjidRoad << " to select Jama Masjid Road\n";
cout << "Press " << noIdea << " to select no Idea\n";
cin >> ch;
if (ch == MadinaMarket)
{
l.CrLocId = MadinaMarket;
system("CLS");
current_location = "Madina Market,RajaBazar";
}
else if (ch == MakkaMarket)
{
l.CrLocId = MakkaMarket;
system("CLS");
current_location = "Makka Market,RajaBazar";
}
else if (ch == JaddaMarket)
{
l.CrLocId = JaddaMarket;
system("CLS");
current_location = "Jadda Market,RajaBazar";
}
else if (ch == MottiBazar)
{
l.CrLocId = MottiBazar;
system("CLS");
current_location = "Motti Bazar,RajaBazar";
}
else if (ch == FaisaMarket)
{
l.CrLocId = FaisaMarket;
system("CLS");
current_location = "Faisa Market,RajaBazar";
}
else if (ch == JamaMasjidRoad)
{
l.CrLocId = JamaMasjidRoad;
system("CLS");
current_location = "Jama Masjid Road";
}
else
{
l.CrLocId = -1;
system("CLS");
current_location = "Raja Bazar";
}
}
else
{
cout << "Invalid Option Choose Correct Option\n";
}
} while (choice != SatelliteTown || choice
!= TenchBhata || choice != RajaBazar);
}
};
int main() {
SmartMap s;
s.loc();
return 0;
}
