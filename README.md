# LegacyNG.drive
A project that aims to restore compatibility of the game BeamNG with older OS like Windows XP and Windows 7.

If you use LegacyNG for a YouTube video, please add the link to this repository in both your video and your video description.

For Windows XP, One-Core-API 4.x.x is NEEDED. Native support isn't planned to do.

For Windows 7, VxKex is not needed and DON'T enable it (if you are using LegacyNG b1.0.0 or newer)

Content mods are supported, but some like Zeit's and TEON's Graphics mod may break the game, uninstall them. GFX Suite and CK's Graphics mod are also supported

Compatibility: 
Windows XP x64: Up to BeamNG 0.34 [0.36 is experimental with a lot of bugs and crashes]. Workarounds are also needed (scroll down to find them)

Windows Vista SP2 x64: Up to BeamNG 0.38 (latest)

Windows 7 SP1 x64: Up to BeamNG 0.38 (latest)

THIS PROJECT IS CURRENTLY WORK IN PROGRESS, EXPECT MANY CRASHES AND RANDOM BUGS !!!!


How to install (Windows 7)?
1) Download the latest release
2) Install VxKex. If it asks about updates, install them too
3) Enable VxKex for the BeamNG executable (in the Bin64 folder) in the properties. Dont change the version it's reporting
4) Launch the game by double clicking on the BeamNG executable (still in the Bin64 folder, the launcher might not work).
   

How to install and play the game on Windows XP 64 Bit or Windows Server 2003?
1) Make sure you have OpenGL 4.5 support (The game will not work in virtual machines in a hardware-accelerated way!)
2) Install the latest One-Core-API version
3) Download the latest release
4) Extract the ZIP file, copy everything in it
5) Paste all files into your BeamNG Bin64 folder
6) Set the compatibility mode to Windows Vista SP1 or SP2, both work (wct.exe)
7) If you try an alpha version of this patch, launch this executable with -nocefsandbox and -disable-sandbox
8) When you are on the main menu, re-open the compatibility tool and set it back to Windows Server 2003 SP2
9) The game crashes when you load a map? Retry but this time in another spawn point (still in the same map as you choosed before)

Can I fork your project?

Absolutely! This project is made to help as most people as I can, so you are free to do modifications and tests to my work, but please give credits :D .


Cool, but how can I do the same thing for other programs and games?

Simple, open the EXE of your game (the real EXE, not the launcher/steam) with Dependency Walker. If imports are missing/highlighted in red, add/replace the problematic(s) DLLs to newer ones (I recommend from DLLme). If you try to paste a DLL and the game doesnt load it, make sure its named correctly, and if it is, it is a System DLL. To fix imports caused by this type of DLLs, use Extended Kernels, and if it still doesnt work, try with wrappers. If you are on Windows 7+, only wrappers will work (VxKex is wrapper-based).
If the program/game is crashing in a specific state, use x64dbg (or x32dbg if your game is 32 bit), and check everything the EXE does just before it crashes.

Want to talk with me?

Add me on discord: roti_poulet

![0-34-on-windows-xp-v0-a5kz1k9491ng1](https://github.com/user-attachments/assets/4e9ac472-c88d-4ef8-9d0e-78baf6e8b1bb)
