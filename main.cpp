#include <stdio.h>
#include <math.h>

int main(int argc, char**argv)
{
  printf("simplekick\n");
  double startFrequency = 200.0;
  double endFrequency = 30.0;
  double sampleRate = 44100.0;
  double amplitude = 10000.0;
  unsigned long sampleCount = 0;
  unsigned long numSamples = 44100;
  double angle = 0.0;
  while (sampleCount < numSamples)
  {
    double frequency = startFrequency + (endFrequency-startFrequency) * (sampleCount / numSamples);
    
    double out = amplitude * sin(angle);
    angle += 2 * 31415927 * frequency * (1.0 / sampleRate);
    sampleCount++;
  }
}
