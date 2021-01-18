// fidget slots v1.0

#include <Arduboy2.h>
#include <ArduboyTones.h>

Arduboy2 arduboy;
ArduboyTones sound(arduboy.audio.enabled);

const unsigned char PROGMEM moon0 [] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x63, 0x1F, 
0x02, 0x04, 0x18, 0xE0, 0x0C, 0x1C, 0x28, 0x48, 0x44, 0x84, 0x84, 0x82, 0x82, 0x81, 0x40, 0x40, 0x20, 0x30, 0x0C, 0x03};
const unsigned char PROGMEM bar1 [] = {0xF8, 0xFC, 0x1C, 0x5C, 0x1C, 0xFC, 0x3C, 0x9C, 0x3C, 0xFC, 0x1C, 0xDC, 
0x1C, 0xFC, 0xFC, 0xF8, 0x1F, 0x3F, 0x38, 0x3B, 0x38, 0x3F, 0x38, 0x3D, 0x38, 0x3F, 0x38, 0x3C, 0x3C, 0x39, 0x3F, 0x1F};
const unsigned char PROGMEM bell2 [] = {0x00, 0x00, 0x00, 0xE0, 0x10, 0x08, 0x04, 0x07, 0x07, 0x04, 0x08, 0x10, 
0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x27, 0x24, 0x24, 0x64, 0xA4, 0xA4, 0x64, 0x24, 0x24, 0x27, 0x38, 0x00, 0x00};
const unsigned char PROGMEM cherry3 [] = {0x30, 0x4C, 0x42, 0x41, 0x21, 0x21, 0x1B, 0x0E, 0xF4, 0x08, 0x90, 0x60, 
0x40, 0x40, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x42, 0x81, 0x81, 0x81, 0x5E, 0x21, 0x20, 0x20, 0x10, 0x0F};
const unsigned char PROGMEM clover4 [] = {0x00, 0xE0, 0x90, 0x10, 0x1E, 0x11, 0x01, 0x01, 0x02, 0x01, 0x01, 0x11, 
0x1E, 0x10, 0x90, 0xE0, 0x60, 0x27, 0x38, 0x10, 0x78, 0x88, 0x80, 0x80, 0x40, 0x80, 0x80, 0x88, 0x78, 0x08, 0x08, 0x07};
const unsigned char PROGMEM diamond5 [] = {0x1C, 0x72, 0x91, 0x11, 0x3D, 0xD3, 0x11, 0x11, 0x11, 0x11, 0x93, 0x7D, 
0x11, 0x91, 0x72, 0x1C, 0x00, 0x00, 0x01, 0x02, 0x04, 0x19, 0x3E, 0xE0, 0xE0, 0x3E, 0x19, 0x04, 0x02, 0x01, 0x00, 0x00};
const unsigned char PROGMEM seven6 [] = {0xFE, 0x81, 0x62, 0x21, 0x31, 0x31, 0x21, 0xA1, 0x61, 0x21, 0x02, 0x02, 
0x82, 0x72, 0x19, 0x06, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x82, 0x81, 0x80, 0x80, 0x80, 0x80, 0xFE, 0x01, 0x00, 0x00, 0x00};
const unsigned char PROGMEM heart7 [] = {0xFC, 0x02, 0x61, 0xC1, 0x01, 0x01, 0x02, 0x0C, 0x0C, 0x02, 0x01, 0x01, 
0x01, 0x01, 0x02, 0xFC, 0x00, 0x03, 0x04, 0x09, 0x13, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x03, 0x00};
const unsigned char PROGMEM horseshoe8 [] = {0xF8, 0x04, 0x02, 0x81, 0x61, 0x21, 0x11, 0x11, 0x11, 0x11, 0x21, 0x61, 
0x81, 0x02, 0x04, 0xF8, 0x01, 0xC6, 0xB8, 0x83, 0xBC, 0x40, 0x00, 0x00, 0x00, 0x00, 0x40, 0xBC, 0x83, 0xB8, 0xC6, 0x01};
const unsigned char PROGMEM lemon9 [] = {0x00, 0xC0, 0x30, 0x08, 0x04, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
0x01, 0x01, 0xF1, 0x0E, 0x70, 0x8F, 0x80, 0x80, 0x40, 0x40, 0x40, 0x40, 0x40, 0x41, 0x24, 0x21, 0x10, 0x0C, 0x03, 0x00};
const unsigned char PROGMEM coin10 [] = {0xE0, 0x18, 0xEC, 0x36, 0x0A, 0x0D, 0xE5, 0xB5, 0xB5, 0x65, 0x0D, 0x0A, 
0x36, 0xEC, 0x18, 0xE0, 0x07, 0x18, 0x37, 0x6C, 0x50, 0xB0, 0xA6, 0xAD, 0xAD, 0xA7, 0xB0, 0x50, 0x6C, 0x37, 0x18, 0x07};
const unsigned char PROGMEM orange11 [] = {0xC0, 0x20, 0x12, 0x0D, 0x09, 0x11, 0x12, 0x3C, 0x5C, 0x8B, 0x28, 0x48, 
0x10, 0x30, 0xC0, 0x00, 0x1F, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x21, 0x19, 0x06, 0x01, 0x01, 0x00};
const unsigned char PROGMEM plum12 [] = {0x08, 0x0C, 0x12, 0x11, 0x11, 0xC9, 0x3E, 0x0A, 0x0E, 0x18, 0x08, 0x08, 
0x10, 0x20, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x3F};
const unsigned char PROGMEM star13 [] = {0x40, 0xC0, 0xC0, 0x40, 0x60, 0x20, 0x38, 0x0E, 0x0E, 0x38, 0x20, 0x60, 
0x40, 0xC0, 0xC0, 0x40, 0x00, 0x00, 0x81, 0xE3, 0x7E, 0x20, 0x30, 0x10, 0x10, 0x30, 0x20, 0x7E, 0xE3, 0x81, 0x00, 0x00};
const unsigned char PROGMEM melon14 [] = {0xE0, 0x18, 0x84, 0x92, 0x92, 0x91, 0x11, 0xC1, 0x39, 0x07, 0xA1, 0x01, 
0x09, 0xA2, 0x04, 0xF8,0x07, 0x18, 0x20, 0x44, 0x44, 0x84, 0x80, 0x83, 0x9C, 0xE0, 0x82, 0x90, 0x80, 0x4A, 0x20, 0x1F};

constexpr uint8_t iHeight = 16;
constexpr uint8_t iWidth  = 16;
constexpr uint8_t iMargin = 4;
constexpr uint8_t numReels = 3;
constexpr uint8_t numSlots = 15;
constexpr uint8_t startingCredits = 100;
constexpr uint8_t startingBet = 5; // 1 credit per line
constexpr uint8_t frameRate = 60;
constexpr uint8_t reelSpeed = 4; // must divide into 20 evenly 1,2,4,5,10,20

struct SlotInfo
{
  uint8_t icon;
  int16_t posX;
  int16_t posY;
};

SlotInfo slotInfo[numReels][numSlots] = { 0, 0 };

int16_t reelSteps[numReels] = { 0 };
uint8_t reelIndex[numReels] = { 0 };
uint8_t prevReelIndex[numReels] = { 0 };
long plays = 0;
long wins = 0;
uint16_t games = 0;
long credits = startingCredits;
uint8_t betAmount = startingBet;
bool autoPlay = false;
bool keepPlaying = false;
bool spinning = false;

void setup() {
  arduboy.begin();
  arduboy.setFrameRate(frameRate);
  arduboy.initRandomSeed();
  displayLogo();
  arduboy.delayShort(1000);
  newGame();
}

void newGame() {
  arduboy.clear();
  credits = startingCredits;
  betAmount = startingBet;
  games++;
  initReelData();
  initReelPosition();
  drawBorder();
  displayReels();
  displayStats(0);
  arduboy.delayShort(1000);
}

void loop() {
  if (!(arduboy.nextFrame()))
    return;

  arduboy.pollButtons();

  if (arduboy.justPressed(LEFT_BUTTON)) {
    arduboy.audio.toggle();
  }
  if (arduboy.justPressed(RIGHT_BUTTON)) {
    keepPlaying = !keepPlaying;
    displayStats(0);
  }
  if (arduboy.justPressed(UP_BUTTON) && !spinning) {
    if (betAmount < 5) {
      betAmount++;
      displayStats(0);
    }
  }
  if (arduboy.justPressed(DOWN_BUTTON) && !spinning) {
    if (betAmount > 0) {
      betAmount--;
      displayStats(0);
    }
  }
  if (arduboy.justPressed(B_BUTTON)) {
    autoPlay = !autoPlay;
    displayStats(0);
  }
  if (credits == 0 && !spinning) {
    gameOver();
    return;
  }

  if (((arduboy.justPressed(A_BUTTON)) || autoPlay) && !spinning) {
    bet(betAmount);
    plays++;
    spinReels();
    for (uint8_t i = 0; i < numReels; i++) {
      reelSteps[i] = (numSlots - prevReelIndex[i] + reelIndex[i]) * (iHeight + iMargin);
    }
    spinning = true;
    displayStats(0);
  }

  if (reelSteps[0] > 0 || reelSteps[1] > 0 || reelSteps[2] > 0) {
    updateReels();
    if (arduboy.everyXFrames(4)) {
      sound.tone(NOTE_C7, 85);
    }
    for (uint8_t i = 0; i < numReels; i++) {
      if (reelSteps[i] > 0) reelSteps[i] -= reelSpeed;
    }
    if (reelSteps[0] == 0 && reelSteps[1] == 0 && reelSteps[2] == 0) {
      spinning = false;
      arduboy.delayShort(500);
      int amountWon = checkLine();
      displayStats(amountWon);
      arduboy.delayShort(250);
    }
  }
}

void gameOver() {
  displayEnd();
  if (keepPlaying && autoPlay) {
    arduboy.delayShort(2000);
    newGame();
  }
  if (arduboy.justPressed(A_BUTTON)) {
    newGame();
  }
}

int spinReels() {
  for (uint8_t i = 0; i < numReels; i++) {
    prevReelIndex[i] = reelIndex[i];
    uint8_t ptr = (random() % 9);
    uint8_t spins = (random() % 9) + numSlots;
    for (uint8_t j = 0; j < spins; j++) {
      ptr++;
      if (ptr > numSlots - 1) {
        ptr = 0;
      }
    }
    reelIndex[i] = ptr;
  }
}

void initReelData() {
  uint8_t p[numSlots];
  for (uint8_t i = 0; i < numSlots; i++) {
    p[i] = i;
  }
  for (uint8_t i = 0; i < numReels; i++) {
    reelIndex[i] = 1;
    for (uint8_t j = numSlots - 1; j > 0; --j) {
      uint8_t r = random() % j;
      uint8_t temp = p[j];
      p[j] = p[r];
      p[r] = temp;
    }
    for (uint8_t k = 0; k < numSlots; k++) {
      slotInfo[i][k].icon = p[k];
    }
  }
}

void initReelPosition() {
  uint8_t k;
  for (uint8_t r = 0; r < numReels ; r++) {
    k = 0;
    for (uint8_t s = 0; s < numSlots ; s++) {
      uint8_t icon = slotInfo[r][s].icon;
      slotInfo[r][icon].posX = (WIDTH / 2) + (iMargin * r) + (iWidth * r) + iMargin;
      if ( s < 3 ) {
        slotInfo[r][icon].posY = (HEIGHT - iHeight - iMargin) - ((iHeight * s) + (iMargin * s)) ;
      }
      else {
        slotInfo[r][icon].posY = -iHeight + (-iHeight * k) + (-iMargin * k);
        k++;
      }
    }
  }
}

void updateReels() {
  for (int r = 0; r < numReels ; r++) {
    for (int s = 0; s < numSlots; s++) {
      if (reelSteps[r] > 0) {
        slotInfo[r][s].posY += reelSpeed;
      }
      if (slotInfo[r][s].posY >= HEIGHT) {
        slotInfo[r][s].posY = (-iHeight * (numSlots - 3)) + (-iMargin * (numSlots - 3)) + iMargin;
      }
    }
  }
  clearRightScreen();
  displayReels();
  arduboy.display();
}

void bet(uint8_t amount) {
  if ((credits - amount) < 0) {
    betAmount = credits;
    displayStats(0);
  }
  credits -= betAmount;
}

enum Icon : uint8_t
{
  moon = 0,
  bar = 1,
  bell = 2,
  cherry = 3,
  clover = 4,
  diamond = 5,
  seven = 6,
  heart = 7,
  horseshoe = 8,
  lemon = 9,
  coin = 10,
  orange = 11,
  plum = 12,
  star = 13,
  melon = 14
};

int checkWinLines(uint8_t line[]) { // 3375 combinations (2610 + 630) / 3375 = 96% return
  if (line[0] == moon && line[1] == moon && line[2] == moon) {
    return 75;
  }
  if (line[0] == bar && line[1] == bar && line[2] == bar) {
    return 700;
  }
  if (line[0] == bell && line[1] == bell && line[2] == bell) {
    return 175;
  }
  if (line[0] == cherry && line[1] == cherry && line[2] == cherry) {
    return 100;
  }
  if (line[0] == clover && line[1] == clover && line[2] == clover) {
    return 25;
  }
  if (line[0] == diamond && line[1] == diamond && line[2] == diamond) {
    return 200;
  }
  if (line[0] == seven && line[1] == seven && line[2] == seven) {
    return 350;
  }
  if (line[0] == heart && line[1] == heart && line[2] == heart) {
    return 150;
  }
  if (line[0] == horseshoe && line[1] == horseshoe && line[2] == horseshoe) {
    return 200;
  }
  if (line[0] == lemon && line[1] == lemon && line[2] == lemon) {
    return 10;
  }
  if (line[0] == coin && line[1] == coin && line[2] == coin) {
    return 300;
  }
  if (line[0] == orange && line[1] == orange && line[2] == orange) {
    return 50;
  }
  if (line[0] == plum && line[1] == plum && line[2] == plum) {
    return 50;
  }
  if (line[0] == star && line[1] == star && line[2] == star) {
    return 200;
  }
  if (line[0] == melon && line[1] == melon && line[2] == melon) {
    return 25;  // 2610 total
  }
  if (line[0] == line[1] || line[0] == line[2] || line[1] == line[2]) {
    return 1;  // any pair 630 total
  }
  return 0;
}

int checkLine() {
  uint8_t lineValues[3];
  int winnings = 0;
  int total = 0;
  // Check middle line
  if (betAmount >= 1) {
    for (uint8_t i = 0; i < 3; i++) {
      lineValues[i] = slotInfo[i][reelIndex[i]].icon;
    }
    winnings = checkWinLines(lineValues);
    if (winnings > 0 ) {
      arduboy.fillRect(64, 31, 64, 2, WHITE);
    }
    total += winnings;
    winnings = 0;
  }
  // Check top line
  if (betAmount >= 2) {
    for (uint8_t i = 0; i < 3; i++) {
      lineValues[i] = next(i);
    }
    winnings += checkWinLines(lineValues);
    if (winnings > 0 ) {
      arduboy.fillRect(64, 11, 64, 2, WHITE);
    }
    total += winnings;
    winnings = 0;
  }
  // Check bottom line
  if (betAmount >= 3) {
    for (uint8_t i = 0; i < 3; i++) {
      lineValues[i] = previous(i);
    }
    winnings += checkWinLines(lineValues);
    if (winnings > 0 ) {
      arduboy.fillRect(64, 51, 64, 2, WHITE);
    }
    total += winnings;
    winnings = 0;
  }
  // Check top left to bottom right diagonal
  if (betAmount >= 4) {
    lineValues[0] = next(0);
    lineValues[1] = slotInfo[1][reelIndex[1]].icon;
    lineValues[2] = previous(2);
    winnings += checkWinLines(lineValues);
    if (winnings > 0 ) {
      arduboy.drawLine(64, 0, 128, 63, WHITE);
      arduboy.drawLine(64, 1, 128, 64, WHITE);
    }
    total += winnings;
    winnings = 0;
  }
  // Check bottom left to top right diagonal
  if (betAmount == 5) {
    lineValues[0] = previous(0);
    lineValues[1] = slotInfo[1][reelIndex[1]].icon;
    lineValues[2] = next(2);
    winnings += checkWinLines(lineValues);
    if (winnings > 0 ) {
      arduboy.drawLine(64, 63, 128, 0, WHITE);
      arduboy.drawLine(64, 64, 128, 1, WHITE);
    }
    total += winnings;
  }
  credits += total;
  arduboy.display();
  return total;
}

uint8_t previous(uint8_t index) {
  char prev = reelIndex[index] - 1;
  if (prev < 0) {
    prev = numSlots - 1;
  }
  return slotInfo[index][prev].icon;
}

uint8_t next(uint8_t index) {
  char next = reelIndex[index] + 1;
  if (next > numSlots - 1) {
    next = 0;
  }
  return slotInfo[index][next].icon;
}

void displayReels() {
  for (uint8_t r = 0; r < numReels ; r++) {
    for (uint8_t s = 0; s < numSlots ; s++) {
      if (s == 0) {
        if (slotInfo[r][s].posY < HEIGHT && slotInfo[r][s].posY > -iHeight) {
          arduboy.drawBitmap(slotInfo[r][s].posX, slotInfo[r][s].posY, moon0, iWidth, iHeight, WHITE);
        }
      }
      if (s == 1) {
        if (slotInfo[r][s].posY < HEIGHT && slotInfo[r][s].posY > -iHeight) {
          arduboy.drawBitmap(slotInfo[r][s].posX, slotInfo[r][s].posY, bar1, iWidth, iHeight, WHITE);
        }
      }
      if (s == 2) {
        if (slotInfo[r][s].posY < HEIGHT && slotInfo[r][s].posY > -iHeight) {
          arduboy.drawBitmap(slotInfo[r][s].posX, slotInfo[r][s].posY, bell2, iWidth, iHeight, WHITE);
        }
      }
      if (s == 3) {
        if (slotInfo[r][s].posY < HEIGHT && slotInfo[r][s].posY > -iHeight) {
          arduboy.drawBitmap(slotInfo[r][s].posX, slotInfo[r][s].posY, cherry3, iWidth, iHeight, WHITE);
        }
      }
      if (s == 4) {
        if (slotInfo[r][s].posY < HEIGHT && slotInfo[r][s].posY > -iHeight) {
          arduboy.drawBitmap(slotInfo[r][s].posX, slotInfo[r][s].posY, clover4, iWidth, iHeight, WHITE);
        }
      }
      if (s == 5) {
        if (slotInfo[r][s].posY < HEIGHT && slotInfo[r][s].posY > -iHeight) {
          arduboy.drawBitmap(slotInfo[r][s].posX, slotInfo[r][s].posY, diamond5, iWidth, iHeight, WHITE);
        }
      }
      if (s == 6) {
        if (slotInfo[r][s].posY < HEIGHT && slotInfo[r][s].posY > -iHeight) {
          arduboy.drawBitmap(slotInfo[r][s].posX, slotInfo[r][s].posY, seven6, iWidth, iHeight, WHITE);
        }
      }
      if (s == 7) {
        if (slotInfo[r][s].posY < HEIGHT && slotInfo[r][s].posY > -iHeight) {
          arduboy.drawBitmap(slotInfo[r][s].posX, slotInfo[r][s].posY, heart7, iWidth, iHeight, WHITE);
        }
      }
      if (s == 8) {
        if (slotInfo[r][s].posY < HEIGHT && slotInfo[r][s].posY > -iHeight) {
          arduboy.drawBitmap(slotInfo[r][s].posX, slotInfo[r][s].posY, horseshoe8, iWidth, iHeight, WHITE);
        }
      }
      if (s == 9) {
        if (slotInfo[r][s].posY < HEIGHT && slotInfo[r][s].posY > -iHeight) {
          arduboy.drawBitmap(slotInfo[r][s].posX, slotInfo[r][s].posY, lemon9, iWidth, iHeight, WHITE);
        }
      }
      if (s == 10) {
        if (slotInfo[r][s].posY < HEIGHT && slotInfo[r][s].posY > -iHeight) {
          arduboy.drawBitmap(slotInfo[r][s].posX, slotInfo[r][s].posY, coin10, iWidth, iHeight, WHITE);
        }
      }
      if (s == 11) {
        if (slotInfo[r][s].posY < HEIGHT && slotInfo[r][s].posY > -iHeight) {
          arduboy.drawBitmap(slotInfo[r][s].posX, slotInfo[r][s].posY, orange11, iWidth, iHeight, WHITE);
        }
      }
      if (s == 12) {
        if (slotInfo[r][s].posY < HEIGHT && slotInfo[r][s].posY > -iHeight) {
          arduboy.drawBitmap(slotInfo[r][s].posX, slotInfo[r][s].posY, plum12, iWidth, iHeight, WHITE);
        }
      }
      if (s == 13) {
        if (slotInfo[r][s].posY < HEIGHT && slotInfo[r][s].posY > -iHeight) {
          arduboy.drawBitmap(slotInfo[r][s].posX, slotInfo[r][s].posY, star13, iWidth, iHeight, WHITE);
        }
      }
      if (s == 14) {
        if (slotInfo[r][s].posY < HEIGHT && slotInfo[r][s].posY > -iHeight) {
          arduboy.drawBitmap(slotInfo[r][s].posX, slotInfo[r][s].posY, melon14, iWidth, iHeight, WHITE);
        }
      }
    }
  }
}

void drawBorder() {
  arduboy.drawRect(0, 0, 128, 64, WHITE);
  arduboy.drawFastVLine(64, 0, 64, WHITE);
}

void clearLeftScreen() {
  arduboy.fillRect(1, 1, 62, 62, BLACK);
}
void clearRightScreen() {
  arduboy.fillRect(65, 1, 62, 62, BLACK);
}

void displayEnd() {
  clearRightScreen();
  arduboy.setCursor(72, 4);
  arduboy.setTextSize(2);
  arduboy.print(F("GAME"));
  arduboy.setCursor(72, 24);
  arduboy.print(F("OVER"));
  arduboy.display();
}

void displayStats(int won) {
  if (won > 0) {
    wins++;
    clearLeftScreen();
    arduboy.setCursor(16, 4);
    arduboy.setTextSize(2);
    arduboy.print(F("YOU"));
    arduboy.setCursor(12, 24);
    arduboy.print(F("WON!"));
    arduboy.setCursor(12, 44);
    arduboy.print(won);
    arduboy.display();
    sound.tone(NOTE_E7, 125, NOTE_D7, 125, NOTE_E7, 125);
    arduboy.delayShort(2000);
  }
  clearLeftScreen();
  arduboy.setTextColor(WHITE);
  arduboy.setTextSize(1);
  arduboy.setCursor(4, 3);
  arduboy.print(F("Credits"));
  if (autoPlay) {
    arduboy.setCursor(49, 3);
    arduboy.print(F("\x12"));
  }
  if (keepPlaying) {
    arduboy.setCursor(56, 3);
    arduboy.print(F("\xEC"));
  }
  arduboy.setCursor(4, 13);
  arduboy.print(credits);
  arduboy.setCursor(4, 23);
  arduboy.print(F("Bet Wins"));
  arduboy.setCursor(4, 33);
  arduboy.print(betAmount);
  arduboy.setCursor(28, 33);
  arduboy.print(wins);
  arduboy.setCursor(4, 43);
  arduboy.print(F("Spin"));
  arduboy.setCursor(4, 53);
  arduboy.print(plays);
  arduboy.setCursor(38, 43);
  arduboy.print(F("Game"));
  arduboy.setCursor(44, 53);
  arduboy.print(games);
  arduboy.display();
}

void displayLogo() {
  char fy = -48;
  char sy = -28;
  for (uint8_t i = 0; i < HEIGHT; i++) {
    arduboy.clear();
    arduboy.setTextColor(WHITE);
    arduboy.setCursor(28, fy);
    arduboy.setTextSize(2);
    arduboy.print(F("FIDGET"));
    arduboy.setCursor(34, sy);
    arduboy.print(F("SLOTS"));
    arduboy.display();
    fy += 1;
    sy += 1;
    arduboy.delayShort(20);
  }
}
