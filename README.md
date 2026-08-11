# LegacyNG.drive
A project that aims to restore compatibility of the game BeamNG.drive with older OSes like Windows Vista and Windows 7.

Showcase video: https://www.youtube.com/watch?v=1Oc4PnIoBp8

If you use LegacyNG for a YouTube video, please add the link to this repository in both your video and your video description.

For Windows 7, VxKex is not needed and DON'T enable it! SecondSystem will also break the patch, make sure it is disabled for the BeamNG executable (in the Bin64 folders)

Content mods are supported, but some like Zeit's Graphics mod may break the game, uninstall them. GFX Suite, TEON's + CK's Graphics mod, and the new TAA mod are supported.

**THIS PROJECT IS CURRENTLY WIP, EXPECT MANY CRASHES AND RANDOM BUGS !!!!**

## Compatibility:

Windows Vista SP2 x64 (Platform updates are needed!): Up to BeamNG 0.38 (latest). The Vista patch is basically a port of the Windows 7 patch, same files but with some additionnal wrappers, and for some DLLs like Kernel32, 2 layers of wrappers.

Windows 7 SP1 x64: Up to BeamNG 0.39.4 (latest)
Windows Vista SP2 x64: Up to BeamNG 0.38.3 (fix for 0.39 is coming soon...)

**---------- Minimum requirements (NT 6.x, latest BeamNG) ----------**
- Desktop Intel Core 2 Duo / AMD FX 4xxx
- 8 GB of RAM
- A DirectX11 capable GPU (Nvidia GTX 4xx+ or AMD HD 5xxx+)

**-------- Recommended requirements (NT 6.x, latest BeamNG) --------**
- Desktop Intel Core 2 Quad / AMD FX 6xxx
- 16 GB of RAM
- A Vulkan 1.2 capable GPU (Nvidia GTX 6xx+, AMD Vulkan fix is planned)

**Performance notes**
Windows 7 is known to get better performance than Windows 10, having way less bload, telemetry and useless kernel features, there are the FPS improvements;
-Lower RAM usage: 3.7 GB On W10, 2.7 GB on W7 (only counting in main BeamNG process, others are using the same amount of RAM anyway)
-Higher FPS (on a non RAM bottlenecked system): 59 FPS on W10, 78 on W7 / 16.7 on W10, 18.4 on W7
-Better traffic performance: 12 cars on W10, 19 cars on W7 (to get both down to 35 FPS)

## How to install on Windows 7 (64 bit)?
1) Download the latest release of LegacyNG for NT 6.1
2) Copy and paste the files in the ZIP file to the Bin64 directory
3) Launch the game as usual (DirectX is recommended but Vulkan also works)

## How to install on Windows Vista (64 bit)?
1) Download the latest release of LegacyNG for NT 6.0
2) Install the update in the zip file, and then reboot your pc
3) Copy and paste the files in the ZIP file to the Bin64 directory
4) Launch the game as usual in DirectX mode. Vulkan isnt recommended for now, even if the game does start it's not stable

## Before submitting an issue, please check if a workaround has been already found:

**Workarounds:**

-If you are getting a memory related error with Vulkan or a weird DirectX11 error on NT 6.1 (Windows 7) or older, set your pagefile size to 4096 (min) and 24576 (max). It will stop the game from crashing if, for example, many traffic cars are spawned (20 or more, depending on the map). Its a limitation on NT 6.2 (Windows 8.0) and older, and cannot be fixed.

-If BeamMP keeps connecting and disconnecting, make sure you have the latest patch of BeamMP and try to restart your game (or reboot your pc if you want to be sure)

-If the game is crashing on launch on NT 6.0 (Vista), renamme CrashSender.exe (in the Bin64 folder) to CrashSender.backup. It happens because some imports of CrashSender can't be fixed because no wrapper has the missing functions (of atl.dll).

-If the game keeps crashing after a few seconds of gameplay using Vulkan, make sure Dynamic Reflections are disabled. This is a known Nvidia issue with some graphics drivers

***Why making this project?***

I made this because I like the Windows 7 aero theme and BeamNG. When I first got a pc, I installed Windows 7 on it, and I got great memories with it. Even if the pc was very slow (Core 2 Quad q6600, AMD HD 7450 (garbage GPU), 8 GB (4x 2GB) of 800 MHz DDR2 RAM, SATA 7200 RPM HDD) the system was very quick and responsive. I was sad about BeamNG 0.35 dropping support for Windows 7, and its why I "upgraded" to Windows 10 and the pc became unusable and unstable, BSoD after BSoD, failing hard drive... I have now a way better pc (Ryzen 5 2600, GTX 1050 TI, 24 GB of 2660 MHz DDR4 RAM), and I wanted to go back to Windows 7, mainly because of the Aero theme, its why I made LegacyNG.

***I have installed the patch but it says VCRuntime140_1.dll is missing, what should I do?***

This is a common issue, and can be fixed by uninstalling any 2015-20xx VC Runtime (maybe none are installed, its fine) and reinstalling this specific version: 14.44.35211

***I have a cracked copy of BeamNG, it says an entry point is missing, what should I do?***

Cracked copies of BeamNG can also run on Windows 7, you will just have to edit the kernel32.dll imports in steam_api64 (using CFF Explorer or HxD) to k32wrap.dll.

But please support the BeamNG devs if you can :-)

***What do you think about LegacyNG?***

I'm very proud about me and Eazyblack made! I mean, its still better than watching YouTube and playing Minecraft all day :D .
Performance wise, Windows 7 has a WAY better CPU management and a bit better GPU drivers. I'd say I got a 20-25% FPS increase by "downgrading" to Windows 7. If you have a quite old pc and want to play with a lot of traffic cars, consider giving Windows 7 a try! For example, my Ryzen 5 2600 (6 cores with Hyper-Threading overclocked to 4 GHz) was struggleing with 12 cars on Windows 10 and it can manage 22 of them fine on Windows 7 (50 FPS with 22 traffic cars with a 8 year old CPU with Medium/High settings is insane! Remember that even top of the line hardware can struggle running BeamNG with traffic cars).
Most extended kernels out there (like VxKex/ViKex and Second System) are not fully supporting BeamNG. For example, the game may crash if you spawn multiple cars, so even if you have an extended kernel installed, I still recommend installing LegacyNG.

***Can I fork your project?***

Absolutely! This project is made to help as most people as I can, so you are free to do modifications and tests to my work, but please give credits :D .

***Cool, but how can I do the same thing for other programs and games?***

Simple, open the EXE of your game (the real EXE, not the launcher/steam) with Dependency Walker. If imports are missing/highlighted in red, add/replace the problematic(s) DLLs to newer ones (I recommend from DLLme). If you try to paste a DLL and the game doesnt load it, make sure its named correctly, and if it is, it is a System DLL. To fix imports caused by this type of DLLs, use Extended Kernels, and if it still doesnt work, try with wrappers.
If the program/game is crashing in a specific state, use x64dbg (or x32dbg if your game is 32 bit), and check everything the EXE does just before it crashes.

***I want to use a specific version, what should I do?***
Because I cant patch every BeamNG version (waste of time), you can patch the game yourself, using this tutorial:
1) Download the latest BeamNG patch and copy all wrappers (DLL files, smaller than 200 kb or 0.2 Mb)
2) Follow this guide to patch the BeamNG exe and libcef:
<img width="915" height="663" alt="BeamNGGuideForWindows7" src="https://github.com/user-attachments/assets/7c345887-eff9-48ea-9f0a-35dab10cb9d9" />

***Want to talk with me / having problems or questions?***

Add me on discord: roti_poulet

**One-Core-API 4.0.7 with a DWrite fix:**
<img width="1280" height="1024" alt="latest-beamng-running-on-windows-xp-and-7-v0-r53qdom0zlug1" src="https://github.com/user-attachments/assets/ecaeaabe-f8a5-4970-961c-3adaa4dd389e" />

**Screenshot by Eazyblack:**
<img width="1319" height="776" alt="vistaPT" src="https://github.com/user-attachments/assets/6a7053bd-0a18-48a6-8a7a-52163be03701" />

Made with love from France and Greece :-D
