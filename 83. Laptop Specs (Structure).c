#include<stdio.h>
struct lap_specs{
char name[20];
char processor[15];
int ram,rom,wifi;
float bt;
};
int main(){
struct lap_specs x,y,z;

printf("FIRST LAPTOP'S SPECIFICATIONS");
printf("\n\nLaptop's Brand \n");
scanf("%s", x.name);
printf("How much RAM \n");
scanf("%d", &x.ram);
printf("How much ROM (GB) \n");
scanf("%d", &x.rom);
printf("Which Processor \n");
scanf("%s", x.processor);
printf("How many WiFi Bands \n");
scanf("%d", &x.wifi);
printf("Which Bluetooth Version \n");
scanf("%f", &x.bt);

printf("\nSECOND LAPTOP'S SPECIFICATIONS");
printf("\n\nLaptop's Brand \n");
scanf("%s", y.name);
printf("How much RAM \n");
scanf("%d", &y.ram);
printf("How much ROM (GB) \n");
scanf("%d", &y.rom);
printf("Which Processor \n");
scanf("%s", y.processor);
printf("How many WiFi Bands \n");
scanf("%d", &y.wifi);
printf("Which Bluetooth Version \n");
scanf("%f", &y.bt);

printf("\nTHIRD LAPTOP'S SPECIFICATIONS");
printf("\n\nLaptop's Brand \n");
scanf("%s", z.name);
printf("How much RAM \n");
scanf("%d", &z.ram);
printf("How much ROM (GB) \n");
scanf("%d", &z.rom);
printf("Which Processor \n");
scanf("%s", z.processor);
printf("How many WiFi Bands \n");
scanf("%d", &z.wifi);
printf("Which Bluetooth Version \n");
scanf("%f", &z.bt);

printf("\n-----------------------------------------------\n");
printf("-----------------------------------------------");
printf("\n\nFirst Laptop's Specs \n\n");
printf("Name- %s\nRAM- %d\nROM (GB)- %d\nProcessor- %s\nWiFi Bands- %d\nBluetooth Version- %f\n",x.name,x.ram,x.rom,x.processor,x.wifi,x.bt);

printf("\n-----------------------------------------------\n");
printf("-----------------------------------------------");
printf("\n\nSecond Laptop's Specs \n\n");
printf("Name- %s\nRAM- %d\nROM (GB)- %d\nProcessor- %s\nWiFi Bands- %d\nBluetooth Version- %f\n",y.name,y.ram,y.rom,y.processor,y.wifi,y.bt);

printf("\n-----------------------------------------------\n");
printf("-----------------------------------------------");
printf("\n\nThird Laptop's Specs \n\n");
printf("Name- %s\nRAM- %d\nROM (GB)- %d\nProcessor- %s\nWiFi Bands- %d\nBluetooth Version- %f\n",z.name,z.ram,z.rom,z.processor,z.wifi,z.bt);
printf("\nTHANK YOU \n");
return 0;
}
