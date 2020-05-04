#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_118_clicked()
{
    ui->label->setText("Hydrogen\n GROUP : 1 \n PERIOD : 1 \n ATOMIC WEIGHT : 1.008 \n DENSITY : 0.00008988 \n ");
}

void MainWindow::on_pushButton_89_clicked()
{
    ui->label->setText("Helium \n GROUP : 18 \n PERIOD : 1 \n ATOMIC WEIGHT : 4.002602 \n DENSITY : 0.0001785 \n ");
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("Lithium \n GROUP : 1 \n PERIOD : 2 \n ATOMIC WEIGHT : 6.94 \n DENSITY : 0.534 \n ");
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->label->setText("Beryllium \n GROUP : 2 \n PERIOD : 2 \n ATOMIC WEIGHT : 9.0121831 \n DENSITY : 1.85 \n ");
}

void MainWindow::on_pushButton_62_clicked()
{
    ui->label->setText("Boron \n GROUP : 13 \n PERIOD : 2 \n ATOMIC WEIGHT : 10.81 \n DENSITY : 2.34 \n ");
}

void MainWindow::on_pushButton_63_clicked()
{
    ui->label->setText("Carbon \n GROUP : 14 \n PERIOD : 2 \n ATOMIC WEIGHT : 12.011 \n DENSITY : 2.267 \n ");
}

void MainWindow::on_pushButton_64_clicked()
{
    ui->label->setText("Nitrogen  \n GROUP : 15 \n PERIOD : 2 \n ATOMIC WEIGHT : 14.007 \n DENSITY : 0.0012506 \n ");
}

void MainWindow::on_pushButton_66_clicked()
{
    ui->label->setText("Oxygen  \n GROUP : 16 \n PERIOD : 2 \n ATOMIC WEIGHT : 15.999 \n DENSITY : 0.001429 \n ");
}

void MainWindow::on_pushButton_65_clicked()
{
    ui->label->setText("Fluorine \n GROUP : 17 \n PERIOD : 2 \n ATOMIC WEIGHT : 18.998403163 \n DENSITY : 0.001696 \n ");
}

void MainWindow::on_pushButton_88_clicked()
{
    ui->label->setText("Neon  \n GROUP : 18 \n PERIOD : 2 \n ATOMIC WEIGHT : 20.1797 \n DENSITY : 0.0008999 \n ");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("Sodium  \n GROUP : 1 \n PERIOD : 3 \n ATOMIC WEIGHT : 22.98976928 \n DENSITY : 0.971 \n ");
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->label->setText("Magnesium \n GROUP : 2 \n PERIOD : 3 \n ATOMIC WEIGHT : 24.305 \n DENSITY : 1.738 \n ");
}

void MainWindow::on_pushButton_61_clicked()
{
    ui->label->setText("Aluminium\n GROUP : 13 \n PERIOD : 3 \n ATOMIC WEIGHT : 26.9815384 \n DENSITY : 2.698 \n ");
}

void MainWindow::on_pushButton_71_clicked()
{
    ui->label->setText("Silicon  \n GROUP : 14 \n PERIOD : 3 \n ATOMIC WEIGHT : 28.085 \n DENSITY : 2.3296 \n ");
}

void MainWindow::on_pushButton_75_clicked()
{
    ui->label->setText("Phosphorus \n GROUP : 15 \n PERIOD : 3 \n ATOMIC WEIGHT : 30.973761998 \n DENSITY : 1.82 \n ");
}

void MainWindow::on_pushButton_76_clicked()
{
    ui->label->setText("Sulfur \n GROUP : 16 \n PERIOD : 3 \n ATOMIC WEIGHT : 32.06 \n DENSITY : 2.067 \n ");
}

void MainWindow::on_pushButton_67_clicked()
{
    ui->label->setText("Chlorine \n GROUP : 17 \n PERIOD : 3 \n ATOMIC WEIGHT : 35.45 \n DENSITY : 0.003214 \n ");
}

void MainWindow::on_pushButton_87_clicked()
{
    ui->label->setText("Argon \n GROUP : 18 \n PERIOD : 3 \n ATOMIC WEIGHT : 39.95 \n DENSITY : 0.0017837 \n ");
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->label->setText("Potassium \n GROUP : 1 \n PERIOD : 4 \n ATOMIC WEIGHT : 39.0983 \n DENSITY : 0.862 \n ");
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->label->setText("Calcium \n GROUP : 2 \n PERIOD : 4 \n ATOMIC WEIGHT : 40.078 \n DENSITY : 1.54 \n ");
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->label->setText("Scandium \n GROUP : 3 \n PERIOD : 4 \n ATOMIC WEIGHT : 44.955908 \n DENSITY : 2.989 \n ");
}

void MainWindow::on_pushButton_17_clicked()
{
    ui->label->setText("Titanium \n GROUP : 4 \n PERIOD : 4 \n ATOMIC WEIGHT : 47.867 \n DENSITY : 4.54 \n ");
}

void MainWindow::on_pushButton_21_clicked()
{
    ui->label->setText("Vanadium \n GROUP : 5 \n PERIOD : 4 \n ATOMIC WEIGHT : 50.9415 \n DENSITY : 6.11 \n ");
}

void MainWindow::on_pushButton_25_clicked()
{
    ui->label->setText("Chromium \n GROUP : 6 \n PERIOD : 4 \n ATOMIC WEIGHT : 51.9961 \n DENSITY : 7.15 \n ");
}

void MainWindow::on_pushButton_26_clicked()
{
    ui->label->setText("Manganese \n GROUP : 7 \n PERIOD : 4 \n ATOMIC WEIGHT : 54.938043 \n DENSITY : 7.44 \n ");
}

void MainWindow::on_pushButton_27_clicked()
{
    ui->label->setText("Iron \n GROUP : 8 \n PERIOD : 4 \n ATOMIC WEIGHT : 55.845 \n DENSITY : 7.874 \n ");
}

void MainWindow::on_pushButton_28_clicked()
{
    ui->label->setText("Cobalt \n GROUP : 9 \n PERIOD : 4 \n ATOMIC WEIGHT : 58.933194 \n DENSITY : 8.86 \n ");
}

void MainWindow::on_pushButton_29_clicked()
{
    ui->label->setText("Nickel \n GROUP : 10 \n PERIOD : 4 \n ATOMIC WEIGHT : 58.6934 \n DENSITY : 8.912 \n ");
}

void MainWindow::on_pushButton_30_clicked()
{
    ui->label->setText("Copper \n GROUP : 11 \n PERIOD : 4 \n ATOMIC WEIGHT : 63.546 \n DENSITY : 8.96 \n ");
}

void MainWindow::on_pushButton_31_clicked()
{
    ui->label->setText("Zinc \n GROUP : 12 \n PERIOD : 4 \n ATOMIC WEIGHT : 65.38 \n DENSITY : 7.134 \n ");
}

void MainWindow::on_pushButton_60_clicked()
{
    ui->label->setText("Gallium \n GROUP : 13 \n PERIOD : 4 \n ATOMIC WEIGHT : 69.723 \n DENSITY : 5.907 \n ");
}

void MainWindow::on_pushButton_72_clicked()
{
    ui->label->setText("Germanium \n GROUP : 14 \n PERIOD : 4 \n ATOMIC WEIGHT : 72.630 \n DENSITY : 5.323 \n ");
}

void MainWindow::on_pushButton_77_clicked()
{
    ui->label->setText("Arsenic \n GROUP : 15 \n PERIOD : 4 \n ATOMIC WEIGHT : 74.921595 \n DENSITY : 5.776 \n ");
}

void MainWindow::on_pushButton_82_clicked()
{
    ui->label->setText("Selenium \n GROUP : 16 \n PERIOD : 4 \n ATOMIC WEIGHT : 78.971 \n DENSITY : 4.809 \n ");
}

void MainWindow::on_pushButton_68_clicked()
{
    ui->label->setText("Bromine \n GROUP : 17 \n PERIOD : 4 \n ATOMIC WEIGHT : 79.904 \n DENSITY : 3.122 \n ");
}

void MainWindow::on_pushButton_86_clicked()
{
    ui->label->setText("Krypton \n GROUP : 18 \n PERIOD : 4 \n ATOMIC WEIGHT : 83.798 \n DENSITY : 0.003733 \n ");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->label->setText("Rubidium \n GROUP : 1 \n PERIOD : 5 \n ATOMIC WEIGHT : 85.4678 \n DENSITY : 1.532 \n ");
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->label->setText("Strontium \n GROUP : 2 \n PERIOD : 5 \n ATOMIC WEIGHT : 87.62 \n DENSITY : 2.64 \n ");
}

void MainWindow::on_pushButton_14_clicked()
{
    ui->label->setText("Yttrium \n GROUP : 3 \n PERIOD : 5 \n ATOMIC WEIGHT : 88.90584 \n DENSITY : 4.469 \n ");
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->label->setText("Zirconium \n GROUP : 4 \n PERIOD : 5 \n ATOMIC WEIGHT : 91.224 \n DENSITY : 6.506 \n ");
}

void MainWindow::on_pushButton_22_clicked()
{
    ui->label->setText("Niobium \n GROUP : 5 \n PERIOD : 5 \n ATOMIC WEIGHT : 92.90637 \n DENSITY : 8.57 \n ");
}

void MainWindow::on_pushButton_41_clicked()
{
    ui->label->setText("Molybdenum \n GROUP : 6 \n PERIOD : 5 \n ATOMIC WEIGHT : 95.95 \n DENSITY : 10.22 \n ");
}

void MainWindow::on_pushButton_43_clicked()
{
    ui->label->setText("Technetium \n GROUP : 7 \n PERIOD : 5 \n ATOMIC WEIGHT : 98 \n DENSITY : 11.5 \n ");
}

void MainWindow::on_pushButton_44_clicked()
{
    ui->label->setText("Ruthenium \n GROUP : 8 \n PERIOD : 5 \n ATOMIC WEIGHT : 101.07 \n DENSITY : 12.37 \n ");
}

void MainWindow::on_pushButton_45_clicked()
{
    ui->label->setText("Rhodium \n GROUP : 9 \n PERIOD : 5 \n ATOMIC WEIGHT : 101.07 \n DENSITY : 12.37 \n ");
}

void MainWindow::on_pushButton_46_clicked()
{
    ui->label->setText("Palladium \n GROUP : 10 \n PERIOD : 5 \n ATOMIC WEIGHT : 102.90549 \n DENSITY : 12.41 \n ");
}

void MainWindow::on_pushButton_47_clicked()
{
    ui->label->setText("Silver \n GROUP : 11 \n PERIOD : 5 \n ATOMIC WEIGHT : 106.42 \n DENSITY : 12.02 \n ");
}

void MainWindow::on_pushButton_32_clicked()
{
    ui->label->setText("Cadmium \n GROUP : 12 \n PERIOD : 5 \n ATOMIC WEIGHT : 107.8682 \n DENSITY : 10.501 \n ");
}

void MainWindow::on_pushButton_59_clicked()
{
    ui->label->setText("Indium \n GROUP : 13 \n PERIOD : 5 \n ATOMIC WEIGHT : 112.414 \n DENSITY : 8.69 \n ");
}

void MainWindow::on_pushButton_73_clicked()
{
    ui->label->setText("Tin \n GROUP : 14 \n PERIOD : 5 \n ATOMIC WEIGHT : 114.818 \n DENSITY : 7.31 \n ");
}

void MainWindow::on_pushButton_78_clicked()
{
    ui->label->setText("Antimony \n GROUP : 15 \n PERIOD : 5 \n ATOMIC WEIGHT : 118.710 \n DENSITY : 7.287 \n ");
}

void MainWindow::on_pushButton_81_clicked()
{
    ui->label->setText("Tellurium \n GROUP : 16 \n PERIOD : 5 \n ATOMIC WEIGHT : 121.760 \n DENSITY : 6.685 \n ");
}

void MainWindow::on_pushButton_69_clicked()
{
    ui->label->setText("Iodine \n GROUP : 17 \n PERIOD : 5 \n ATOMIC WEIGHT : 127.60 \n DENSITY : 6.232 \n ");
}

void MainWindow::on_pushButton_85_clicked()
{
    ui->label->setText("Xenon \n GROUP : 18 \n PERIOD : 5 \n ATOMIC WEIGHT : 126.90447 \n DENSITY : 4.93 \n ");
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->label->setText("Caesium \n GROUP : 1 \n PERIOD : 6 \n ATOMIC WEIGHT : 132.90545196 \n DENSITY : 1.873 \n ");
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->label->setText("Barium \n GROUP : 2 \n PERIOD : 6 \n ATOMIC WEIGHT : 137.327 \n DENSITY : 3.594 \n ");
}

void MainWindow::on_pushButton_15_clicked()
{
    ui->label->setText("Lanthanum \n GROUP : 3 \n PERIOD : 6 \n ATOMIC WEIGHT : 138.90547 \n DENSITY : 6.145 \n ");
}

void MainWindow::on_pushButton_19_clicked()
{
    ui->label->setText("Hafnium \n GROUP : 4 \n PERIOD : 6 \n ATOMIC WEIGHT : 178.49 \n DENSITY : 13.31 \n ");
}

void MainWindow::on_pushButton_23_clicked()
{
    ui->label->setText("Tantalum \n GROUP : 5 \n PERIOD : 6 \n ATOMIC WEIGHT : 180.94788 \n DENSITY : 16.654 \n ");
}

void MainWindow::on_pushButton_42_clicked()
{
    ui->label->setText("Tungsten \n GROUP : 6 \n PERIOD : 6 \n ATOMIC WEIGHT : 183.84 \n DENSITY : 19.25 \n ");
}

void MainWindow::on_pushButton_52_clicked()
{
    ui->label->setText("Rhenium \n GROUP : 7 \n PERIOD : 6 \n ATOMIC WEIGHT : 186.207 \n DENSITY : 21.02 \n ");
}

void MainWindow::on_pushButton_51_clicked()
{
    ui->label->setText("Osmium \n GROUP : 8 \n PERIOD : 6 \n ATOMIC WEIGHT : 190.23 \n DENSITY : 22.61 \n ");
}

void MainWindow::on_pushButton_50_clicked()
{
    ui->label->setText("Iridium \n GROUP : 9 \n PERIOD : 6 \n ATOMIC WEIGHT : 192.217 \n DENSITY : 22.56 \n ");
}

void MainWindow::on_pushButton_49_clicked()
{
    ui->label->setText("Platinum \n GROUP : 10 \n PERIOD : 6 \n ATOMIC WEIGHT : 195.084 \n DENSITY : 21.46 \n ");
}

void MainWindow::on_pushButton_48_clicked()
{
    ui->label->setText("Gold \n GROUP : 11 \n PERIOD : 6 \n ATOMIC WEIGHT : 196.966570 \n DENSITY : 19.282 \n ");
}

void MainWindow::on_pushButton_33_clicked()
{
    ui->label->setText("Mercury \n GROUP : 12 \n PERIOD : 6 \n ATOMIC WEIGHT : 200.592 \n DENSITY : 13.5336 \n ");
}

void MainWindow::on_pushButton_58_clicked()
{
    ui->label->setText("Thallium \n GROUP : 13 \n PERIOD : 6 \n ATOMIC WEIGHT : 204.38 \n DENSITY : 11.85 \n ");
}

void MainWindow::on_pushButton_74_clicked()
{
    ui->label->setText("Lead \n GROUP : 14 \n PERIOD : 6 \n ATOMIC WEIGHT : 207.20 \n DENSITY : 11.342 \n ");
}

void MainWindow::on_pushButton_79_clicked()
{
    ui->label->setText("Bismuth \n GROUP : 15 \n PERIOD : 6 \n ATOMIC WEIGHT : 208.98040 \n DENSITY : 9.807 \n ");
}

void MainWindow::on_pushButton_80_clicked()
{
    ui->label->setText("Polonium \n GROUP : 16 \n PERIOD : 6 \n ATOMIC WEIGHT : 209 \n DENSITY : 9.32 \n ");
}

void MainWindow::on_pushButton_70_clicked()
{
    ui->label->setText("Astatine \n GROUP : 17 \n PERIOD : 6 \n ATOMIC WEIGHT : 210 \n DENSITY : 7 \n ");
}

void MainWindow::on_pushButton_84_clicked()
{
    ui->label->setText("Radon \n GROUP : 18 \n PERIOD : 6 \n ATOMIC WEIGHT : 222 \n DENSITY : 1.87 \n ");
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->label->setText("Francium \n GROUP : 1 \n PERIOD : 7 \n ATOMIC WEIGHT : 223 \n DENSITY : 1.87 \n ");
}

void MainWindow::on_pushButton_12_clicked()
{
    ui->label->setText("Radium \n GROUP : 2 \n PERIOD : 7 \n ATOMIC WEIGHT : 226 \n DENSITY : 5.5 \n ");
}

void MainWindow::on_pushButton_16_clicked()
{
    ui->label->setText("Actinium \n GROUP : 3 \n PERIOD : 7 \n ATOMIC WEIGHT : 227 \n DENSITY : 10.07 \n ");
}

void MainWindow::on_pushButton_20_clicked()
{
    ui->label->setText("Rutherfordium \n GROUP : 4 \n PERIOD : 7 \n ATOMIC WEIGHT : 267 \n DENSITY : 23.2 \n ");
}

void MainWindow::on_pushButton_24_clicked()
{
    ui->label->setText("Dubnium \n GROUP : 5 \n PERIOD : 7 \n ATOMIC WEIGHT : 268 \n DENSITY : 29.3 \n ");
}

void MainWindow::on_pushButton_35_clicked()
{
    ui->label->setText("Seaborgium \n GROUP : 6 \n PERIOD : 7 \n ATOMIC WEIGHT : 269 \n DENSITY : 35.0 \n ");
}

void MainWindow::on_pushButton_36_clicked()
{
    ui->label->setText("Bohrium \n GROUP : 7 \n PERIOD : 7 \n ATOMIC WEIGHT : 270 \n DENSITY : 37.1 \n ");
}

void MainWindow::on_pushButton_38_clicked()
{
    ui->label->setText("Hassium \n GROUP : 8 \n PERIOD : 7 \n ATOMIC WEIGHT : 270 \n DENSITY : 40.7 \n ");
}

void MainWindow::on_pushButton_37_clicked()
{
    ui->label->setText("Meitnerium \n GROUP : 9 \n PERIOD : 7 \n ATOMIC WEIGHT : 278 \n DENSITY : 37.4 \n ");
}

void MainWindow::on_pushButton_39_clicked()
{
    ui->label->setText("Darmstadtium \n GROUP : 10 \n PERIOD : 7 \n ATOMIC WEIGHT : 281 \n DENSITY : 34.8 \n ");
}

void MainWindow::on_pushButton_40_clicked()
{
    ui->label->setText("Roentgenium \n GROUP : 11 \n PERIOD : 7 \n ATOMIC WEIGHT : 282 \n DENSITY : 28.7 \n ");
}

void MainWindow::on_pushButton_34_clicked()
{
    ui->label->setText("Copernicium \n GROUP : 12 \n PERIOD : 7 \n ATOMIC WEIGHT : 285 \n DENSITY : 14.0 \n ");
}

void MainWindow::on_pushButton_53_clicked()
{
    ui->label->setText("Nihonium \n GROUP : 13 \n PERIOD : 7 \n ATOMIC WEIGHT : 286 \n DENSITY : 16 \n ");
}

void MainWindow::on_pushButton_54_clicked()
{
    ui->label->setText("Flerovium \n GROUP : 14 \n PERIOD : 7 \n ATOMIC WEIGHT : 289 \n DENSITY : 14 \n ");
}

void MainWindow::on_pushButton_55_clicked()
{
    ui->label->setText("Moscovium \n GROUP : 15 \n PERIOD : 7 \n ATOMIC WEIGHT : 290 \n DENSITY : 13.5 \n ");
}

void MainWindow::on_pushButton_56_clicked()
{
    ui->label->setText("Livermorium \n GROUP : 16 \n PERIOD : 7 \n ATOMIC WEIGHT : 293 \n DENSITY : 12.9 \n ");
}

void MainWindow::on_pushButton_57_clicked()
{
    ui->label->setText("Tennessine \n GROUP : 17 \n PERIOD : 7 \n ATOMIC WEIGHT : 294 \n DENSITY : 7.2 \n ");
}

void MainWindow::on_pushButton_83_clicked()
{
    ui->label->setText("Oganesson \n GROUP : 18 \n PERIOD : 7 \n ATOMIC WEIGHT : 294 \n DENSITY : 5.0 \n ");
}

void MainWindow::on_pushButton_90_clicked()
{
    ui->label->setText("Cerium \n GROUP : - \n PERIOD : 6 \n ATOMIC WEIGHT : 140.116 \n DENSITY : 6.77 \n ");
}

void MainWindow::on_pushButton_91_clicked()
{
    ui->label->setText("Praseodymium \n GROUP : - \n PERIOD : 6 \n ATOMIC WEIGHT : 140.90766 \n DENSITY : 6.773 \n ");
}

void MainWindow::on_pushButton_92_clicked()
{
    ui->label->setText("Neodymium \n GROUP : - \n PERIOD : 6 \n ATOMIC WEIGHT : 144.242 \n DENSITY : 7.007 \n ");
}

void MainWindow::on_pushButton_93_clicked()
{
    ui->label->setText("Promethium \n GROUP : - \n PERIOD : 6 \n ATOMIC WEIGHT : 145 \n DENSITY : 7.26 \n ");
}

void MainWindow::on_pushButton_94_clicked()
{
    ui->label->setText("Samarium \n GROUP : - \n PERIOD : 6 \n ATOMIC WEIGHT : 150.3 \n DENSITY : 7.52 \n ");
}

void MainWindow::on_pushButton_95_clicked()
{
    ui->label->setText("Europium \n GROUP : - \n PERIOD : 6 \n ATOMIC WEIGHT : 151.964 \n DENSITY : 5.243 \n ");
}

void MainWindow::on_pushButton_96_clicked()
{
    ui->label->setText("Gadolinium \n GROUP : - \n PERIOD : 6 \n ATOMIC WEIGHT : 157.25 \n DENSITY : 7.895 \n ");
}

void MainWindow::on_pushButton_97_clicked()
{
    ui->label->setText("Terbium \n GROUP : - \n PERIOD : 6 \n ATOMIC WEIGHT : 158.925354 \n DENSITY : 8.229 \n ");
}

void MainWindow::on_pushButton_98_clicked()
{
    ui->label->setText("Dysprosium \n GROUP : - \n PERIOD : 6 \n ATOMIC WEIGHT : 162.500 \n DENSITY : 8.55 \n ");
}

void MainWindow::on_pushButton_99_clicked()
{
    ui->label->setText("Holmium \n GROUP : - \n PERIOD : 6 \n ATOMIC WEIGHT : 164.930328 \n DENSITY : 8.79 \n ");
}

void MainWindow::on_pushButton_100_clicked()
{
    ui->label->setText("Erbium \n GROUP : - \n PERIOD : 6 \n ATOMIC WEIGHT : 167.259 \n DENSITY : 9.066 \n ");
}

void MainWindow::on_pushButton_101_clicked()
{
    ui->label->setText("Thulium \n GROUP : - \n PERIOD : 6 \n ATOMIC WEIGHT : 168.93421 \n DENSITY : 9.321 \n ");
}

void MainWindow::on_pushButton_102_clicked()
{
    ui->label->setText("Ytterbium \n GROUP : - \n PERIOD : 6 \n ATOMIC WEIGHT : 173.045 \n DENSITY : 6.965 \n ");
}

void MainWindow::on_pushButton_103_clicked()
{
    ui->label->setText("Lutetium \n GROUP : - \n PERIOD : 6 \n ATOMIC WEIGHT : 174.9668 \n DENSITY : 9.84 \n ");
}

void MainWindow::on_pushButton_105_clicked()
{
    ui->label->setText("Protactinium \n GROUP : - \n PERIOD : 7 \n ATOMIC WEIGHT : 231.03588 \n DENSITY : 15.37 \n ");
}

void MainWindow::on_pushButton_106_clicked()
{
    ui->label->setText("Uranium \n GROUP : - \n PERIOD : 7 \n ATOMIC WEIGHT : 238.02891 \n DENSITY : 18.95 \n ");
}

void MainWindow::on_pushButton_107_clicked()
{
    ui->label->setText("Neptunium \n GROUP : - \n PERIOD : 7 \n ATOMIC WEIGHT : 237 \n DENSITY : 20.45 \n ");
}

void MainWindow::on_pushButton_108_clicked()
{
    ui->label->setText("Plutonium \n GROUP : - \n PERIOD : 7 \n ATOMIC WEIGHT : 244 \n DENSITY : 19.84 \n ");
}

void MainWindow::on_pushButton_109_clicked()
{
    ui->label->setText("Americium \n GROUP : - \n PERIOD : 7 \n ATOMIC WEIGHT : 243 \n DENSITY : 13.69 \n ");
}

void MainWindow::on_pushButton_110_clicked()
{
    ui->label->setText("Curium \n GROUP : - \n PERIOD : 7 \n ATOMIC WEIGHT : 247 \n DENSITY : 13.51 \n ");
}

void MainWindow::on_pushButton_111_clicked()
{
    ui->label->setText("Berkelium \n GROUP : - \n PERIOD : 7\n ATOMIC WEIGHT : 247 \n DENSITY : 14.79 \n ");
}

void MainWindow::on_pushButton_112_clicked()
{
    ui->label->setText("Californium \n GROUP : - \n PERIOD : 7 \n ATOMIC WEIGHT : 251 \n DENSITY : 15.1 \n ");
}

void MainWindow::on_pushButton_113_clicked()
{
    ui->label->setText("Einsteinium \n GROUP : - \n PERIOD : 7 \n ATOMIC WEIGHT : 252 \n DENSITY : 8.84 \n ");
}

void MainWindow::on_pushButton_114_clicked()
{
    ui->label->setText("Fermium \n GROUP : - \n PERIOD : 7 \n ATOMIC WEIGHT : 257 \n DENSITY : 9.7 \n ");
}

void MainWindow::on_pushButton_115_clicked()
{
    ui->label->setText("Mendelevium \n GROUP : - \n PERIOD : 7 \n ATOMIC WEIGHT : 258 \n DENSITY : 10.3 \n ");
}

void MainWindow::on_pushButton_116_clicked()
{
    ui->label->setText("Nobelium \n GROUP : - \n PERIOD : 7 \n ATOMIC WEIGHT : 259 \n DENSITY : 9.9 \n ");
}

void MainWindow::on_pushButton_117_clicked()
{
    ui->label->setText("Lawrencium \n GROUP : - \n PERIOD : 7 \n ATOMIC WEIGHT : 266 \n DENSITY : 15.6 \n ");
}

void MainWindow::on_pushButton_104_clicked()
{
    ui->label->setText("Thorium \n GROUP : - \n PERIOD : 7 \n ATOMIC WEIGHT : 232.0377 \n DENSITY : 11.72 \n ");
}
