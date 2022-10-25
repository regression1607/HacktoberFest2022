/*  Project Name: Student Assistant
    Developed By: Jameur Rahman Fida
    Contact: fida.cse@gmail.com
             fb.me/fida97
             github.com/fida97         */

//Periodic Table C Code

#include <stdio.h>

int PeriodicTable()
{
    struct table
{
    int number;
    char name[15];
    char symbol[5];
    double mass;

};
    int input,i;
    struct table data[]={
        1,"Hydrogen","H",1.008,
        2,"Helium","He",4.003,
        3,"Lithium","Li",6.941,
        4,"Beryllium","Be",9.012,
        5,"Boron","B",10.811,
        6,"Carbon","C",12.011,
        7,"Nitrogen","N",14.007,
        8,"Oxygen","O",15.999,
        9,"Fluorine","F",18.998,
        10,"Neon","Ne",20.180,
        11,"Sodium","Na",22.990,
        12,"Magnesium","Mg",24.305,
        13,"Aluminum","Al",26.982,
        14,"Silicon","Si",28.086,
        15,"Phosphorus","P",30.974,
        16,"Sulfur","S",32.065,
        17,"Chlorine","Cl",35.453,
        18,"Argon","Ar",39.948,
        19,"Potassium","K",39.098,
        20,"Calcium","Ca",40.078,
        21,"Scandium","Sc",44.956,
        22,"Titanium","Ti",47.867,
        23,"Vanadium","V",50.942,
        24,"Chromium","Cr",51.996,
        25,"Manganese","Mn",54.938,
        26,"Iron","Fe",55.845,
        27,"Cobalt","Co",58.933,
        28,"Nickel","Ni",58.693,
        29,"Copper","Cu",63.546,
        30,"Zinc","Zn",65.390,
        31,"Gallium","Ga",69.723,
        32,"Germanium","Ge",72.640,
        33,"Arsenic","As",74.922,
        34,"Selenium","Se",78.960,
        35,"Bromine","Br",79.904,
        36,"Krypton","Kr",83.800,
        37,"Rubidium","Rb",85.468,
        38,"Strontium","Sr",87.620,
        39,"Yttrium","Y",88.906,
        40,"Zirconium","Zr",91.224,
        41,"Niobium","Nb",92.906,
        42,"Molybdenum","Mo",95.940,
        43,"Technetium","Tc",98.000,
        44,"Ruthenium","Ru",101.070,
        45,"Rhodium","Rh",102.906,
        46,"Palladium","Pd",106.420,
        47,"Silver","Ag",107.868,
        48,"Cadmium","Cd",112.411,
        49,"Indium","In",114.818,
        50,"Tin","Sn",118.710,
        51,"Antimony","Sb",121.760,
        52,"tellurium","Te",127.60,
        53,"Iodine","I",126.904,
        54,"Xenon","xe",131.293,
        55,"Caesium","Cs",132.905,
        56,"Barium","Ba",137.327,
        57,"Lanthanum","La",138.905,
        58,"Cerium","Ce",140.116,
        59,"Praseodymium","Pr",140.908,
        60,"Neodymium","Nd",144.242,
        61,"Promethium","Pm",145,
        62,"Samarium","Sm",150.36,
        63,"Europium","Eu",151.964,
        64,"Gadolinium","Gd",157.25,
        65,"Terbium","Tb",158.925,
        66,"Dysprosium","Dy",162.500,
        67,"Holmium","Ho",164.930,
        68,"Erbium","Er",167.259,
        69,"Thulium","Tm",168.934,
        70,"Ytterbium","Yb",173.045,
        71,"Lutetium","Lu",174.967,
        72,"Hafnium","Hf",178.49,
        73,"Tantalum","Ta",180.948,
        74,"Tungsten","W",183.84,
        75,"Rhenium","Re",186.207,
        76,"Osmium","Os",190.23,
        77,"Iridium","Ir",192.217,
        78,"Platium","Pt",195.084,
        79,"Gold","Au",196.967,
        80,"Mercury","Hg",200.592,
        81,"Thallium","Tl",204.38,
        82,"Lead","Pb",207.2,
        83,"Bismuth","Bi",208.980,
        84,"Polonium","Po",209,
        85,"Astatine","At",210,
        86,"Radon","Rn",222,
        87,"Francium","Fr",223,
        88,"Radium","Ra",226,
        89,"Actinium","Ac",227,
        90,"Thorium","Th",232.038,
        91,"Protactinium","Pa",231.036,
        92,"Uranium","U",238.029,
        93,"Neptunium","Np",237,
        94,"Plutonium","Pu",244,
        95,"Americium","Am",243,
        96,"Curium","Cm",247,
        97,"Berkelium","Bk",247,
        98,"Californium","Cf",251,
        99,"Einsteinium","Es",252,
        100,"Fermium","Fm",257,
        101,"Mendelevium","Md",258,
        102,"Nobelium","No",259,
        103,"Lawrencium","Lr",262,
        104,"Rutherfordium","Rf",267,
        105,"Dubnium","Db",268,
        106,"Seaborgium","Sg",269,
        107,"Bohrium","Bh",270,
        108,"Hassium","Hs",269,
        109,"Meitnerium","Mt",278,
        110,"Darmstadtium","Ds",281,
        111,"Roentgenium","Rg",280,
        112,"Copernicium","Cn",285,
        113,"Nihonium","Nh",286,
        114,"Flerovium","Fl",289,
        115,"Moscovium","Mc",289,
        116,"Livermorium","Lv",293,
        117,"Tennessine","Ts",294,
        118,"Oganesson","Og",294,
    };
    printf("     Welcome To Periodic Table\n\n\n");
    printf("Enter Atomic Number: ");
    scanf("%d",&input);
    for(i=0;i<120;i++)
    {
        if(i+1==input)
        {
            printf("\n\nName: %s\n\nSymbol: %s\n\nAtomic Number: %d\n\nAtomic Mass: %0.3lf\n\n",data[i].name,data[i].symbol,data[i].number,data[i].mass);
        }
    }
    mainmenu();
}
