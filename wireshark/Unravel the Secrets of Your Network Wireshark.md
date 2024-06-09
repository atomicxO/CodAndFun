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

### Step 2: Click on Download

1. Click on the "Download" button on the Wireshark website.
2. This will open a new webpage with different installers for Wireshark.

### Step 3: Download the Installer

1. Download the Wireshark installer matching your system type (32-bit or 64-bit).
2. Save the installer in the Downloads folder.

### Step 4: Run the Installer

1. Open the Downloads folder.
2. Locate the Wireshark installer and double-click on it to run it.

### Step 5: Confirm Installation

1. If prompted, confirm that you want to make changes to your system.
2. Click "Yes" to continue.

### Step 6: Setup Wizard

1. The Setup Wizard will appear.
2. Click "Next" to start the installation process.

### Step 7: License Agreement

1. Review the license agreement.
2. Click "I Agree" to continue.

### Step 8: Choose Components

1. Choose the components you want to install.
2. Leave the default components selected and click "Next".

### Step 9: Choose Shortcuts

1. Choose the shortcuts you want to create.
2. Leave the default shortcuts selected and click "Next".

### Step 10: Choose Installation Location

1. Choose the installation location.
2. Ensure there is sufficient memory space for the installation.

### Step 11: Install Npcap

1. Install Npcap, which is required for packet capture.
2. Click "Next" to continue.

### Step 12: Install USB Network Capturing

1. Choose whether to install USB network capturing.
2. Click "Install" to continue.

### Step 13: Install Npcap (Again)

1. Install Npcap again.
2. Click "I Agree" to continue.

### Step 14: Finish Installation

1. Click "Finish" to complete the installation.

### Step 15: Launch Wireshark

1. Launch Wireshark from the Start menu or desktop icon.
2. You can now use Wireshark for network troubleshooting and analysis.

### Conclusion:
Wireshark is a powerful network protocol analyzer that can be easily installed on Windows. Follow these steps to download and install Wireshark on your Windows system.
