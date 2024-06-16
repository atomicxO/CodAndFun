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


#### The Filter Toolbar

The filter toolbar lets you quickly edit and apply display filters.

![26](https://github.com/0xsh4d0w/IDK/assets/120315651/336fa853-cbe9-4c0d-989c-7867aafe7d4f)

Actions of this filter toolbar are described below

![27](https://github.com/0xsh4d0w/IDK/assets/120315651/32943393-b964-42cf-a553-85fd4daf8da9)


#### The Packet list Pane

The Packet list pane displays all the packets in the order they were recorded.

![28](https://github.com/0xsh4d0w/IDK/assets/120315651/7f145102-5bda-4f2a-854d-642300b9558d)

Each line in the packet list corresponds to one packet in the capture file select the lines to get more details.
More details will be displayed in the packet details pane and packet byte panes.

There are lots of column available such as:

* No: The number of the packet in the capture file. This number won't change, even if a display filter is used.
* Time: The timestamp of when the packet was captured is displayed in this column. The presentation format of this
	timestamp can be changed.
* Source: The address where this packet is coming from.
* Destination: The address where this packet is going.
* Protocol: The highest-level protocol that wireshark can detect.
* Length: The length in bytes of each packet.
* info: Additional information about the packet content.


#### The Packet details pane
The packet details pane shows the selected or current packet in a detailed form.

![29](https://github.com/0xsh4d0w/IDK/assets/120315651/17b01509-6899-4559-bd57-20dcf7d07369)

The above pane shows the protocols and protocol fields of the packet selected in the “packet list” pane. 
The protocols are shown in a tree which can be expanded and collapsed.’’


#### The Packet Bytes pane

The Packet bytes pane shows the data of the selected or current packet in `hex dump` style.

![30](https://github.com/0xsh4d0w/IDK/assets/120315651/3bd7f80c-5a5b-4891-8bef-c8091b2baad4)

The packet bytes pane shows a `canonical hex dump` of the packet data. Each line contains the data offset, `sixteen 
hexadecimal bytes` and `sixteen ASCII bytes`.Non-Printable bytes are replaced with period `"."`


#### The Status bar

The status bar displays informational messages such as

![31](https://github.com/0xsh4d0w/IDK/assets/120315651/9e04a522-e008-4b9f-91bf-2a36119cf71c)


##### The colourized bullet

The left side shows the highest expert information in the currently loaded capture file. 
Hovering the mouse on the colourized bullet will show you a description of the expert information level.

##### The edit icon

This allows you to add a comment to the capture file using the capture file properties dialogue.

##### The middle

It shows the current number of packets in the capture file. The following values are displayed:

##### Packets

The number of packets is being captured.

##### Displayed

The number of packets is being displayed.

##### Marked

The number of marked packets. Only displayed if you mark any packets in the capture.

##### Dropped

It shows the number of dropped packets. only displayed If Wireshark was unable to capture all packets.

##### Ignored

It shows the number of ignored packets and it will only be displayed if you ignore any of the packets.

##### The right side

it shows the selected configuration profile. Clicking on this part of the status bar will bring up a menu with all
available configuration profiles, and selecting from this list will change the configuration profile.

![32](https://github.com/0xsh4d0w/IDK/assets/120315651/3de95fd7-0ac3-4491-9408-74d6216bf540)


# Packet Capturing

The following methods can be used to start capturing packets.
You can double-click on the interface in the welcome screen of wireshark.

If you already know the name of the `capture interface` then you can start wireshark from the command line by 
running the following command in the terminal.

```
wireshark -I eth0 -k
```

This will start wireshark capturing on `interface eth0`

Once you have captured some packets you can view the packets that are displayed in the `packet list pane` by simply 
clicking on a packet on a `packet list pane`, which will bring up the selected packet in the `tree view` and `byte
view panes`. As soon you capture some traffic then you need to apply some filter to make it easily understandable.

--> Wireshark has two filtering languages:

 * Capture filters.
 * Display filters.

`Capture filters` are used for filtering when capturing packets and `Display filters` are used for filtering which 
packets are displayed.Wireshark provides a display filter language that enables you to precise control which packets
are displayed.


# Display filter fields

Wireshark's display filters a bar located right above the column display section. To only display packets containing
a particular protocol, type the protocol into wireshark's display filter toolbar wireshark offers a list of 
suggestion based on the text you typed.

For example, to only display `TCP Packets`, type tcp with wireshark's display filter toolbar.

![33](https://github.com/0xsh4d0w/IDK/assets/120315651/a78e28b6-ec8b-4734-9cd1-acef5c288e98)

Similarly, to only display packets containing a particular field, type the field into Wireshark’s display filter 
toolbar. For example, to only display `HTTP requests`, type `http.request` into Wireshark’s display filter toolbar
and it will accept the expression and works as intended.

![34](https://github.com/0xsh4d0w/IDK/assets/120315651/84377537-94a5-4631-a770-10b482f9e72f)

A similar example of Wireshark display filter accepting an expression but it does not work as intended such as 
type `DNS and ip.addr != 10.96.203.66`.

![35](https://github.com/0xsh4d0w/IDK/assets/120315651/793596a7-47de-4076-8eaa-2915568525cd)

As you saw above the expression works but not intended.
As we have noticed these packet captures have `different colours`. So, what are these colours intended for…?

Don’t get confused with a different type of colour packets. These colours are intended for

* gray - `TCP packets`.
* Black with red letters - `TCP packets with errors`.
* Green - `HTTP Packets`.
* Light Blue - `UDP Packets`.
* Pale Blue - `ARP Packets`.
* Lavender - `ICMP Packets`.
* Black with green Letters - `ICMP Packets with errors`.

`Note: – Colourings can be changed under View -> Colouring Rules`

Colouring Packets

Along with quick packet information, Wireshark also colour packets in order of different conditions and the protocol to spot anomalies and protocols in captures quickly. This glance at packet information can help track down exactly what you're
looking for during analysis. You can create custom colour rules to spot events of interest by using display filters.


Wireshark has two types of packet colouring methods: 
temporary rules that are only available during a program session and permanent rules that are saved under the preference file (profile) and available for the next program session. You can use the "right-click menu" or
"View --> Coloring Rules" menu to create permanent colouring rules.
The "Colourise Packet List" menu activates/deactivates the colouring rules. Temporary packet colouring is done with the "right-click menu" or "View --> Conversation Filter" menu. 

# View File Details

Knowing the file details is helpful. Especially when working with multiple pcap files, sometimes you will need 
to know and recall the file details (File hash, capture time, capture file comments, interface and statistics) 
to identify the file, classify and prioritise it. You can view the details by following 
`"Statistics --> Capture File Properties"` or by clicking the "pcap icon located on the left bottom" of the
window.

# Building Display Filter expressions.

we can build display filters that compare values using a different type of comparison operator.

For Example to only display packets to or from the `IP address 192.168.0.124` use `ip.addr==192.168.0.124`.
wireshark display filter uses `Boolean expressions`, so we can specify values and chain them together. 
A complete list of available comparison operators is shown below.

![36](https://github.com/0xsh4d0w/IDK/assets/120315651/0f7879fd-46c1-4d4f-98e0-54aaafe5aaf9)



# Some Useful Filters

Here are some filter expressions that can be used as a way to quickly review web traffic.

Let's understand this with some sort of methods like how we are going to filter some infectious traffic.

Open the Packet Capture and apply the following filter: `"http.request"`. 
This filter will show all `HTTP POST Request`. Also, you can find the total no. of packets at the bottom of the 
wireshark screen are 16 at these packets.

```
http.request
```

 ![37](https://github.com/0xsh4d0w/IDK/assets/120315651/770a2363-3797-46f0-a429-575635a3a5a4)

After that to reveal all the URLs for HTTP requests, Domain names we can use the following expression as a way to 
quickly review web traffic:

```
http.request or ssl.handshake.type == 1
```

The value `http.request` reveals URLs for HTTP Requests, and `SSL.handshake.type == 1` reveal domain names used in
`HTTPS or SSL/TLS traffic.` Filtering with this display filter can outline the flaw of events for the web traffic.

![38](https://github.com/0xsh4d0w/IDK/assets/120315651/b438ed9c-9762-4448-8b55-6bbed4d6079a)

By modifying these types of filters, you can drill down the `infectious traffic`.


# More Filters and ways to learn wireshark more effective way

1. Finding out the total number of `TCP SYN packet for port 80`

To reveal all the `TCP SYN packets` we can use the following expression as a way to quickly review web traffic for 
port 80. Also, you can find the total no. of packets at the bottom of the wireshark screen that are 4 of these 
packets.

```
tcp.flags.syn == 1 and tcp.flags.ack == 0 && tcp.port == 80
```

![39](https://github.com/0xsh4d0w/IDK/assets/120315651/3a15afb7-3468-44c4-9d35-0e4ed679444f)


2. Filtering out all the packet with the `HTTP Response Code 200`.

The value `http.respone` reveals URLs for HTTP responses, and `HTTP status code 200` means success.
The client has requested documents from the server. The server has replied to the client and given the
client the documents. Filtering with this display filter can outline the flaw of events for the web traffic.

```
http.response.code == 200
```

![40](https://github.com/0xsh4d0w/IDK/assets/120315651/38f35c5f-80f7-44a2-b330-cbf6ec9f34f7)

3. An Attacker try to download the malicious file from www.ethereal.com.
   Write down the filter to identify the `http host`.

   In this case, we have to find out the host who have visited the malicious website. As we know each website have
   own URL. So simply we can find out the host by using the following expression who have visited a malicious
   website.

   ```
   http.host=="www.ethereal.com" or http.host == "URL"
   ```

![41](https://github.com/0xsh4d0w/IDK/assets/120315651/33968f61-656e-430b-98d2-c2a997f056ac)


4. Write down the filter to identity the destination port 23.

You can use the following expression to filter out the `destination port 23`.

```
tcp.dstport == 23
```

![42](https://github.com/0xsh4d0w/IDK/assets/120315651/0c0fb9bf-3fff-49a3-8e9f-0dfad3070d16)


5. Filtering out the packets on behalf of the `mac address`.

Apply the following expressions to filter out the traffic for the specific `mac address`.

```
eth.addr == 00:a0:cc:3b:bf:fa
 or
eth.addr == "mac addr"
```

![43](https://github.com/0xsh4d0w/IDK/assets/120315651/a6e67e1d-b448-435c-a17c-f6ade3a95747)


6. Writing down the filter to identify the IP address `10.96.203.66 for port 80` also including the
   `IP address 10.121.1.161`. find out the total no. of the packet.

In this situation, we can create our custom filter for these types of random scenarios by using logical operators 
such as

```
ip.addr==10.96.203.66 && tcp.port == 80 &&!(ip.addr==10.121.1.161)
```

By applying this filter, we can easily find out the total packets that are 3 of these packets.

![44](https://github.com/0xsh4d0w/IDK/assets/120315651/bbfc7c80-ee8a-41c3-a619-11b2583abf1e)



# Wireshark for Password Sniffing

Wireshark can capture not only passwords, but any type of data passing through a network – usernames, 
email addresses, personal information, pictures, videos, or anything else. Wireshark can sniff the passwords 
passing through as long as we can capture network traffic.


## Table of Contents

* Capture HTTP Password
* Monitoring HTTPS Packets over SSL or TLS
* Capture Telnet Password
* Capture FTP Password
* Capture SMTP Password
* Analyzing SNMP Community String
* Capture MSSQL Password
* Capture PostgreSQL Password
* Creating Firewall Rules with Wireshark
* Conclusion


Note: Some Network Protocols do not use encryption. These protocols are referred to as `clear text` (or plain text)
      protocols.Becuase clear text protocols do not encrypt communication, all data, including passwords, is visible
      to the naked eye. That's how wireshark capture any passwords easily.
      Anyone who is in a position to see the communication (for example, a man in the middle) can eventually see 
      everything.


#### Capture HTTP Password

No introduction is certainly needed for the Hypertext Transfer Protocol (HTTP). It usually works on port 80/TCP,
and as it is a text protocol, it does not give the communication parties much or no privacy.
Anyone who’s able to communicate can catch everything, including passwords, via that channel.

```
What is a channel?
>> A channel is used for information transfer of, for example, a digital bit stream, from one or several senders to
   one or several receivers.
```

```
Another Important Note:-

Before start analyzing any packet,
please turn off “Allow subdissector to reassemble TCP streams”(Preference → Protocol → TCP)(This will prevent
TCP packet to split into multiple PDU unit)  
```

> Here is an example of login credentials captured in a `POST` request in an `HTTP` Communication.
> So, here we will see how we can capture the password using the Wireshark network capture analyzer. and see
  the outputs of the following steps.

Step 1: First of all, open your Wireshark tool in your window or in Linux virtual machine. and start capturing the
        network. suppose I am capturing my wireless fidelity.

![low5-1024](https://github.com/0xsh4d0w/IDK/assets/120315651/db8676a0-14ec-4509-9f1f-4f7cbbfda2f3)

Step 2: After starting the packet capturing we will go to the website and login the credential on that website as 
	you can see in the image.
 
 ![tony](https://github.com/0xsh4d0w/IDK/assets/120315651/9b419093-65b0-4ae1-b3d9-ad027d0b71c2)

Step 3: Now after completing the login credential we will go and capture the password in Wireshark. for that we have
        to use some filter that helps to find the login credential through the packet capturing.         

Step 4: Wireshark has captured some packets but we specifically looking for HTTP packets. so in the display filter
	bar we use some command to find all the captured HTTP packets. as you can see in the below image the green
 	bar where we apply the filter.
  
  ```
	http
  ```

![tony2-(1)-1024](https://github.com/0xsh4d0w/IDK/assets/120315651/8ea7b6cd-bf45-4799-bfc0-330fe403400f)

Step 5: So there are some HTTP packets are captured but we specifically looking for form data that the user 
	submitted to the website. for that, we have a separate filter 

As we know that there are main two methods used for submitting form data from web pages like login forms to 
the server. the methods are-

* GET 
* POST 

Step 6: So firstly for knowing the credential we use the first method and apply the filter for the GET methods as 
	you can see below.
 
```
http.request.method == "GET"
```

![tony3-1024](https://github.com/0xsh4d0w/IDK/assets/120315651/f0258907-a092-4b4e-b73c-01cd6f06d55f)

As you can see in the image there are two packets where the login page was requested with a `GET request` as well,
but there is no form data submitted with a GET request. 

Step 7: Now after checking the GET method if we didn’t find the form data, then we will try the POST method for that 
	we will apply the filter on Wireshark as you can see. 

```
http.request.method == "POST"
```

![tony4-1024](https://github.com/0xsh4d0w/IDK/assets/120315651/65f6f89d-8ec7-4929-8a6e-f603b45561e0)

As you can see we have a packet with form data click on the packet with user info and the `application URL encoded`.
and click on the down-

`HTML form URL Encoded` where the login credential is found.
login credential as it is the same that we filed on the website in `step 2`.

```
Form item: "uname" = "Tonystark_44"
Form item: "pass" = "tony@1234"
```



#### Dissect HTTPS Capture

![HTTPs-Capture](https://miro.medium.com/v2/resize:fit:720/format:webp/1*V5Fftdzs9tP48Gkx7Zdltw.png)

as you can see

* 3 Way handshake is happening.
* Hello from `SSL` client and then acknowledgment from server.
* Server Hello and then `ACK`.
* Exchanging some key and cipher information.
* Finally it actually start exchanging data.

Then we click on any `application data` that data is unreadable to  us it's all gibberish and useless but with 
wireshark we can decrypt that data only thing we need is the `Private Key` of the server.

![HTTPs-Capture](https://miro.medium.com/v2/resize:fit:720/format:webp/1*GX9egA81_ea0ypIALRFY1g.png)

Step 1:
```
Once again go to Preference → Protocol → SSL
```

Step 2:
```
Add these Values

IP address: 127.0.0.1

Port: 443

Protocol: http

key File: https://wiki.wireshark.org/uploads/__moin_import__/attachments/SampleCaptures/snakeoil2_070531.tgz
```
![10](https://github.com/0xsh4d0w/IDK/assets/120315651/e0cc884c-e0cd-4a7d-9bb6-3abbc3622174)

As you can see data is now decrypted

![Decrypt](https://miro.medium.com/v2/resize:fit:1100/format:webp/1*O4VfKjonieb5WCHstu8rfA.png)

So, See That's how you decrypt the HTTPS encrypted application data.



#### Capture Telnet Password

No introduction is required for Telnet protocol using port `tcp/23`. It is mainly used for
`administrative convenience` and is known for its insecurity. Since encryption is not available, privacy or
unauthorized access protection is not available. Telnet is still used today, however…

Telnet is a protocol used for administration on a wide range of devices. Telnet is the only option for some devices,
with no other options (e.g. there is no SSH nor HTTPS web interface available). 
This makes it extremely difficult for organizations to completely eliminate it. Telnet is commonly seen on:

* Video Conferencing Systems
* Mainframes
* Network equipment
* Storage and Tape systems
* Imaging devices
* Legacy IP based Phones


There is not a rocket science just follow my steps.

Step1: Fast Filter the only `Telnet` traffic by using the `telnet` filter.
Step2: Now you can see the `Analyze` option above of filter bar. Click on it and find `Follow` 
	Option.
Step3: When you find `Follow` Options click on it and select `TCP Stream` and Boom you got the 
       login activity and creds of the telnet network.
 
![12](https://github.com/0xsh4d0w/IDK/assets/120315651/77ac8d4f-13f2-48fd-b63e-b447a2a24fb0)
  
So, that now you can see an attacker completely overtake the Mainframe System.

