# COGWARS
Inspired by "Core Wars", which was a game created following the release of a malicious virus written in the 1980's. To deal with the self-replicating virus, a white hat hacker invented Reaper. It was a virus designed to spread and eliminate the malware. He fought fire with fire.

This repository is specifically inspired by a project located here: https://github.com/emilwallner/Corewar

Primary changes include:
- The use of standard libraries rather than 'libft' used by the original team.
- Built to run on both x86 and ARM64.
- Re-designed code layout and added features.

## Game Dyanamics
### The Game Board
The game board is the memory of a virtual computer. It is represented in a 64x64 grid of bytes
### The Players
The players are small programs represented in different colors. The white parts have blank memory
### Cursors
The moving parts with inverted color are the cursors. They read data from the game board


