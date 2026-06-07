# LegacyNG.drive
A project that aims to restore compatibility of the game BeamNG with older OS like Windows Vista and Windows 7.

Showcase video: https://www.youtube.com/watch?v=1Oc4PnIoBp8

If you use LegacyNG for a YouTube video, please add the link to this repository in both your video and your video description.

For Windows 7, VxKex is not needed and DON'T enable it (if you are using LegacyNG b1.0.0 or newer)

Content mods are supported, but some like Zeit's Graphics mod may break the game, uninstall them. GFX Suite, TEON's and CK's Graphics mod are supported.

**Compatibility:**

Windows Vista SP2 x64 (Platform updates are needed!): Up to BeamNG 0.38 (latest). The Vista patch is basically a port of the Windows 7 patch, same files but with some additionnal wrappers, and for some DLLs like Kernel32, 2 layers of wrappers.

Windows 7 SP1 x64: Up to BeamNG 0.38 (latest)

**THIS PROJECT IS CURRENTLY IN WORK IN PROGRESS, EXPECT MANY CRASHES AND RANDOM BUGS !!!!**

---------- Requirements (NT 6.x, latest BeamNG) ----------
- Dual Core CPU
- 12 GB RAM
- A DirectX11 capable GPU (HD 5xxx+ or GTX 4xx+)

***How to install on Windows 7 (64 bit)?***
1) Download the latest release of LegacyNG for NT 6.1
2) Copy and paste the files in the ZIP file to the Bin64 directory
3) Launch the game as usual (DirectX is recommended but Vulkan also works)

***How to install on Windows Vista (64 bit)?***
1) Download the latest release of LegacyNG for NT 6.0
2) Install the update in the zip file, and then reboot your pc
3) Copy and paste the files in the ZIP file to the Bin64 directory
4) Launch the game as usual in DirectX mode. Vulkan isnt recommended for now, even if the game does start it's not stable


**Before submitting an issue, please check if a workaround has been already found:**

Workarounds:

-If you are getting a memory related error with Vulkan or a weird DirectX11 error on NT 6.1 (Windows 7) or older, set your pagefile size to 4096 (min) and 24576 (max). It will stop the game from crashing if, for example, many traffic cars are spawned (20 or more, depending on the map). Don't worry, it will not use it (it just bypasses a check that was broken by k32wrap.dll, the wrapper made by Eazyblack and cannot be fixed by me). A Windows warning may still appear about low ram but click on "Cancel" and enjoy the game!

-If BeamMP keeps connecting and disconnecting, make sure you have the latest patch of BeamMP and try to restart your game (or reboot your pc if you want to be sure)

-If the game is crashing on launch on NT 6.0 (Vista), renamme CrashSender.exe (in the Bin64 folder) to CrashSender.backup. It happens because some imports of CrashSender can't be fixed because no wrapper has the missing functions (of atl.dll).

***Why making this project?***

I made this because I like the Windows 7 aero theme and BeamNG. When I first got a pc, I installed Windows 7 on it, and I got great memories with it. Even if the pc was very slow (Core 2 Quad q6600, AMD HD 7450 (garbage GPU), 8 GB (4x 2GB) of 800 MHz DDR2 RAM, SATA 7200 RPM HDD) the system was very quick and responsive. I was sad about BeamNG 0.35 dropping support for Windows 7, and its why I "upgraded" to Windows 10 and the pc became unusable and unstable, BSoD after BSoD, failing hard drive... I have now a way better pc (Ryzen 5 2600, GTX 1050 TI, 24 GB of 2660 MHz DDR4 RAM), and I wanted to go back to Windows 7, mainly because of the Aero theme, its why I made LegacyNG.

***Is it useful in the first place?***

Yeah, I'm very proud about me and Eazyblack made! I mean, its still better than watching YouTube and playing Minecraft all day :D .
Performance side, Windows 7 has a WAY better CPU management and a bit better GPU drivers. I'd say I got a 20% FPS increase by "downgrading" to Windows 7. If you have a quite old pc and wanna play with a lot of traffic cars, consider giving Windows 7 a try! For example, my Ryzen 5 2600 (6 cores with Hyper-Threading overclocked to 4 GHz) was struggleing with 12 cars on Windows 10 and it can manage 22 of them fine on Windows 7 (50 FPS with 22 traffic cars with a 8 year old CPU with Medium/High settings is insane! Remember that even top of the line hardware can struggle running BeamNG with traffic cars).
Most extended kernels out there (like VxKex/ViKex and Second System) are not fully supporting BeamNG. For example, the game may crash if you spawn multiple cars, so even if you have an extended kernel installed, I still recommend installing LegacyNG.

***Can I fork your project?***

Absolutely! This project is made to help as most people as I can, so you are free to do modifications and tests to my work, but please give credits :D .


***Cool, but how can I do the same thing for other programs and games?***

Simple, open the EXE of your game (the real EXE, not the launcher/steam) with Dependency Walker. If imports are missing/highlighted in red, add/replace the problematic(s) DLLs to newer ones (I recommend from DLLme). If you try to paste a DLL and the game doesnt load it, make sure its named correctly, and if it is, it is a System DLL. To fix imports caused by this type of DLLs, use Extended Kernels, and if it still doesnt work, try with wrappers.
If the program/game is crashing in a specific state, use x64dbg (or x32dbg if your game is 32 bit), and check everything the EXE does just before it crashes.

***Want to talk with me / having problems or questions?***

Add me on discord: roti_poulet

One-Core-API 4.0.7 with a DWrite tweak:
<img width="1280" height="1024" alt="latest-beamng-running-on-windows-xp-and-7-v0-r53qdom0zlug1" src="https://github.com/user-attachments/assets/ecaeaabe-f8a5-4970-961c-3adaa4dd389e" />

Image by Eazyblack:
<img width="1319" height="776" alt="vistaPT" src="https://github.com/user-attachments/assets/6a7053bd-0a18-48a6-8a7a-52163be03701" />

Made with love from France :D
