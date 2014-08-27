void DriveOutput();

void Off();
void Tune_Sp();
void TuneP();
void TuneI();
void TuneD();

void Run();

void DoControl();

void StartAutoTune();
void FinishAutoTune();

void setBacklight();
uint8_t ReadButtons();

void SaveParameters();
void LoadParameters();

double EEPROM_readDouble(int address);
void EEPROM_writeDouble(int address, double value);
