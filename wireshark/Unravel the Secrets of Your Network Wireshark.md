# Introduction

Wireshark is a powerful, open-source network protocol analyzer that uncovers the hidden patterns and anomalies in your network traffic, empowering you to troubleshoot, secure, and optimize your network like never before.

# Table of contents

- What is Wireshark
- Features
- Installation of Wireshark
- Introduction to Wireshark UI Basic
- Packet Capturing
- Display filter fields
- Building Display Filter Expressions
- Some Useful Filters
- Hands-On Practice

# What is a Wireshark

Wireshark is a powerful, open-source network protocol analyzer that allows users to capture and inspect network traffic in real-time. This versatile tool is a must-have for security professionals, system administrators, and network engineers who need to troubleshoot network issues, detect security threats, and optimize network performance.

Wireshark is one of the most potent traffic analyser tools available in the wild. There are multiple purposes for it use:

* Detecting and troubleshooting network problems, such as network load failure points and congestion.

 * Detecting security anomalies, such as rogue hosts, abnormal port usage, and suspicious traffic.

* Investing an learning protocol details, such as response codes and payload data.

Note: Wireshark is not an Intrusion Detection System (IDS). It only allows analysis to discover and
	  investigate that packers in depth. It doesn't modify packets; it read them. Hence, detecting 
	  any anomaly or network problem highly relies on the analyst's knowledge and investigation
	  skills.


# Features

Here is a list of Wireshark features:

- Live packet capture from a network interface
- Open files containing packet data captured (PCAP Files) with tcpdump/WinDump, Wireshark, and many other packet capture programs
- Import packets from text files containing hex dumps of packet data
- Use display filters to filter and organize the data display
- Display packets with very detailed protocol information
- Create new protocol dissectors via plugins
- Detect and analyze VoIP calls in captured traffic
- Export packets in several capture file formats
- Filter packets based on many criteria
- Search for packets using various criteria
- Colorize the packet display based on filters
- Generate various statistics
- Operate on multiple platforms including UNIX and Windows
- Provide a standard three-pane packet browser
- Support live capture and offline analysis
- Offer the most powerful display filters in the industry
- Read and write many different capture file formats
- Decrypt traffic for many protocols including IPsec, ISAKMP, Kerberos, SNMPv3, SSL/TLS, WEP, and WPA/WPA2
- Allow applying coloring rules to the packet list for quick, intuitive analysis
- Export output to XML, PostScript, CSV, or plain text

# Installation of Wireshark

### [+] For Windows

Here is the step-by-step process to download and install Wireshark on Windows:

### Step 1: Visit the Official Wireshark Website

1. Open a web browser.
2. Navigate to the official Wireshark website at https://www.wireshark.org.

![34564_01 width-800](https://github.com/0xsh4d0w/IDK/assets/120315651/13ffe594-5ce4-4048-beea-408bb72dacdd)


### Step 2: Click on Download

1. Click on the "Download" button on the Wireshark website.
2. This will open a new webpage with different installers for Wireshark.

![1](https://github.com/0xsh4d0w/IDK/assets/120315651/d7933f04-8d49-4d5d-a3b6-8f06b25c54fb)

### Step 3: Download the Installer

1. Download the Wireshark installer matching your system type (32-bit or 64-bit).
2. Save the installer in the Downloads folder.

### Step 4: Run the Installer
![w4](https://github.com/0xsh4d0w/IDK/assets/120315651/656b597e-e8ed-49b9-b107-70ba0d454858)

1. Open the Downloads folder.
2. Locate the Wireshark installer and double-click on it to run it.

### Step 5: Confirm Installation
![w5](https://github.com/0xsh4d0w/IDK/assets/120315651/951ea218-0800-4e53-8571-289de910eb39)

1. If prompted, confirm that you want to make changes to your system.
2. Click "Yes" to continue.

### Step 6: Setup Wizard
![w6](https://github.com/0xsh4d0w/IDK/assets/120315651/b68ef659-7a65-45a2-8cc2-90ac26d790ca)

1. The Setup Wizard will appear.
2. Click "Next" to start the installation process.

### Step 7: License Agreement

![w7](https://github.com/0xsh4d0w/IDK/assets/120315651/e16e0682-cd1d-4fef-a245-8154e6f312e5)

1. Review the license agreement.
2. Click "I Agree" to continue.

### Step 8: Choose Components
![w8](https://github.com/0xsh4d0w/IDK/assets/120315651/fe83f1c9-178b-41ea-9b39-95a3efd21371)

1. Choose the components you want to install.
2. Leave the default components selected and click "Next".

### Step 9: Choose Shortcuts
![w9a](https://github.com/0xsh4d0w/IDK/assets/120315651/5588a95f-b538-4d3d-8d64-3488ec72bcc4)

1. Choose the shortcuts you want to create.
2. Leave the default shortcuts selected and click "Next".

### Step 10: Choose Installation Location
![w10](https://github.com/0xsh4d0w/IDK/assets/120315651/ecf256ad-6c22-4f75-9c26-389afb372fa7)

1. Choose the installation location.
2. Ensure there is sufficient memory space for the installation.

### Step 11: Install Npcap

![w14](https://github.com/0xsh4d0w/IDK/assets/120315651/7363c906-fcdd-4050-b502-b8322b9d6bee)

1. Install Npcap, which is required for packet capture.
2. Click "Next" to continue.

### Step 12: Install USB Network Capturing
![w12](https://github.com/0xsh4d0w/IDK/assets/120315651/7b119d2b-80a1-47f6-8d7b-4656a37e94da)

1. Choose whether to install USB network capturing.
2. Click "Install" to continue.

### Step 13: Install Npcap (Again)
![w18](https://github.com/0xsh4d0w/IDK/assets/120315651/d8eae119-0a05-4fea-b169-a086bdf7c3c6)


1. Install Npcap again.
2. Click "I Agree" to continue.

### Step 14: Finish Installation
![w20](https://github.com/0xsh4d0w/IDK/assets/120315651/9f7a633c-a6cd-47ed-88a3-84ab8d237092)

1. Click "Finish" to complete the installation.

### Step 15: Launch Wireshark
![w21](https://github.com/0xsh4d0w/IDK/assets/120315651/74ecdd73-1f43-4b27-b905-d6550ae0429e)

1. Launch Wireshark from the Start menu or desktop icon.
2. You can now use Wireshark for network troubleshooting and analysis.

### [+] For Linux

Step1: Update your Kali Linux System or Any Distro

Before you begin installing Wireshark, it is important to ensure that your Kali Linux system is up to date. 
You can do this by running the following command in the terminal:

```
sudo apt-get update && sudo apt-get full-upgrade -y
```

step2: Install Wireshark

Once your system is up to date, you can proceed with installing Wireshark.
To install wireshark on Kali linux, run the following command in the terminal:

```
sudo apt-get install wireshark
```

This will download and install the latest version of Wireshark on your system.

step3: Configure Wireshark

After installing Wireshark, you need to configure it to work with non-root users. By default, wireshark can only be
run by the root user. This can be a security risk, so it is recommended to cnfigure wireshark to allow non-root users
to run it.

To do this, run the following command in the terminal:

```
sudo dpkg-reconfigure wireshark-common
```

This will launch a configuration window where you can select “Yes” to allow non-root users to capture packets. 
Once you have made the selection, press “OK” to save the changes.

Step4: Launch Wireshark

You can launch wireshark by typing the following command in the terminal:

```
wireshark
```

This will launch Wireshark in the graphical user interface. From here, you can start capturing packets by selecting
the interface you want to capture from and clicking the `“Start”` button.


# Introduction to Wireshark UI Basic

![18](https://github.com/0xsh4d0w/IDK/assets/120315651/6d5f320d-a76e-4c08-8da7-4c74b5b3c29b)

Wireshark main window consists of these parts that are commonly called GUI programs.

1. The menu is used to start actions.
2. The main toolbar quick access to frequently used items from the menu.
3. Filter Toolbar allows user to set display filters to filter which packet should be displayed.
4. The packet list pane distplays a summary of each packet captured.
5. The packet details pane displays the packet selected in the packet list pane.
6. The packet bytes pane displays the data from the packet selected in the packet list pane and highlights the field
   selected in the packet details pane.
7. The status bar shows some detailed information about the current program state and the captured data.
8. There is also `+` sign attached with `Filter Toolbar` so you can also add the another `pcap` file or scan the
   traffic of another user.


#### The Menu
Wireshark main menu is located at the top of the main window (Window, Linux).
The main Menu conatins the following items:

![19](https://github.com/0xsh4d0w/IDK/assets/120315651/f9ad51c7-69d9-4ab7-8d11-39f19a44bb0b)

[+] File

This menu contains items to open and merge capture files, save, print, or export capture files in different formats.

[+] Edit

This menu contains items to find a packet, time reference or mark one or more packets, handle configuration profiles,
and set your preferences; (cut,copy, and paste are not presently implemented). 

[+] View

This menu controls the display of the captured data, including colourization of packets, zooming the font, showing a
packet in a separate window, expanding and collapsing trees in packet details.

[+] Go

This menu contains items to go to a specific packet.

[+] Capture

This menu allows you to start and stop captures and edit capture filters. Some of the important filters that make our
capture more efficient.

[+] Analyze

This menu contains items to manipulate display filters, enable or disable the dissection of protocols,configure 
user-specified decodes and follow a `TCP stream`.

[+] Stastics

This meny contains items to display various statistic windows, including a summary of the packets that have been 
captured, a display protocol hierarchy statistics and much more. Some of the important filters that make our Trace
analysis more efficient are described below:

`Statistics -> Protocol Hierarchy`

* Presents descriptive statistics per protocol.
* Useful for determining the types, amounts, and relative proportions of protocols within a trace.

![20](https://github.com/0xsh4d0w/IDK/assets/120315651/b3a77fa0-0f83-4f84-8a34-6a37df0457f9)

`Statistics -> Conversations`

* Generates descriptive stastics about each conversation for each protocol in the trace.

![21](https://github.com/0xsh4d0w/IDK/assets/120315651/a19dcb7a-261e-4707-9759-352d810b9a0a)

`statistics -> Flow Graph`

* Generates a sequence graph for the selected traffic.
* Useful for understanding `seq` and `ack`. calculations.

[+] Telephony

This menu contains items to display various telephony related statistics windows, including a media analysis, flow
daigrams,display protocol hierarchy statistics and much more.

[+] Wireless

This menu contains items to display Bluetooth and `IEEE 802.11` wireless stastics.

[+] Tools

This menu contains various tools available in Wireshark, such as creating `Firewall ACL Rules`.

[+] Help

This menu contains items to help the user, e.g, access to some basic help, manual pages of the various command-line
tools, online access to some of the webpages, and the usual dailogue.

### The Main Toolbar

The main toolbar provides quick access to frequently used items from the menu. This toolbar can customize by the 
user.

![23](https://github.com/0xsh4d0w/IDK/assets/120315651/e6326bb5-309f-4cca-8ef0-e9a75e69f9f0)

Actions of this filter toolbar are described below

![24](https://github.com/0xsh4d0w/IDK/assets/120315651/6fcebbbe-0e46-4d3a-8306-001efc2812f8)

![25](https://github.com/0xsh4d0w/IDK/assets/120315651/0cdf7e23-9868-4d7c-b714-1a0c74734f82)

For more Info: https://www.wireshark.org/docs/wsug_html_chunked/ChUseMainToolbarSection.html
