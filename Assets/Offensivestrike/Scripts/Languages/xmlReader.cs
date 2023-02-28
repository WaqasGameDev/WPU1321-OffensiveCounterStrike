using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Xml;
using System.Text;

public class xmlReader : MonoBehaviour {

	public TextAsset dictonary;

	public string languageName;
	public int currentLanguage;

	[HideInInspector]
	public string button1;
	[HideInInspector]
	public string button2;
	[HideInInspector]
	public string button3;
	[HideInInspector]
	public string button4;
	[HideInInspector]
	public string button5;
	[HideInInspector]
	public string button6;
	[HideInInspector]
	public string button7;
	[HideInInspector]
	public string button8;
	[HideInInspector]
	public string button9;
	[HideInInspector]
	public string button10;
	[HideInInspector]
	public string button11;
	[HideInInspector]
	public string button12;
	[HideInInspector]
	public string button13;
	[HideInInspector]
	public string button14;
	[HideInInspector]
	public string button15;
	[HideInInspector]
	public string button16;
	[HideInInspector]
	public string button17;
	[HideInInspector]
	public string button18;
	[HideInInspector]
	public string button19;
	[HideInInspector]
	public string button20;
	[HideInInspector]
	public string button21;
	[HideInInspector]
	public string button22;
	[HideInInspector]
	public string button23;
	[HideInInspector]
	public string button24;
	[HideInInspector]
	public string button25;
	[HideInInspector]
	public string button26;
	[HideInInspector]
	public string button27;
	[HideInInspector]
	public string button28;
	[HideInInspector]
	public string button29;
	[HideInInspector]
	public string button30;
	[HideInInspector]
	public string button31;
	[HideInInspector]
	public string button32;
	[HideInInspector]
	public string button33;
	[HideInInspector]
	public string button34;
	[HideInInspector]
	public string button35;
	[HideInInspector]
	public string button36;
	[HideInInspector]
	public string button37;
	[HideInInspector]
	public string button38;
	[HideInInspector]
	public string button39;
	[HideInInspector]
	public string button40;
	[HideInInspector]
	public string button41;
	[HideInInspector]
	public string button42;
	[HideInInspector]
	public string button43;
	[HideInInspector]
	public string button44;
	[HideInInspector]
	public string button45;
	[HideInInspector]
	public string button46;
	[HideInInspector]
	public string button47;
	[HideInInspector]
	public string button48;
	[HideInInspector]
	public string button49;
	[HideInInspector]
	public string button50;
	[HideInInspector]
	public string button51;
	[HideInInspector]
	public string button52;
	[HideInInspector]
	public string button53;
	[HideInInspector]
	public string button54;
	[HideInInspector]
	public string button55;
	[HideInInspector]
	public string button56;
	[HideInInspector]
	public string button57;
	[HideInInspector]
	public string button58;
	[HideInInspector]
	public string button59;
	[HideInInspector]
	public string button60;
	[HideInInspector]
	public string button61;
	[HideInInspector]
	public string button62;
	[HideInInspector]
	public string button63;
	[HideInInspector]
	public string button64;
	[HideInInspector]
	public string button65;
	[HideInInspector]
	public string button66;
	[HideInInspector]
	public string button67;
	[HideInInspector]
	public string button68;
	[HideInInspector]
	public string button69;
	[HideInInspector]
	public string button70;
	[HideInInspector]
	public string button71;
	[HideInInspector]
	public string button72;
	[HideInInspector]
	public string button73;
	[HideInInspector]
	public string button74;
	[HideInInspector]
	public string button75;
	[HideInInspector]
	public string button76;
	[HideInInspector]
	public string button77;
	[HideInInspector]
	public string button78;
	[HideInInspector]
	public string button79;
	[HideInInspector]
	public string button80;
	[HideInInspector]
	public string button81;
	[HideInInspector]
	public string button82;
	[HideInInspector]
	public string button83;
	[HideInInspector]
	public string button84;
	[HideInInspector]
	public string button85;
	[HideInInspector]
	public string button86;
	[HideInInspector]
	public string button87;
	[HideInInspector]
	public string button88;
	[HideInInspector]
	public string button89;
	[HideInInspector]
	public string button90;
	[HideInInspector]
	public string button91;
	[HideInInspector]
	public string button92;
	[HideInInspector]
	public string button93;
	[HideInInspector]
	public string button94;
	[HideInInspector]
	public string button95;
	[HideInInspector]
	public string button96;
	[HideInInspector]
	public string button97;
	[HideInInspector]
	public string button98;
	[HideInInspector]
	public string button99;
	[HideInInspector]
	public string button100;
	[HideInInspector]
	public string button101;
	[HideInInspector]
	public string button102;
	[HideInInspector]
	public string button103;
	[HideInInspector]
	public string button104;
	[HideInInspector]
	public string button105;
	[HideInInspector]
	public string button106;
	[HideInInspector]
	public string button107;
	[HideInInspector]
	public string button108;
	[HideInInspector]
	public string button109;
	[HideInInspector]
	public string button110;


	List<Dictionary<string, string>> languages = new List<Dictionary<string, string>> ();
	Dictionary<string, string> obj;

	void Awake()
	{
		Reader();
	}

	void Update()
	{
		languages [currentLanguage].TryGetValue ("Name", out languageName);
		languages [currentLanguage].TryGetValue ("button1", out button1);
		languages [currentLanguage].TryGetValue ("button2", out button2);
		languages [currentLanguage].TryGetValue ("button3", out button3);
		languages [currentLanguage].TryGetValue ("button4", out button4);
		languages [currentLanguage].TryGetValue ("button5", out button5);
		languages [currentLanguage].TryGetValue ("button6", out button6);
		languages [currentLanguage].TryGetValue ("button7", out button7);
		languages [currentLanguage].TryGetValue ("button8", out button8);
		languages [currentLanguage].TryGetValue ("button9", out button9);
		languages [currentLanguage].TryGetValue ("button10", out button10);
		languages [currentLanguage].TryGetValue ("button11", out button11);
		languages [currentLanguage].TryGetValue ("button12", out button12);
		languages [currentLanguage].TryGetValue ("button13", out button13);
		languages [currentLanguage].TryGetValue ("button14", out button14);
		languages [currentLanguage].TryGetValue ("button15", out button15);
		languages [currentLanguage].TryGetValue ("button16", out button16);
		languages [currentLanguage].TryGetValue ("button17", out button17);
		languages [currentLanguage].TryGetValue ("button18", out button18);
		languages [currentLanguage].TryGetValue ("button19", out button19);
		languages [currentLanguage].TryGetValue ("button20", out button20);
		languages [currentLanguage].TryGetValue ("button21", out button21);
		languages [currentLanguage].TryGetValue ("button22", out button22);
		languages [currentLanguage].TryGetValue ("button23", out button23);
		languages [currentLanguage].TryGetValue ("button24", out button24);
		languages [currentLanguage].TryGetValue ("button25", out button25);
		languages [currentLanguage].TryGetValue ("button26", out button26);
		languages [currentLanguage].TryGetValue ("button27", out button27);
		languages [currentLanguage].TryGetValue ("button28", out button28);
		languages [currentLanguage].TryGetValue ("button29", out button29);
		languages [currentLanguage].TryGetValue ("button30", out button30);
		languages [currentLanguage].TryGetValue ("button31", out button31);
		languages [currentLanguage].TryGetValue ("button32", out button32);
		languages [currentLanguage].TryGetValue ("button33", out button33);
		languages [currentLanguage].TryGetValue ("button34", out button34);
		languages [currentLanguage].TryGetValue ("button35", out button35);
		languages [currentLanguage].TryGetValue ("button36", out button36);
		languages [currentLanguage].TryGetValue ("button37", out button37);
		languages [currentLanguage].TryGetValue ("button38", out button38);
		languages [currentLanguage].TryGetValue ("button39", out button39);
		languages [currentLanguage].TryGetValue ("button40", out button40);
		languages [currentLanguage].TryGetValue ("button41", out button41);
		languages [currentLanguage].TryGetValue ("button42", out button42);
		languages [currentLanguage].TryGetValue ("button43", out button43);
		languages [currentLanguage].TryGetValue ("button44", out button44);
		languages [currentLanguage].TryGetValue ("button45", out button45);
		languages [currentLanguage].TryGetValue ("button46", out button46);
		languages [currentLanguage].TryGetValue ("button47", out button47);
		languages [currentLanguage].TryGetValue ("button48", out button48);
		languages [currentLanguage].TryGetValue ("button49", out button49);
		languages [currentLanguage].TryGetValue ("button50", out button50);
		languages [currentLanguage].TryGetValue ("button51", out button51);
		languages [currentLanguage].TryGetValue ("button52", out button52);
		languages [currentLanguage].TryGetValue ("button53", out button53);
		languages [currentLanguage].TryGetValue ("button54", out button54);
		languages [currentLanguage].TryGetValue ("button55", out button55);
		languages [currentLanguage].TryGetValue ("button56", out button56);
		languages [currentLanguage].TryGetValue ("button57", out button57);
		languages [currentLanguage].TryGetValue ("button58", out button58);
		languages [currentLanguage].TryGetValue ("button59", out button59);
		languages [currentLanguage].TryGetValue ("button60", out button60);
		languages [currentLanguage].TryGetValue ("button61", out button61);
		languages [currentLanguage].TryGetValue ("button62", out button62);
		languages [currentLanguage].TryGetValue ("button63", out button63);
		languages [currentLanguage].TryGetValue ("button64", out button64);
		languages [currentLanguage].TryGetValue ("button65", out button65);
		languages [currentLanguage].TryGetValue ("button66", out button66);
		languages [currentLanguage].TryGetValue ("button67", out button67);
		languages [currentLanguage].TryGetValue ("button68", out button68);
		languages [currentLanguage].TryGetValue ("button69", out button69);
		languages [currentLanguage].TryGetValue ("button70", out button70);
		languages [currentLanguage].TryGetValue ("button71", out button71);
		languages [currentLanguage].TryGetValue ("button72", out button72);
		languages [currentLanguage].TryGetValue ("button73", out button73);
		languages [currentLanguage].TryGetValue ("button74", out button74);
		languages [currentLanguage].TryGetValue ("button75", out button75);
		languages [currentLanguage].TryGetValue ("button76", out button76);
		languages [currentLanguage].TryGetValue ("button77", out button77);
		languages [currentLanguage].TryGetValue ("button78", out button78);
		languages [currentLanguage].TryGetValue ("button79", out button79);
		languages [currentLanguage].TryGetValue ("button80", out button80);
		languages [currentLanguage].TryGetValue ("button81", out button81);
		languages [currentLanguage].TryGetValue ("button82", out button82);
		languages [currentLanguage].TryGetValue ("button83", out button83);
		languages [currentLanguage].TryGetValue ("button84", out button84);
		languages [currentLanguage].TryGetValue ("button85", out button85);
		languages [currentLanguage].TryGetValue ("button86", out button86);
		languages [currentLanguage].TryGetValue ("button87", out button87);
		languages [currentLanguage].TryGetValue ("button88", out button88);
		languages [currentLanguage].TryGetValue ("button89", out button89);
		languages [currentLanguage].TryGetValue ("button90", out button90);
		languages [currentLanguage].TryGetValue ("button91", out button91);
		languages [currentLanguage].TryGetValue ("button92", out button92);
		languages [currentLanguage].TryGetValue ("button93", out button93);
		languages [currentLanguage].TryGetValue ("button94", out button94);
		languages [currentLanguage].TryGetValue ("button95", out button95);
		languages [currentLanguage].TryGetValue ("button96", out button96);
		languages [currentLanguage].TryGetValue ("button97", out button97);
		languages [currentLanguage].TryGetValue ("button98", out button98);
		languages [currentLanguage].TryGetValue ("button99", out button99);
		languages [currentLanguage].TryGetValue ("button100", out button100);
		languages [currentLanguage].TryGetValue ("button101", out button101);
		languages [currentLanguage].TryGetValue ("button102", out button102);
		languages [currentLanguage].TryGetValue ("button103", out button103);
		languages [currentLanguage].TryGetValue ("button104", out button104);
		languages [currentLanguage].TryGetValue ("button105", out button105);
		languages [currentLanguage].TryGetValue ("button106", out button106);
		languages [currentLanguage].TryGetValue ("button107", out button107);
		languages [currentLanguage].TryGetValue ("button108", out button108);
		languages [currentLanguage].TryGetValue ("button109", out button109);
		languages [currentLanguage].TryGetValue ("button110", out button110);
	}

	void Reader()
	{
		XmlDocument xmlDoc = new XmlDocument ();
		xmlDoc.LoadXml (dictonary.text);
		XmlNodeList languagesList = xmlDoc.GetElementsByTagName ("language");

		foreach (XmlNode languageValue in languagesList) 
		{
			XmlNodeList languageContent = languageValue.ChildNodes;
			obj = new Dictionary<string,string>();

			foreach(XmlNode value in languageContent)
			{
				if (value.Name == "Name")
					obj.Add (value.Name, value.InnerText);
				
				if (value.Name == "button1")
					obj.Add (value.Name, value.InnerText);
				
				if (value.Name == "button2")
					obj.Add (value.Name, value.InnerText);
				
				if (value.Name == "button3")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button4")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button5")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button6")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button7")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button8")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button9")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button10")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button11")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button12")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button13")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button14")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button15")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button16")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button17")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button18")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button19")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button20")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button21")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button22")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button23")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button24")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button25")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button26")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button27")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button28")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button29")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button30")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button31")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button32")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button33")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button34")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button35")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button36")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button37")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button38")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button39")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button40")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button41")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button42")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button43")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button44")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button45")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button46")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button47")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button48")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button49")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button50")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button51")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button52")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button53")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button54")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button55")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button56")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button57")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button58")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button59")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button60")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button61")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button62")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button63")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button64")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button65")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button66")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button67")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button68")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button69")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button70")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button71")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button72")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button73")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button74")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button75")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button76")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button77")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button78")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button79")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button80")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button81")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button82")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button83")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button84")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button85")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button86")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button87")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button88")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button89")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button90")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button91")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button92")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button93")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button94")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button95")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button96")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button97")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button98")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button99")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button100")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button101")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button102")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button103")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button104")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button105")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button106")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button107")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button108")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button109")
					obj.Add (value.Name, value.InnerText);

				if (value.Name == "button110")
					obj.Add (value.Name, value.InnerText);

			}

			languages.Add(obj);

		}
	}
}
