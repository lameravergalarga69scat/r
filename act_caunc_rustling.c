#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	bool bLocal_26 = false;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	bool bLocal_47 = false;
	int iLocal_48 = 0;
	bool bLocal_49 = false;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	vector3 vLocal_62[24] = "";
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	struct<6> Local_85 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_91 = -1082130432;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	struct<695> Local_96 = { 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -50684386, 0, 2, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 50, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 1092616192, 2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1176256512, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1106247680, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1106247680, 1106247680, 1106247680, 1106247680, 1106247680, 3, 1, 1099431936, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192, 0, 1112014848, 0, 0, 0, 0, 0, 0, 1, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1036831949, 1045220557, 1036831949, 0, 1065353216, 1077936128, 1, 0, 0, 0 } ;
	var uLocal_791 = 20;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 4;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	int iLocal_897 = 0;
	int iLocal_898 = 0;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	int iLocal_910 = 0;
	int iLocal_911 = 0;
	int iLocal_912 = 0;
	int iLocal_913 = 0;
	int iLocal_914 = 0;
	int iLocal_915 = 0;
	int iLocal_916 = 0;
	int iLocal_917 = 0;
	int iLocal_918 = 0;
	int iLocal_919 = 0;
	int iLocal_920 = 0;
	vector3 vLocal_921 = { 0f, 0f, 0f };
	int iLocal_924 = 0;
	int iLocal_925 = 0;
	vector3 vLocal_926 = { 0f, 0f, 0f };
	vector3 vLocal_929 = { 0f, 0f, 0f };
	vector3 vLocal_932 = { 0f, 0f, 0f };
	vector3 vLocal_935 = { 0f, 0f, 0f };
	float fLocal_938 = 0f;
	vector3 vLocal_939 = { 0f, 0f, 0f };
	float fLocal_942 = 0f;
	vector3 vLocal_943 = { 0f, 0f, 0f };
	float fLocal_946 = 0f;
	vector3 vLocal_947 = { 0f, 0f, 0f };
	float fLocal_950 = 0f;
	vector3 vLocal_951 = { 0f, 0f, 0f };
	float fLocal_954 = 0f;
	vector3 vLocal_955 = { 0f, 0f, 0f };
	vector3 vLocal_958 = { 0f, 0f, 0f };
	vector3 vLocal_961 = { 0f, 0f, 0f };
	vector3 vLocal_964 = { 0f, 0f, 0f };
	float fLocal_967 = 0f;
	vector3 vLocal_968 = { 0f, 0f, 0f };
	vector3 vLocal_971 = { 0f, 0f, 0f };
	vector3 vLocal_974 = { 0f, 0f, 0f };
	vector3 vLocal_977 = { 0f, 0f, 0f };
	vector3 vLocal_980 = { 0f, 0f, 0f };
	vector3 vLocal_983 = { 0f, 0f, 0f };
	vector3 vLocal_986 = { 0f, 0f, 0f };
	vector3 vLocal_989 = { 0f, 0f, 0f };
	vector3 vLocal_992 = { 0f, 0f, 0f };
	vector3 vLocal_995 = { 0f, 0f, 0f };
	float fLocal_998 = 0f;
	vector3 vLocal_999 = { 0f, 0f, 0f };
	vector3 vLocal_1002 = { 0f, 0f, 0f };
	vector3 vLocal_1005 = { 0f, 0f, 0f };
	vector3 vLocal_1008 = { 0f, 0f, 0f };
	vector3 vLocal_1011 = { 0f, 0f, 0f };
	vector3 vLocal_1014 = { 0f, 0f, 0f };
	vector3 vLocal_1017 = { 0f, 0f, 0f };
	vector3 vLocal_1020 = { 0f, 0f, 0f };
	vector3 vLocal_1023 = { 0f, 0f, 0f };
	vector3 vLocal_1026 = { 0f, 0f, 0f };
	float fLocal_1029 = 0f;
	float fLocal_1030 = 0f;
	vector3 vLocal_1031 = { 0f, 0f, 0f };
	vector3 vLocal_1034 = { 0f, 0f, 0f };
	float fLocal_1037 = 0f;
	float fLocal_1038 = 0f;
	vector3 vLocal_1039 = { 0f, 0f, 0f };
	vector3 vLocal_1042[24] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1115[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_1140[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1149 = 8;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	int iLocal_1158 = 0;
	int iLocal_1159 = 0;
	int iLocal_1160 = 0;
	int iLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	bool bLocal_1165 = false;
	bool bLocal_1166 = false;
	int iLocal_1167 = 0;
	int iLocal_1168 = 0;
	int iLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = -1;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 1097859072;
	var uLocal_1188 = 1000;
	var uLocal_1189 = 1067450368;
	var uLocal_1190 = 5000;
	var uLocal_1191 = 42;
	var uLocal_1192 = 1103626240;
	var uLocal_1193 = 1077936128;
	var uLocal_1194 = 1106247680;
	var uLocal_1195 = 1103101952;
	var uLocal_1196 = 1097859072;
	var uLocal_1197 = 1103626240;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = -1;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 1097859072;
	var uLocal_1216 = 1000;
	var uLocal_1217 = 1067450368;
	var uLocal_1218 = 5000;
	var uLocal_1219 = 42;
	var uLocal_1220 = 1103626240;
	var uLocal_1221 = 1077936128;
	var uLocal_1222 = 1106247680;
	var uLocal_1223 = 1103101952;
	var uLocal_1224 = 1097859072;
	var uLocal_1225 = 1103626240;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = -1;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 1097859072;
	var uLocal_1244 = 1000;
	var uLocal_1245 = 1067450368;
	var uLocal_1246 = 5000;
	var uLocal_1247 = 42;
	var uLocal_1248 = 1103626240;
	var uLocal_1249 = 1077936128;
	var uLocal_1250 = 1106247680;
	var uLocal_1251 = 1103101952;
	var uLocal_1252 = 1097859072;
	var uLocal_1253 = 1103626240;
	int iLocal_1254 = 0;
	int iLocal_1255 = 0;
	int iLocal_1256 = 0;
	vector3 vLocal_1257 = { 0f, 0f, 0f };
	vector3 vLocal_1260 = { 0f, 0f, 0f };
	int iLocal_1263 = 0;
	int iLocal_1264 = 0;
	vector3 vLocal_1265 = { 0f, 0f, 0f };
	float fLocal_1268 = 0f;
	vector3 vLocal_1269 = { 0f, 0f, 0f };
	int iLocal_1272 = 0;
	vector3 vLocal_1273 = { 0f, 0f, 0f };
	vector3 vLocal_1276 = { 0f, 0f, 0f };
	vector3 vLocal_1279 = { 0f, 0f, 0f };
	int iLocal_1282 = 0;
	int iLocal_1283 = 0;
	var uLocal_1284 = 0;
	bool bLocal_1285 = false;
	var uLocal_1286 = 24;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	struct<21> Local_1414[1];
	struct<21> Local_1436[1];
	struct<17> Local_1458[1];
	struct<17> Local_1476[1];
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	float fLocal_1497 = 0f;
	struct<6> Local_1498 = { 0, 0, 0, 0, 0, 1065353216 } ;
	var uLocal_1504 = 1119092736;
	var uLocal_1505 = 1092616192;
	var uLocal_1506 = 1085276160;
	struct<4> Local_1507 = { 0, 0, 0, 0 } ;
	var uLocal_1511 = 0;
	var uLocal_1512 = 1065353216;
	var uLocal_1513 = 1119092736;
	var uLocal_1514 = 1092616192;
	var uLocal_1515 = 1085276160;
	var uLocal_1516 = 0;
	char* sLocal_1517 = NULL;
	char* sLocal_1518 = NULL;
	char* sLocal_1519 = NULL;
	struct<21> Local_1520 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1 } ;
	var uLocal_1541 = 3;
	var uLocal_1542 = 3;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 1;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 11;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 1097859072;
	var uLocal_1692 = 1101004800;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 4;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	int iLocal_1787 = 0;
	int iLocal_1788 = 0;
	vector3 vLocal_1789 = { 0f, 0f, 0f };
	vector3 vLocal_1792 = { 0f, 0f, 0f };
	int iLocal_1795 = 0;
	int iLocal_1796 = 0;
	int iLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 2;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 2;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 10;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 2;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 3;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 1101004800;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = 0;
	var uScriptParam_74 = 0;
	var uScriptParam_75 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_40 = joaat("G_M_M_UNIRANCHERS_01");
	iLocal_41 = joaat("A_M_M_SMHTHUG_01");
	iLocal_42 = joaat("A_C_HORSE_MUSTANG_WILDBAY");
	iLocal_43 = joaat("A_C_HORSE_MORGAN_BAY");
	iLocal_44 = joaat("P_LANTERN07X");
	iLocal_45 = joaat("P_MONEYSTACK01X");
	iLocal_46 = joaat("P_CS_BILLSINGLE01X");
	StringCopy(&cLocal_62, "", 24);
	iLocal_82 = 2;
	iLocal_93 = 4;
	vLocal_921 = { 1399.887f, -846.9807f, 65.6473f };
	vLocal_926 = { 1378.87f, -875.46f, 69.99f };
	vLocal_929 = { 1397.84f, -847.72f, 64.85f };
	vLocal_932 = { 1857.32f, -1832.19f, 42.18f };
	vLocal_935 = { 1403f, -910.73f, 63.53f };
	fLocal_938 = 98.12f;
	vLocal_939 = { 1399.295f, -846.8665f, 64.8179f };
	fLocal_942 = 288.6509f;
	vLocal_943 = { 1399.012f, -847.7871f, 64.8039f };
	fLocal_946 = 340.2229f;
	vLocal_947 = { 1393.01f, -846.01f, 65.81f };
	fLocal_950 = 282.7032f;
	vLocal_951 = { 1387.27f, -849.95f, 66.73f };
	fLocal_954 = 282.7032f;
	vLocal_955 = { 1400.14f, -850.05f, 64.71f };
	vLocal_958 = { 1397.51f, -844.41f, 64.99f };
	vLocal_961 = { 1373.44f, -874.52f, 69.13f };
	vLocal_964 = { 1373.46f, -873.52f, 69.13f };
	fLocal_967 = 286.7116f;
	vLocal_968 = { 1425.22f, -839.53f, 59.08f };
	vLocal_971 = { 719.6435f, -858.9298f, 48.65621f };
	vLocal_974 = { 0f, 0f, -70.94415f };
	vLocal_977 = { 24.56482f, 18.743f, 7.132294f };
	vLocal_980 = { 1398.25f, -888.98f, 63.9f };
	vLocal_983 = { 1392.674f, -868.047f, 64.4684f };
	vLocal_986 = { 1391.708f, -868.0104f, 65.48524f };
	vLocal_989 = { 0f, 0f, 13.04256f };
	vLocal_992 = { 4.34111f, 2.618265f, 2.943542f };
	vLocal_995 = { 1394.34f, -854.2f, 65.07f };
	fLocal_998 = 316.0905f;
	vLocal_999 = { 1395.63f, -852.29f, 64.98f };
	vLocal_1002 = { 1398.98f, -858.86f, 63.72f };
	vLocal_1005 = { 1385.41f, -854.97f, 66.45f };
	vLocal_1008 = { 1354.41f, -859.35f, 70.87f };
	vLocal_1011 = { 889.96f, -810.82f, 67.4f };
	vLocal_1017 = { 736.59f, -833.44f, 51.33f };
	vLocal_1020 = { 724.21f, -832.63f, 48.97f };
	vLocal_1023 = { 719.87f, -836.3f, 48.83f };
	vLocal_1026 = { 717.69f, -835.21f, 48.88f };
	fLocal_1029 = 330.3314f;
	fLocal_1030 = 330.3314f;
	vLocal_1031 = { 721.58f, -838.45f, 48.7f };
	vLocal_1034 = { 716f, -835.79f, 48.81f };
	fLocal_1037 = 24.3843f;
	fLocal_1038 = 330.3314f;
	vLocal_1039 = { 722.12f, -831.85f, 48.96f };
	iLocal_1158 = -323223492;
	iLocal_1159 = -2069025776;
	iLocal_1160 = -653405011;
	iLocal_1161 = -422612944;
	vLocal_1257 = { 1400.466f, -844.712f, 66.9136f };
	vLocal_1260 = { -20.1661f, 0f, 160.238f };
	vLocal_1265 = { 1398.07f, -869.14f, 63.41f };
	fLocal_1268 = 7.5944f;
	vLocal_1269 = { 1398.207f, -871.3127f, 63.4416f };
	vLocal_1273 = { 1490.433f, -1004.383f, 50.79774f };
	vLocal_1276 = { 0f, 0f, 0f };
	vLocal_1279 = { 28.1504f, 15.1433f, 9.21536f };
	iLocal_1282 = 31;
	sLocal_1517 = "";
	sLocal_1518 = "rust_uncle_moveup";
	sLocal_1519 = "rust_herd_haven_aigather";
	vLocal_1789 = { 721.0672f, -832.7122f, 48.5023f };
	vLocal_1792 = { 721.1525f, -832.8378f, 48.5023f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(&uScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2(&uScriptParam_0, &uLocal_1799);
	while (!func_3(&uScriptParam_0))
	{
		__LIB_1__::func_598(&uScriptParam_0, &uLocal_1799, __LIB_0__::func_749());
		BUILTIN::WAIT(0);
	}
	func_1(&uScriptParam_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	bVar0 = CAM::_0x139EFB0A71DD9011();
	bVar1 = CAM::_0x7CE9DC58E3E4755F();
	if (uParam0->f_14 != 1 && uParam0->f_14 != 7)
	{
		if (!bVar0 || bVar1)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
		}
	}
	__LIB_13__::func_370();
	func_7(uParam0);
	if (__LIB_0__::func_750(&(uParam0->f_9), 1))
	{
		__LIB_0__::func_745(uParam0->f_2);
	}
	iVar2 = 0;
	while (iVar2 < 27)
	{
		if (__LIB_1__::func_22(iVar2))
		{
			func_11(uParam0, iVar2);
		}
		iVar2++;
	}
	__LIB_1__::func_714();
	if (__LIB_1__::func_44(uParam0->f_5))
	{
		switch (uParam0->f_14)
		{
			case 0:
			case 2:
				__LIB_1__::func_645(uParam0->f_5);
				__LIB_1__::func_611(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
			case 7:
				__LIB_1__::func_559(uParam0->f_5, 0, 2);
				__LIB_0__::func_297();
				__LIB_1__::func_140();
				__LIB_1__::func_639(uParam0, 0, 1);
				Global_1391438.f_3 = -1;
				iVar3 = 0;
				while (iVar3 < 10)
				{
					if (Global_40.f_6563.f_274[iVar3 /*20*/].f_1 == uParam0->f_1)
					{
						Global_40.f_6563.f_274[iVar3 /*20*/].f_18 += 50;
					}
					iVar3++;
				}
				break;
			case 1:
				if (!__LIB_0__::func_13(32768))
				{
					func_21(uParam0->f_5, 1, 1, Global_1879514.f_11, 1);
				}
				else
				{
					__LIB_1__::func_809(uParam0->f_5, Global_1879514.f_11);
				}
				__LIB_0__::func_863();
				__LIB_0__::func_297();
				__LIB_1__::func_140();
				Global_1391438.f_3 = -1;
				if (uParam0->f_1 == joaat("HAI_BANK_ROBBERY_01") && UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("CABR01")))
				{
					if (STATS::CHAL_MISSION_IS_GOAL_COMPLETE(joaat("CABR01"), joaat("TIMELIMIT_5_45")))
					{
						UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, joaat("CABR01"), joaat("MISS_CHALL_TIME_5_45"), "MISS_CHALL_TIME_5_45", true, true, false);
					}
					if (STATS::CHAL_MISSION_IS_GOAL_COMPLETE(joaat("CABR01"), joaat("CABR01_CHASENODAMAGE")))
					{
						UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, joaat("CABR01"), joaat("CABR01_CHALL_1"), "CABR01_CHALL_1", true, true, false);
					}
					switch (STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(joaat("CABR01")))
					{
						case 0:
							sVar4 = "TOAST_MEDAL_BRONZE";
							break;
						case 1:
							sVar4 = "TOAST_MEDAL_SILVER";
							break;
						case 2:
							sVar4 = "TOAST_MEDAL_GOLD";
							break;
						default:
							sVar4 = "";
							break;
					}
					if (Global_1879514.f_11)
					{
						sVar4 = "TOAST_MEDAL_BRONZE";
					}
					UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, joaat("CABR01"), MISC::GET_HASH_KEY(sVar4), joaat("HUD_TOASTS"));
					MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), __LIB_1__::func_753());
					UILOG::_UILOG_MARK_MISSION_COMPLETED(joaat("CABR01"));
					UILOG::_0xA31013798FADCADC(3, joaat("CABR01"), 1);
				}
				else
				{
					__LIB_1__::func_639(uParam0, 1, 0);
				}
				if (__LIB_0__::func_13(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					func_25();
					__LIB_1__::func_141(0);
				}
				break;
			case 3:
				__LIB_1__::func_645(uParam0->f_5);
				StringCopy(&(uParam0->f_15), "PLAYER_DEAD", 24);
				__LIB_1__::func_611(uParam0->f_5, 2, &(uParam0->f_15), 0, 0, 0);
				break;
			case 6:
				__LIB_1__::func_645(uParam0->f_5);
				StringCopy(&(uParam0->f_15), "PLAYER_ARRESTED", 24);
				__LIB_1__::func_611(uParam0->f_5, 6, &(uParam0->f_15), 0, 0, 0);
				break;
			case 4:
				__LIB_1__::func_645(uParam0->f_5);
				MemCopy(&(uParam0->f_15), {__LIB_0__::func_864(uParam0->f_2)}, 3);
				__LIB_1__::func_611(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
			case 5:
				__LIB_1__::func_645(uParam0->f_5);
				MemCopy(&(uParam0->f_15), {__LIB_0__::func_865(uParam0->f_2)}, 3);
				__LIB_1__::func_611(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
		}
	}
	MISC::_0x1096603B519C905F("");
	if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_43));
	}
	if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
	}
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
	}
	__LIB_0__::func_698(64);
	if (!__LIB_1__::func_628(Global_36))
	{
		__LIB_0__::func_267(1);
		__LIB_1__::func_142(0);
	}
	__LIB_0__::func_8(&Global_1935630, 256);
	func_35(uParam0);
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

int func_2(var uParam0, var uParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_68)))
	{
		return 0;
	}
	if (func_36(uParam1, &(uParam0->f_68), 3, -1, 0, 0) && __LIB_0__::func_751(uParam1))
	{
		uParam1->f_281 = 1;
		return 1;
	}
	return 0;
}

bool func_3(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 187, true);
	}
	if (uParam0->f_13 > 1 || (!__LIB_0__::func_272(Global_35, 0) && uParam0->f_13 > 0))
	{
		if ((__LIB_0__::func_752(uParam0->f_14) || func_39(uParam0)) || __LIB_1__::func_23(uParam0))
		{
			if (!CAM::_0x139EFB0A71DD9011())
			{
				func_41(1, 1);
				__LIB_1__::func_687(&uLocal_1799);
			}
			if (!__LIB_0__::func_752(uParam0->f_14) || CAM::_0x7CE9DC58E3E4755F())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				return true;
			}
		}
		if (func_39(uParam0) || __LIB_1__::func_23(uParam0))
		{
			__LIB_0__::func_7(&(Global_1347343.f_11), 262144);
		}
	}
	if (uParam0->f_13 > 1)
	{
		__LIB_0__::func_11(uParam0);
		func_45(uParam0);
	}
	switch (uParam0->f_13)
	{
		case 0:
			if (!uParam0->f_12)
			{
				uParam0->f_12 = __LIB_1__::func_143(uParam0);
				return false;
			}
			if (__LIB_0__::func_750(&(Global_1391438.f_5), 128) || __LIB_0__::func_750(&(uParam0->f_9), 896))
			{
				__LIB_0__::func_63(&(Global_1391438.f_5), 128, 0);
				uParam0->f_13 = 1;
			}
			break;
		case 1:
			if (func_49(uParam0))
			{
				COMPANION::_0xA079FF7CFB9AC8BD(__LIB_0__::func_110(), 4);
				__LIB_1__::func_639(uParam0, 0, 0);
				uParam0->f_13 = 4;
			}
			break;
		case 4:
			if (func_51(uParam0))
			{
				iVar0 = __LIB_0__::func_753(*uParam0);
				Global_40.f_7039[__LIB_0__::func_754(iVar0, 1) /*2*/] = 1;
				uParam0->f_14 = 1;
				uParam0->f_13 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_7(var uParam0)
{
	int iVar0;
	func_61();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_96.f_2[iVar0]))
		{
			AUDIO::_0xEB4D592620B8C209(Local_96.f_2[iVar0]);
		}
		iVar0++;
	}
	__LIB_13__::func_991(&Local_96, 0);
	__LIB_0__::func_745(4);
	__LIB_1__::func_721(7);
	if (__LIB_0__::func_272(iLocal_22, 0))
	{
		PED::_0x58F7DB5BD8FA2288(iLocal_22);
		if (__LIB_0__::func_866(4, 0))
		{
			__LIB_1__::func_462(4);
		}
	}
	__LIB_2__::func_788(&iLocal_25, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_27, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_28, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_29, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_30, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_33);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_34);
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RUST_RNCH");
	AUDIO::STOP_PED_SPEAKING(Global_35, false);
	AUDIO::_0x660A8F876DF1D4F8(14);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1168);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1169);
	if (PED::_0x91A5F9CBEBB9D936(uLocal_1284))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1284, false);
		PATHFIND::_0xD17672447692478E(iLocal_914, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1167))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_1167);
		POPULATION::_0xA1CFB35069D23C23(iLocal_1167);
		__LIB_0__::func_172(iLocal_1167);
	}
	__LIB_0__::func_172(iLocal_897);
	__LIB_0__::func_172(iLocal_898);
	__LIB_0__::func_172(iLocal_899);
	__LIB_0__::func_172(iLocal_900);
	__LIB_0__::func_172(iLocal_901);
	__LIB_0__::func_172(iLocal_902);
	__LIB_0__::func_172(iLocal_903);
	__LIB_0__::func_172(iLocal_904);
	__LIB_0__::func_172(iLocal_905);
	__LIB_0__::func_172(iLocal_911);
	__LIB_0__::func_172(iLocal_912);
	__LIB_0__::func_172(iLocal_913);
	__LIB_0__::func_172(iLocal_914);
	__LIB_0__::func_172(iLocal_1272);
	__LIB_0__::func_172(iLocal_908);
	__LIB_0__::func_172(iLocal_906);
	__LIB_0__::func_172(iLocal_915);
	__LIB_0__::func_172(iLocal_916);
	__LIB_0__::func_172(iLocal_910);
	__LIB_0__::func_172(iLocal_918);
	if (__LIB_1__::func_565(&uLocal_1516))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_1516, 1);
	}
	if (__LIB_2__::func_763(760, 0))
	{
		__LIB_2__::func_753(760, 0, 1, 0, 0);
	}
	if (__LIB_2__::func_763(642, 0))
	{
		__LIB_2__::func_753(642, 0, 1, 0, 0);
	}
	if (__LIB_2__::func_763(643, 0))
	{
		__LIB_2__::func_753(643, 0, 1, 0, 0);
	}
	func_71();
	if (__LIB_1__::func_22(4))
	{
		__LIB_1__::func_640(4);
		__LIB_11__::func_616(4, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (__LIB_0__::func_272(iLocal_23, 0) && __LIB_0__::func_211(4))
	{
		__LIB_1__::func_463(iLocal_23, 4, 1, 0, 0);
	}
	if (__LIB_0__::func_272(iLocal_24, 0))
	{
		ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(iLocal_24, true);
		__LIB_2__::func_145(iLocal_24, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1795))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_1795);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1796))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_1796);
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_1283))
	{
		if (iLocal_55 != 0)
		{
			if (!GRAPHICS::_0x113857D66A9CABE6(iLocal_55))
			{
				GRAPHICS::_0xBFCB17895BB99E4E(iLocal_55, 1);
			}
		}
		INTERIOR::UNPIN_INTERIOR(iLocal_1283);
	}
	if (GRAPHICS::_0x113857D66A9CABE6(iLocal_56))
	{
		GRAPHICS::_0xBFCB17895BB99E4E(iLocal_56, 1);
	}
	if (__LIB_0__::func_139(iLocal_84))
	{
		__LIB_1__::func_281(&iLocal_84, 1, 1);
	}
	func_79();
	func_80();
}

void func_11(var uParam0, int iParam1)
{
	if (uParam0->f_8 > 0f && uParam0->f_14 == 1)
	{
		__LIB_11__::func_616(iParam1, 0, 0, 0, uParam0->f_8, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		AUDIO::STOP_PED_SPEAKING(__LIB_0__::func_271(iParam1), false);
		__LIB_11__::func_616(iParam1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
}

void func_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_746(iParam0) == 4)
	{
		__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam3)
			{
				__LIB_1__::func_242(iParam0, 6);
			}
			else
			{
				__LIB_1__::func_242(iParam0, 5);
			}
			__LIB_1__::func_470(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		__LIB_0__::func_267(1);
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	bVar1 = __LIB_0__::func_2() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		__LIB_1__::func_421(0, 2);
		if (!bVar1 && bParam1)
		{
			__LIB_11__::func_422();
		}
	}
	else
	{
		__LIB_1__::func_142(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		__LIB_0__::func_870(iParam0);
	}
	else
	{
		Var2 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!__LIB_0__::func_13(32768))
		{
			Var4 = { __LIB_0__::func_14(joaat("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && __LIB_0__::func_291(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (__LIB_0__::func_76(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((__LIB_0__::func_76(iParam0) != 95 && __LIB_0__::func_76(iParam0) != 82) && !__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		__LIB_1__::func_641(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		__LIB_1__::func_642(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		iVar9 = __LIB_1__::func_145(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_1__::func_629(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = __LIB_0__::func_308(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_300(1);
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				__LIB_0__::func_747(45, 0, 1);
				break;
			case 8:
				iVar10 = __LIB_0__::func_310(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (__LIB_0__::func_311(__LIB_0__::func_76(iParam0)))
				{
					__LIB_1__::func_715(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 2:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 6:
				__LIB_0__::func_747(__LIB_0__::func_312(__LIB_0__::func_872(iParam0)), 0, 1);
				break;
			case 5:
				__LIB_0__::func_747(120, 0, 1);
				break;
		}
	}
	__LIB_1__::func_144(iParam0, 1);
	__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
	__LIB_1__::func_470(iParam0);
	if ((!__LIB_0__::func_291(iParam0) == 0 && bParam1) && __LIB_0__::func_2() == -1)
	{
		iVar12 = __LIB_1__::func_24(iParam0);
		if (iVar12 != -1)
		{
			__LIB_0__::func_867(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = __LIB_1__::func_194();
			if (iVar12 != -1)
			{
				__LIB_0__::func_867(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (__LIB_0__::func_76(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
			case 8:
				if (__LIB_0__::func_76(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
		}
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		if (bParam3)
		{
			__LIB_1__::func_242(iParam0, 6);
		}
		else
		{
			__LIB_1__::func_242(iParam0, 5);
		}
		__LIB_1__::func_470(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						__LIB_0__::func_873();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_146(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_146(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_146(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_146(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_146(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_146(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_146(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_146(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_146(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_146(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_146(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_146(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_146(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_148();
						func_149(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						__LIB_1__::func_101();
						__LIB_0__::func_874();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(__LIB_1__::func_464(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_146(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							__LIB_1__::func_240(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							__LIB_1__::func_240(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						__LIB_1__::func_630(304805134, 1, 1);
						if (!__LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_21(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[21 /*49*/].f_3)), iVar14);
						}
						break;
					case 20:
						__LIB_0__::func_875();
						break;
					case 26:
						__LIB_0__::func_876();
						break;
					case 17:
						__LIB_1__::func_810(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!__LIB_0__::func_878(joaat("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = __LIB_0__::func_23();
							__LIB_1__::func_446(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							__LIB_1__::func_612(joaat("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						__LIB_0__::func_879();
						break;
					case 37:
						__LIB_0__::func_880();
						if (__LIB_0__::func_26())
						{
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), iVar14);
						}
						break;
					case 38:
						__LIB_0__::func_881();
						break;
					case 43:
						__LIB_0__::func_882();
						break;
					case 44:
						if (!__LIB_1__::func_25(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_21(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[82 /*49*/].f_3)), iVar14);
						}
						if (!__LIB_1__::func_25(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_21(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[83 /*49*/].f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						__LIB_0__::func_883();
						break;
					case 59:
						__LIB_0__::func_884();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						__LIB_0__::func_885();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						__LIB_0__::func_886();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SURV_ROOT"), true);
							__LIB_1__::func_240(451, 0);
						}
						if (!__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_05")))
						{
							if (__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_04")))
							{
								iVar16 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (__LIB_0__::func_315(4))
						{
							if (!__LIB_1__::func_707(joaat("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_146(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_146(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_1__::func_146(89200);
						__LIB_1__::func_146(2300);
						__LIB_1__::func_146(2300);
						break;
					case 68:
						__LIB_0__::func_887();
						break;
					case 76:
						if (Global_1425247.f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[108 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[69 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[70 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[7 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[22 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[23 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[65 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[7 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[8 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[36 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[48 /*74*/].f_8)), iVar14);
						__LIB_0__::func_888();
						__LIB_1__::func_146(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_1__::func_146(-6000);
						}
						break;
					case 70:
						__LIB_1__::func_146(23400);
						__LIB_1__::func_146(1900);
						__LIB_1__::func_146(-15000);
						break;
					case 71:
						__LIB_1__::func_146(-5500);
						break;
				}
				break;
			case 8:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_BEAUG"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444 /* GXTEntry: "Penelope Braithwaite" */);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806 /* GXTEntry: "Scott" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455 /* GXTEntry: "Iain" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411 /* GXTEntry: "Mrs Calhoon" */);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DORKINS"));
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426 /* GXTEntry: "Sister Calderón" */);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876 /* GXTEntry: "Calloway" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105 /* GXTEntry: "Emmet Granger" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898 /* GXTEntry: "Flaco Hernández" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548 /* GXTEntry: "Billy Midnight" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082 /* GXTEntry: "Black Belle" */);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767 /* GXTEntry: "Slim Grant" */);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465 /* GXTEntry: "Mr. Black" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187 /* GXTEntry: "Mr. White" */);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALDEN_CARRUTHERS"));
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DOCTOR"));
						break;
					case 58:
						__LIB_0__::func_889();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171 /* GXTEntry: "Lilly Millet" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WROBEL"));
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						__LIB_0__::func_890();
						break;
					case 66:
						__LIB_0__::func_891();
						__LIB_1__::func_599();
						break;
					case 67:
						if (!__LIB_0__::func_892(6))
						{
							__LIB_0__::func_893(6);
						}
						if (!__LIB_0__::func_892(3))
						{
							__LIB_0__::func_893(3);
						}
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_PISTOL_M1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_RINGMASTER"));
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_TIGERHANDLER"));
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833 /* GXTEntry: "Mary Linton" */);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MASON"));
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALGIE_DAVISON"));
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131 /* GXTEntry: "Bertram" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MISS_MARJORIE"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117 /* GXTEntry: "Magnifico" */);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WARVET"));
						break;
					case 9:
						if (__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1))
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_1__::func_146(46500);
						}
						break;
				}
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						switch (__LIB_0__::func_872(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		__LIB_0__::func_894(iParam0);
		func_186();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						__LIB_1__::func_777(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						__LIB_1__::func_777(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						__LIB_1__::func_777(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						__LIB_1__::func_777(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						__LIB_1__::func_777(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						__LIB_1__::func_777(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						__LIB_1__::func_777(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						__LIB_1__::func_777(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						__LIB_1__::func_777(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						__LIB_1__::func_777(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_146(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						__LIB_1__::func_777(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						__LIB_1__::func_777(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						__LIB_1__::func_777(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							__LIB_1__::func_777(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							__LIB_1__::func_777(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 536870912))
				{
					__LIB_0__::func_896(11, 1);
				}
				switch (__LIB_0__::func_76(iParam0))
				{
					case 109:
						__LIB_1__::func_777(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						__LIB_1__::func_777(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						__LIB_1__::func_777(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						__LIB_1__::func_777(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						__LIB_1__::func_777(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_1__::func_777(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!__LIB_0__::func_291(iParam0) == 0)
			{
				if (__LIB_0__::func_299(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						__LIB_1__::func_790(__LIB_1__::func_613(Global_1879514.f_1));
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			__LIB_0__::func_703(bParam2, iVar20);
		}
	}
	__LIB_0__::func_301(1);
	if ((bVar13 || __LIB_1__::func_195()) && (__LIB_0__::func_700(iParam0) == 1 || __LIB_0__::func_700(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

void func_25()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { func_200(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_35(var uParam0)
{
	*uParam0 = 234527101;
	uParam0->f_1 = -589165916;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_13 = 0;
	StringCopy(&(uParam0->f_18), "", 64);
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_37 = { 0f, 0f, 0f };
	uParam0->f_41 = 20f;
	uParam0->f_43 = 0;
	StringCopy(&(uParam0->f_52), "", 64);
	StringCopy(&(uParam0->f_60), "", 64);
	uParam0->f_12 = 0;
	if (__LIB_0__::func_139(uParam0->f_44))
	{
		__LIB_1__::func_281(&(uParam0->f_44), 1, 1);
	}
	if (__LIB_2__::func_618(&(uParam0->f_45)))
	{
		__LIB_2__::func_608(&(uParam0->f_45));
	}
}

bool func_36(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	char cVar2[128];
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	if (!bParam4 && !uParam0->f_270)
	{
		if (!func_211(uParam0, sParam1, iParam2, bParam4, bParam5))
		{
			return false;
		}
	}
	if (!uParam0->f_271)
	{
		iVar20 = uParam0->f_278;
		while (iVar20 <= (uParam0->f_277 - 1))
		{
			StringCopy(&cVar2, "", 64);
			uParam0->f_264.f_1 = 0;
			uParam0->f_264.f_3 = iVar20;
			if (__LIB_0__::func_764(uParam0, 0))
			{
				if (__LIB_1__::func_389(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (__LIB_0__::func_765(uParam0, 1, &iVar0))
					{
					}
					if (__LIB_0__::func_766(uParam0, 3, &cVar2))
					{
					}
					if (__LIB_0__::func_765(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (__LIB_0__::func_765(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (__LIB_0__::func_765(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (__LIB_0__::func_765(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (__LIB_0__::func_765(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 2 && uParam0->f_273 < 2)
						{
							if (!__LIB_1__::func_321(uParam0, &cVar2, uParam0->f_273))
							{
								*(uParam0[uParam0->f_273 /*16*/]) = { cVar2 };
								__LIB_0__::func_324(uParam0[uParam0->f_273 /*16*/], 1048576);
								uParam0->f_273++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 2 && uParam0->f_274 < 2)
						{
							uParam0->f_33[uParam0->f_274 /*16*/] = { cVar2 };
							__LIB_0__::func_324(&(uParam0->f_33[uParam0->f_274 /*16*/]), 1048576);
							uParam0->f_274++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 10 && uParam0->f_275 < 10)
						{
							uParam0->f_66[uParam0->f_275 /*16*/] = { cVar2 };
							__LIB_0__::func_324(&(uParam0->f_66[uParam0->f_275 /*16*/]), 1048576);
							if (!bVar19 && __LIB_0__::func_755(&cVar2, 4))
							{
								AUDIO::PREPARE_MUSIC_EVENT(&(uParam0->f_66[uParam0->f_275 /*16*/]));
								bVar19 = true;
							}
							uParam0->f_275++;
						}
					}
					else if (iVar0 < 2 && uParam0->f_276 < 2)
					{
						if (!__LIB_1__::func_321(&(uParam0->f_227), &cVar2, uParam0->f_276))
						{
							uParam0->f_227[uParam0->f_276 /*16*/] = { cVar2 };
							__LIB_0__::func_324(&(uParam0->f_227[uParam0->f_276 /*16*/]), 1048576);
							uParam0->f_276++;
						}
					}
				}
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_278 = iVar20 + 1;
				uParam0->f_269 = 0;
				return false;
			}
			iVar20++;
		}
		uParam0->f_271 = 1;
	}
	if (!__LIB_0__::func_751(uParam0) && uParam0->f_279 > 0)
	{
		iVar20 = uParam0->f_280;
		while (iVar20 <= (uParam0->f_279 - 1))
		{
			uParam0->f_264.f_1 = 0;
			uParam0->f_264.f_3 = iVar20;
			iVar22 = 0;
			if (__LIB_0__::func_764(uParam0, 12))
			{
				if (__LIB_0__::func_765(uParam0, 13, &iVar0))
				{
				}
				if (__LIB_0__::func_765(uParam0, 14, &iVar1))
				{
					iVar22 = iVar1;
				}
			}
			if (STREAMING::IS_MODEL_VALID(iVar22) && iVar22 != 0)
			{
				uParam0->f_260[iVar0] = iVar22;
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_280 = iVar20 + 1;
				uParam0->f_269 = 0;
				return false;
			}
			iVar20++;
		}
	}
	uParam0->f_269 = 1;
	uParam0->f_278 = 0;
	uParam0->f_280 = 0;
	uParam0->f_271 = 0;
	uParam0->f_272 = 1;
	if (!bParam4)
	{
		__LIB_0__::func_767(uParam0);
	}
	return true;
}

bool func_39(var uParam0)
{
	if (iLocal_14 >= 8 && __LIB_11__::func_468(&Local_96) <= 15)
	{
		uParam0->f_14 = 2;
		StringCopy(&(uParam0->f_15), "CURU_FAIL_HRDDEAD", 24);
		AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_22))
	{
		uParam0->f_14 = 4;
		StringCopy(&(uParam0->f_15), "CURU_FAIL_UNCDEAD", 24);
		AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
		return true;
	}
	if (__LIB_6__::func_703(iLocal_24))
	{
		uParam0->f_14 = 2;
		StringCopy(&(uParam0->f_15), "CURU_FAIL_HRSDEAD", 24);
		AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
		return true;
	}
	if (__LIB_6__::func_703(iLocal_23))
	{
		uParam0->f_14 = 2;
		StringCopy(&(uParam0->f_15), "CURU_FAIL_UHRSDEAD", 24);
		AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
		return true;
	}
	if (iLocal_14 <= 9)
	{
		if (__LIB_0__::func_665(Global_35, iLocal_22, 1, 1) >= 100f)
		{
			uParam0->f_14 = 5;
			StringCopy(&(uParam0->f_15), "CURU_FAIL_UNCLEFT", 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
			return true;
		}
	}
	if (iLocal_14 >= 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31) && !ENTITY::IS_ENTITY_DEAD(iLocal_31))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_31, Global_35, 1, 1))
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), "CURU_FAIL_CCAGGRO", 24);
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
				return true;
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_31) && ENTITY::IS_ENTITY_DEAD(iLocal_31))
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), "CURU_FAIL_CCAGGRO", 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
			return true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32) && !ENTITY::IS_ENTITY_DEAD(iLocal_32))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_32, Global_35, 1, 1))
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), "CURU_FAIL_CCAGGRO", 24);
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
				return true;
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_32) && ENTITY::IS_ENTITY_DEAD(iLocal_32))
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), "CURU_FAIL_CCAGGRO", 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
			return true;
		}
		if (!__LIB_0__::func_138(Local_96.f_613, 0f, 0f, 0f))
		{
			if (__LIB_0__::func_94(Global_35, Local_96.f_613, 0) > 200f)
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), "CURU_FAIL_DIST", 24);
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
				return true;
			}
		}
		if (iLocal_14 == 10)
		{
			if (__LIB_0__::func_665(Global_35, iLocal_24, 1, 1) > 100f)
			{
				uParam0->f_14 = 2;
				StringCopy(&(uParam0->f_15), "CURU_FAIL_HRSA", 24);
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
				return true;
			}
		}
		if (iLocal_81 == 4)
		{
			uParam0->f_14 = 2;
			StringCopy(&(uParam0->f_15), "CURU_FAIL_CCAGGRO", 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FAIL");
			return true;
		}
	}
	return false;
}

void func_41(bool bParam0, bool bParam1)
{
	if (((WEAPON::IS_WEAPON_VALID(Global_1935630.f_44) && WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44)) && PED::GET_PED_RESET_FLAG(Global_35, 0)) && CAM::_0xA24C1D341C6E0D53(1, 1, 1))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && PED::GET_PED_RESET_FLAG(Global_35, 0))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630.f_44 == joaat("WEAPON_KIT_CAMERA"))
	{
		func_224(0);
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		return;
	}
	if (bParam0)
	{
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
	}
	if (bParam1)
	{
		CAM::_TRIGGER_MISSION_FAILED_CAM();
	}
}

void func_45(var uParam0)
{
	vector3 vVar0[24];
	vector3 vVar3[24];
	vector3 vVar6[24];
	vector3 vVar9[24];
	vector3 vVar12[24];
	vector3 vVar15[24];
	int iVar18;
	int iVar19;
	PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), iLocal_24);
	switch (iLocal_14)
	{
		case 0:
			func_226(uParam0);
			func_227(0);
			func_228();
			if (bLocal_49)
			{
				if (!func_229(64))
				{
					if (__LIB_1__::func_422("OBJ_CURU_MOUNT", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
					{
						func_231(64);
					}
				}
			}
			if (!func_232(16))
			{
				if (__LIB_0__::func_272(iLocal_24, 0))
				{
					StringCopy(&cVar0, "CAUNC_MOUNTUP", 24);
					if (__LIB_1__::func_104(&uLocal_1286, cVar0, 0, -1, 0, 0))
					{
						fLocal_1497 = __LIB_0__::func_665(Global_35, iLocal_24, 1, 1);
						__LIB_1__::func_718(7);
						__LIB_1__::func_643();
						func_236(16);
						func_237("OBJ_CURU_MOUNT");
						__LIB_5__::func_107(&uLocal_1494);
					}
				}
			}
			else if (!func_229(64))
			{
				StringCopy(&cVar3, "CAUNC_MOUNTUP", 24);
				if (!AUDIO::_0x1ECC76792F661CF5(&cVar3))
				{
					if (__LIB_5__::func_53(&uLocal_1494) > 6f)
					{
						if (__LIB_0__::func_665(Global_35, iLocal_24, 1, 1) >= (fLocal_1497 + 1f) || PED::IS_PED_STOPPED(Global_35))
						{
							if (__LIB_1__::func_422("OBJ_CURU_MOUNT", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
							{
								func_231(64);
							}
						}
						else if (__LIB_0__::func_665(Global_35, iLocal_24, 1, 1) < fLocal_1497)
						{
							fLocal_1497 = __LIB_0__::func_665(Global_35, iLocal_24, 1, 1);
						}
					}
					else if (!__LIB_2__::func_618(&uLocal_1494))
					{
					}
				}
				else
				{
					__LIB_5__::func_107(&uLocal_1494);
				}
				if (__LIB_5__::func_352("OBJ_CURU_MOUNT"))
				{
					func_231(64);
				}
			}
			if (!bLocal_47)
			{
				__LIB_19__::func_119(uParam0, func_241(0), func_241(1), 0, 1);
				bLocal_47 = true;
			}
			if (__LIB_0__::func_394(Global_35, iLocal_24, 1))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_START");
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_1__::func_721(7);
				__LIB_0__::func_900(4);
				AUDIO::_0x0D7FD6A55FD63AEF(14, 3, 1);
				iLocal_14 = 1;
			}
			break;
		case 1:
			func_227(0);
			func_245();
			func_246();
			if (!__LIB_0__::func_51(&(Global_1360165[4 /*1157*/].f_12), 8))
			{
				__LIB_0__::func_900(4);
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1272))
			{
				iLocal_1272 = VOLUME::_CREATE_VOLUME_BOX(vLocal_1273, vLocal_1276, vLocal_1279);
			}
			if (!func_232(8))
			{
				if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_22, true))
				{
					StringCopy(&cVar6, "CAUNC_RIDESTART", 24);
					if (__LIB_1__::func_104(&uLocal_1286, cVar6, 0, -1, 0, 0))
					{
						func_236(8);
						func_237("OBJ_CURU_TRAVEL");
						__LIB_1__::func_721(7);
						__LIB_5__::func_107(&uLocal_1494);
						fLocal_1497 = __LIB_0__::func_94(Global_35, uParam0->f_37, 1);
					}
				}
			}
			else
			{
				if (!func_229(1))
				{
					if (__LIB_5__::func_53(&uLocal_1494) > 10f)
					{
						if (__LIB_0__::func_94(Global_35, uParam0->f_37, 1) >= (fLocal_1497 + 30f))
						{
							__LIB_1__::func_422("OBJ_CURU_TRAVEL", 7500, 0, 1, 0, 0, -1, -1, 0);
							func_231(1);
						}
						else if (__LIB_0__::func_94(Global_35, uParam0->f_37, 1) < fLocal_1497)
						{
							fLocal_1497 = __LIB_0__::func_94(Global_35, uParam0->f_37, 1);
						}
					}
					if (__LIB_5__::func_352("OBJ_CURU_TRAVEL"))
					{
						func_231(1);
					}
				}
				func_226(uParam0);
			}
			if (__LIB_0__::func_94(Global_35, uParam0->f_37, 1) < 250f)
			{
				if (func_248() && func_249())
				{
				}
			}
			if (__LIB_0__::func_94(Global_35, uParam0->f_37, 1) < 150f)
			{
				if (((((func_250(0) && func_251()) && func_252()) && func_253()) && func_254()) && func_255())
				{
					func_256();
				}
			}
			if (iLocal_74 == 6)
			{
				__LIB_19__::func_119(uParam0, func_241(1), func_241(2), 1, 2);
				__LIB_0__::func_82(1, 1, 0);
				AUDIO::_0x660A8F876DF1D4F8(14);
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_ARRIVE");
				iLocal_14 = 2;
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(joaat("A_C_COW"), false);
			func_258();
			if (((((func_250(0) && func_251()) && func_252()) && func_253()) && func_254()) && func_255())
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_912))
				{
					iLocal_912 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1407.033f, -857.3352f, 67.32503f, 0f, 0f, 28.04611f, 54.39909f, 38.84146f, 18.36122f, "Arrival vol");
				}
				else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_913))
				{
					iLocal_913 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1407.033f, -857.3352f, 67.32503f, 0f, 0f, 28.04611f, 62.09033f, 55.83051f, 18.36122f, "Arrival dismount vol");
				}
				else
				{
					__LIB_2__::func_608(&uLocal_1494);
					PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), iLocal_23);
					if (PED::IS_PED_ON_MOUNT(Global_35) && !__LIB_0__::func_163(Global_35, 1920417248))
					{
						func_237("OBJ_CURU_DISMOUNT");
						iLocal_14 = 3;
					}
					else
					{
						StringCopy(&cVar9, "CAUNC_WALKUP", 24);
						if (func_232(8192) || (!AUDIO::_0xA2CAC9DEF0195E6F(1) && __LIB_1__::func_104(&uLocal_1286, cVar9, 0, -1, 0, 0)))
						{
							func_237("OBJ_CURU_WALKUP");
							func_236(8192);
							iLocal_14 = 4;
						}
						else if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
						{
						}
					}
					func_260();
					__LIB_3__::func_123(1785985962, 1);
					__LIB_3__::func_123(283363467, 1);
					__LIB_3__::func_123(-22174689, 1);
					__LIB_3__::func_123(558917988, 1);
				}
			}
			break;
		case 3:
			func_256();
			func_262();
			func_263();
			func_245();
			func_264(&Local_96, iLocal_897);
			func_258();
			if (__LIB_18__::func_374(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_22, false, false), &uLocal_1387, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 5f, 1084227584 /* Float: 5f */, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 1))
			{
				__LIB_1__::func_721(7);
			}
			if ((((VOLUME::_DOES_VOLUME_EXIST(iLocal_913) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_913, true, 0)) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !__LIB_0__::func_163(Global_35, 501393341)) && !__LIB_0__::func_163(iLocal_22, 1920417248))
			{
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
			}
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				if (!__LIB_2__::func_618(&uLocal_1494))
				{
					__LIB_5__::func_107(&uLocal_1494);
				}
				else
				{
					if (__LIB_5__::func_51(&uLocal_1494) > 10f && !func_229(8192))
					{
						__LIB_1__::func_422("OBJ_CURU_DISMOUNT", 7500, 0, 1, 0, 0, -1, -1, 0);
						func_231(8192);
					}
					if (__LIB_5__::func_352("OBJ_CURU_DISMOUNT"))
					{
						func_231(8192);
						__LIB_2__::func_608(&uLocal_1494);
					}
				}
			}
			else
			{
				StringCopy(&cVar12, "CAUNC_WALKUP", 24);
				if (func_232(8192) || (!AUDIO::_0xA2CAC9DEF0195E6F(1) && __LIB_1__::func_104(&uLocal_1286, cVar12, 0, -1, 0, 0)))
				{
					if (__LIB_4__::func_68("OBJ_CURU_DISMOUNT", 1))
					{
						__LIB_1__::func_390("OBJ_CURU_DISMOUNT", 1);
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					}
					func_236(8192);
					if (__LIB_2__::func_618(&uLocal_1494))
					{
						__LIB_2__::func_608(&uLocal_1494);
					}
					if (__LIB_0__::func_866(4, 0))
					{
						__LIB_1__::func_462(4);
					}
					PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), iLocal_23);
					func_237("OBJ_CURU_WALKUP");
					__LIB_1__::func_721(7);
					fLocal_1497 = __LIB_0__::func_94(Global_35, vLocal_929, 1);
					iLocal_14 = 4;
				}
			}
			if (func_269())
			{
				if (func_270(uParam0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FIGHT");
					bLocal_1285 = true;
					iLocal_14 = 7;
				}
			}
			break;
		case 4:
			func_256();
			func_262();
			func_263();
			func_271();
			func_264(&Local_96, iLocal_897);
			func_258();
			if (__LIB_0__::func_71(Global_35))
			{
				if (__LIB_18__::func_374(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_22, false, false), &uLocal_1387, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 5f, 1084227584 /* Float: 5f */, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 1))
				{
					__LIB_1__::func_721(7);
				}
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_912))
			{
				if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_912, true, 0) || __LIB_0__::func_665(Global_35, iLocal_27, 1, 1) < 20f) || iLocal_75 == 2)
				{
					StringCopy(&cVar15, "CAUNC_ARRIVE", 24);
					if (__LIB_1__::func_104(&uLocal_1286, cVar15, 0, -1, 0, 0))
					{
						iLocal_53 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_27);
						MAP::_BLIP_SET_MODIFIER(iLocal_53, -662251075);
						iLocal_54 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_28);
						MAP::_BLIP_SET_MODIFIER(iLocal_54, -662251075);
						if (MAP::DOES_BLIP_EXIST(iLocal_51))
						{
							MAP::REMOVE_BLIP(&iLocal_51);
						}
						if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
						{
							MAP::REMOVE_BLIP(&(uParam0->f_43));
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar18);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_27, 1000, -1f, -1f, -1f);
						TASK::_0xF40A109B4B79A848(0, iLocal_27, 3000);
						TASK::CLOSE_SEQUENCE_TASK(iVar18);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_22, iVar18);
						iLocal_76 = 2;
						func_231(8388608);
						iLocal_14 = 6;
					}
				}
				else
				{
					if (!__LIB_2__::func_618(&uLocal_1494))
					{
						__LIB_5__::func_107(&uLocal_1494);
					}
					else
					{
						if ((__LIB_5__::func_51(&uLocal_1494) > 6f && !func_229(16384)) && __LIB_0__::func_94(Global_35, vLocal_929, 1) >= fLocal_1497)
						{
							__LIB_1__::func_422("OBJ_CURU_WALKUP", 7500, 0, 1, 0, 0, -1, -1, 0);
							func_231(16384);
						}
						else if (__LIB_0__::func_94(Global_35, vLocal_929, 1) < fLocal_1497)
						{
							fLocal_1497 = __LIB_0__::func_94(Global_35, vLocal_929, 1);
							__LIB_5__::func_107(&uLocal_1494);
						}
						if (__LIB_5__::func_352("OBJ_CURU_WALKUP"))
						{
							func_231(16384);
							__LIB_2__::func_608(&uLocal_1494);
						}
					}
					if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
					{
						func_237("OBJ_CURU_DISMOUNT");
						if (!MAP::DOES_BLIP_EXIST(iLocal_51))
						{
							MAP::REMOVE_BLIP(&iLocal_51);
						}
						iLocal_14 = 3;
					}
				}
			}
			if (func_269())
			{
				if (func_270(uParam0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FIGHT");
					bLocal_1285 = true;
					iLocal_14 = 7;
				}
			}
			break;
		case 6:
			func_273();
			func_262();
			func_263();
			func_256();
			func_274(uParam0);
			func_275();
			func_264(&Local_96, iLocal_897);
			func_258();
			func_276();
			if (func_269())
			{
				if (func_270(uParam0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FIGHT");
					bLocal_1285 = true;
					iLocal_14 = 7;
				}
			}
			if (iLocal_65 == 9)
			{
				if (func_277())
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_50))
					{
						MAP::REMOVE_BLIP(&iLocal_50);
					}
					func_278(&Local_96);
					__LIB_13__::func_927(&Local_85);
					__LIB_6__::func_916(&(Local_85.f_5));
					__LIB_6__::func_916(&iLocal_84);
					__LIB_0__::func_745(4);
					__LIB_5__::func_107(&uLocal_1405);
					AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FIGHT_END");
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_920))
					{
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_920, true, 7.5f);
						OBJECT::SET_OBJECT_TARGETTABLE(iLocal_920, true);
					}
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_22, false, 0f);
					if (!MAP::DOES_BLIP_EXIST(iLocal_50))
					{
						iLocal_50 = MAP::_BLIP_ADD_FOR_COORD(203020899, 1399.87f, -846.98f, 65.6f);
					}
					func_237("OBJ_CURU_BREAKLOCK");
					iLocal_14 = 8;
				}
			}
			break;
		case 7:
			func_263();
			func_262();
			func_256();
			func_281();
			func_264(&Local_96, iLocal_897);
			func_258();
			func_276();
			if (iLocal_65 == 9)
			{
				if (func_277())
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_50))
					{
						MAP::REMOVE_BLIP(&iLocal_50);
					}
					func_278(&Local_96);
					__LIB_13__::func_927(&Local_85);
					__LIB_6__::func_916(&(Local_85.f_5));
					__LIB_6__::func_916(&iLocal_84);
					__LIB_0__::func_745(4);
					__LIB_5__::func_107(&uLocal_1405);
					AUDIO::TRIGGER_MUSIC_EVENT("RUST02_FIGHT_END");
					FIRE::STOP_FIRE_IN_RANGE(vLocal_921, 7.5f);
					if (func_229(512))
					{
						func_237("OBJ_CURU_GATHER");
						__LIB_19__::func_119(uParam0, func_241(4), func_241(5), 4, 5);
						iLocal_14 = 9;
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_920))
						{
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_920, true, 7.5f);
							OBJECT::SET_OBJECT_TARGETTABLE(iLocal_920, true);
						}
						__LIB_19__::func_119(uParam0, func_241(3), func_241(4), 3, 4);
						func_237("OBJ_CURU_BREAKLOCK");
						fLocal_1497 = __LIB_0__::func_665(Global_35, iLocal_920, 1, 1);
						iLocal_14 = 8;
					}
				}
			}
			break;
		case 8:
			func_263();
			func_262();
			func_226(uParam0);
			func_282();
			func_264(&Local_96, iLocal_897);
			func_258();
			func_276();
			if (func_229(32))
			{
				if (((__LIB_5__::func_259("CAUNC_IG8") || __LIB_1__::func_322("CAUNC_IG8")) || __LIB_5__::func_259("CAUNC_IG8_ALT")) || __LIB_1__::func_322("CAUNC_IG8_ALT"))
				{
					__LIB_5__::func_239("CAUNC_IG8", 0, 0);
				}
			}
			if (func_286())
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_50))
				{
					MAP::REMOVE_BLIP(&iLocal_50);
				}
				iVar19 = 0;
				while (iVar19 < 20)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_96.f_2[iVar19]))
					{
						AUDIO::_0xFCDEC42B1C78B7F8(Local_96.f_2[iVar19], "COW_SPOOKED");
					}
					iVar19++;
				}
				__LIB_13__::func_932(&Local_96, 0);
				__LIB_13__::func_934(&Local_96);
				if (AUDIO::_0x1ECC76792F661CF5("CAUNC_IG8_ALT"))
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION("CAUNC_IG8_ALT", false, false);
				}
				if (AUDIO::_0x1ECC76792F661CF5("CAUNC_IG8"))
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION("CAUNC_IG8", false, false);
				}
				if (__LIB_0__::func_30(iLocal_1158))
				{
					__LIB_3__::func_124(iLocal_1158, 1);
				}
				if (__LIB_0__::func_30(iLocal_1159))
				{
					__LIB_3__::func_124(iLocal_1159, 1);
				}
				func_237("OBJ_CURU_GATHER");
				__LIB_5__::func_107(&uLocal_1494);
				__LIB_19__::func_119(uParam0, func_241(4), func_241(5), 4, 5);
				iLocal_14 = 9;
			}
			else if (__LIB_0__::func_94(Global_35, vLocal_968, 1) <= 50f)
			{
				if (func_232(1))
				{
					if (!func_229(2))
					{
						if (!__LIB_2__::func_618(&uLocal_1411))
						{
							__LIB_5__::func_107(&uLocal_1411);
						}
						else if (__LIB_5__::func_53(&uLocal_1411) > 3f)
						{
							__LIB_1__::func_422("OBJ_CURU_BREAKLOCK", 7500, 0, 1, 0, 0, -1, -1, 0);
							func_231(2);
						}
					}
					if (!func_229(2) && __LIB_5__::func_352("OBJ_CURU_BREAKLOCK"))
					{
						func_231(2);
					}
				}
				if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_43));
				}
				if (!MAP::DOES_BLIP_EXIST(iLocal_50))
				{
					iLocal_50 = MAP::_BLIP_ADD_FOR_COORD(203020899, 1399.87f, -846.98f, 65.6f);
				}
			}
			break;
		case 9:
			func_263();
			func_256();
			func_262();
			func_291();
			func_292();
			func_258();
			if (__LIB_0__::func_94(Global_35, vLocal_968, 1) <= 100f)
			{
				func_262();
			}
			if (!func_229(4))
			{
				if (!__LIB_2__::func_618(&uLocal_1494))
				{
					__LIB_5__::func_107(&uLocal_1494);
				}
				else
				{
					if (__LIB_5__::func_53(&uLocal_1494) > 6f && (!__LIB_1__::func_205(Global_35, iLocal_897, 1, 0) || PED::IS_PED_STOPPED(Global_35)))
					{
						__LIB_1__::func_422("OBJ_CURU_GATHER", 7500, 0, 1, 0, 0, -1, -1, 0);
						func_231(4);
					}
					if (__LIB_5__::func_352("OBJ_CURU_GATHER"))
					{
						func_231(4);
					}
				}
			}
			if (!func_229(268435456))
			{
				if (!func_294(&Local_96, &iLocal_897) || func_295(&Local_96))
				{
					func_237("OBJ_CURU_WAITCOWS");
					func_231(268435456);
					func_231(4);
				}
			}
			if (func_296(&Local_96, iLocal_897))
			{
				func_297(&Local_96, 1);
				func_298(&Local_96, 1114636288 /* Float: 60f */);
				if (MAP::DOES_BLIP_EXIST(iLocal_50))
				{
					MAP::REMOVE_BLIP(&iLocal_50);
				}
				__LIB_5__::func_107(&uLocal_1494);
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_HERD");
				iLocal_14 = 10;
			}
			break;
		case 10:
			func_263();
			func_256();
			func_262();
			func_292();
			func_291();
			func_258();
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1167))
			{
				iLocal_1167 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(713.6477f, -853.3419f, 55.96649f, 0f, 0f, 0f, 34.00351f, 32.42405f, 9.158979f, "Goal ambient blocker");
			}
			else if (!bLocal_1166)
			{
				POPULATION::_0xB56D41A694E42E86(iLocal_1167, 224, 0, joaat("SPECIES_DEER"), -1, -1, 0);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_1167, 224, 0, joaat("SPECIES_DEER"), -1, -1, 0);
				bLocal_1166 = true;
			}
			if (!__LIB_0__::func_394(Global_35, iLocal_24, 1) && !__LIB_13__::func_969(&Local_96))
			{
				if (!__LIB_1__::func_587(7))
				{
					__LIB_1__::func_718(7);
					func_237("OBJ_CURU_MOUNT");
					__LIB_1__::func_422("OBJ_CURU_MOUNT", 7500, 0, 1, 0, 0, -1, -1, 0);
					__LIB_0__::func_325(&iLocal_50);
				}
			}
			else if (!MAP::DOES_BLIP_EXIST(iLocal_50))
			{
				iLocal_50 = MAP::_BLIP_ADD_FOR_COORD(203020899, vLocal_971);
				__LIB_1__::func_721(7);
				__LIB_1__::func_390("OBJ_CURU_MOUNT", 1);
				func_237("OBJ_CURU_HERD");
			}
			if (func_302())
			{
				if (func_303(4, 2, "pl_OpenGate"))
				{
					if (!func_304())
					{
					}
				}
				if (__LIB_13__::func_262(iLocal_31, 0, &uLocal_1226, &iLocal_1254, 0, 0))
				{
					iLocal_81 = 4;
				}
			}
			if (!func_229(8) && __LIB_0__::func_394(Global_35, iLocal_24, 1))
			{
				if (!__LIB_2__::func_618(&uLocal_1494))
				{
					__LIB_5__::func_107(&uLocal_1494);
				}
				else if (__LIB_5__::func_53(&uLocal_1494) > 2f)
				{
					if (__LIB_1__::func_422("OBJ_CURU_HERD", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
					{
						func_231(8);
					}
				}
				if (__LIB_5__::func_352("OBJ_CURU_HERD"))
				{
					__LIB_2__::func_608(&uLocal_1494);
					func_231(8);
				}
			}
			if (__LIB_13__::func_969(&Local_96) || MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_13__::func_935(&Local_96), vLocal_971, true) <= 40f)
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_50))
				{
					MAP::REMOVE_BLIP(&iLocal_50);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_END");
				ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(iLocal_24, false);
				func_307(&Local_96);
				__LIB_19__::func_119(uParam0, func_241(5), func_241(6), 5, 6);
				iLocal_14 = 11;
			}
			if (func_308(&Local_96))
			{
				iLocal_14 = 12;
			}
			break;
		case 11:
			func_227(0);
			func_292();
			func_258();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
			__LIB_1__::func_448(Global_35, vLocal_1039, 1, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 10f, 5f, 1, 1, 1, 0);
			if (__LIB_13__::func_262(iLocal_31, 0, &uLocal_1226, &iLocal_1254, 0, 0))
			{
				iLocal_81 = 4;
			}
			if (func_308(&Local_96))
			{
				if (func_310())
				{
					func_311(&Local_96, Local_96.f_444);
					if (__LIB_0__::func_272(iLocal_22, 0) && PED::IS_PED_IN_GROUP(iLocal_22))
					{
						__LIB_1__::func_640(4);
						PED::REMOVE_PED_FROM_GROUP(iLocal_22);
					}
					iLocal_14 = 12;
				}
			}
			break;
		case 12:
			func_227(0);
			func_258();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
			if (func_312())
			{
			}
			break;
		case 13:
			break;
	}
}

bool func_49(var uParam0)
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_51(&(uParam0->f_3), __LIB_0__::func_771(iVar0)))
		{
			if (__LIB_0__::func_903(iVar0))
			{
				if (!__LIB_1__::func_22(iVar0))
				{
					func_317(iVar0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					return false;
				}
				if (((!__LIB_0__::func_866(iVar0, 0) && uParam0->f_1 != joaat("HAI_FIVE_FINGER_FILLET_01")) && uParam0->f_1 != joaat("HAI_FIVE_FINGER_FILLET_02")) && uParam0->f_1 != joaat("HAI_DOMINOES_01"))
				{
					__LIB_1__::func_551(iVar0, 0);
					AUDIO::STOP_PED_SPEAKING(__LIB_0__::func_271(iVar0), true);
				}
			}
			else if (!__LIB_1__::func_22(iVar0))
			{
				func_317(iVar0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return false;
			}
		}
		iVar0++;
	}
	if (!func_319(uParam0))
	{
		return false;
	}
	__LIB_0__::func_772(uParam0);
	if (__LIB_0__::func_750(&(uParam0->f_9), 128))
	{
		if (!func_321(uParam0))
		{
			return false;
		}
	}
	sVar1 = __LIB_0__::func_758(uParam0->f_1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		MISC::_0x1096603B519C905F(sVar1);
	}
	if (__LIB_0__::func_704())
	{
		__LIB_1__::func_716(1);
	}
	__LIB_0__::func_326(64);
	__LIB_0__::func_267(1);
	__LIB_0__::func_7(&Global_1935630, 256);
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	}
	if (!__LIB_0__::func_13(32768))
	{
		func_325(Global_36, ENTITY::GET_ENTITY_HEADING(Global_35));
	}
	return true;
}

bool func_51(var uParam0)
{
	if (iLocal_81 == 8)
	{
		__LIB_3__::func_123(iLocal_1160, 1);
		__LIB_3__::func_123(iLocal_1161, 1);
		__LIB_0__::func_496();
		Global_1879514.f_1 = uParam0->f_5;
		__LIB_1__::func_323("JRUST", 0);
		return true;
	}
	return false;
}

void func_61()
{
	HUD::_TEXT_DATABASE_DELETE("CURU");
	HUD::_TEXT_DATABASE_DELETE("CURUAUD");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_RUSSLINGGATELOCK02X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_40);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_41);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_42);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_43);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_44);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1517);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1519);
}

void func_71()
{
	__LIB_0__::func_121(756, 32);
	if (__LIB_5__::func_458(756))
	{
	}
	__LIB_0__::func_121(757, 32);
	if (__LIB_5__::func_458(757))
	{
	}
	__LIB_0__::func_121(758, 32);
	if (__LIB_5__::func_458(758))
	{
	}
	__LIB_0__::func_121(762, 32);
	if (__LIB_5__::func_458(762))
	{
	}
	__LIB_0__::func_121(759, 32);
	if (__LIB_5__::func_458(759))
	{
	}
	__LIB_0__::func_121(761, 32);
	if (__LIB_5__::func_458(761))
	{
	}
	__LIB_0__::func_121(922, 32);
	if (__LIB_5__::func_458(922))
	{
	}
	__LIB_0__::func_121(923, 32);
	if (__LIB_5__::func_458(923))
	{
	}
	__LIB_0__::func_121(936, 32);
	if (__LIB_5__::func_458(936))
	{
	}
	__LIB_0__::func_121(937, 32);
	if (__LIB_5__::func_458(937))
	{
	}
}

void func_79()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		ENTITY::REMOVE_FORCED_OBJECT(vLocal_1042[iVar0 /*3*/], 2.5f, func_375(iVar0));
		iVar0++;
	}
}

void func_80()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1140[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_1140[iVar0]));
		}
		iVar0++;
	}
}

bool func_146(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (__LIB_1__::func_614(iParam0, 0, 0) == 0)
	{
		if (__LIB_1__::func_153(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = __LIB_1__::func_756(iVar6) + 1;
			__LIB_1__::func_757(iVar5);
			if (__LIB_1__::func_154(38))
			{
				__LIB_1__::func_240(483, 0);
			}
			else
			{
				__LIB_1__::func_240(482, 0);
			}
			if (iVar7 == __LIB_0__::func_353(iVar6))
			{
				func_146(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(1);
				}
			}
			if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_450(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_1__::func_450(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if ((!__LIB_0__::func_192(iParam0, 866047851) && !__LIB_0__::func_192(iParam0, -1979000645)) && !__LIB_0__::func_192(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (__LIB_0__::func_774(iParam0, 8388608) && !__LIB_0__::func_293(28))
	{
		__LIB_10__::func_252(28);
	}
	if (!bVar3)
	{
		if (__LIB_0__::func_192(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (__LIB_0__::func_357(iParam0) == -1447088266)
			{
				iVar1 = __LIB_0__::func_775(__LIB_0__::func_914(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iVar1);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iParam0);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
		{
			if (!__LIB_1__::func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_1__::func_842(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			__LIB_3__::func_909(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, 2000026003))
		{
			__LIB_1__::func_632(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -103750053))
		{
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (__LIB_0__::func_192(iParam0, -121341956) && !__LIB_0__::func_192(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					__LIB_1__::func_240(498, 0);
				}
			}
			if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
			{
				__LIB_1__::func_796(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -136654233))
		{
			if (__LIB_0__::func_192(iParam0, -1021472396))
			{
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1466706512) && __LIB_0__::func_192(iParam0, 1147021565))
		{
			__LIB_1__::func_240(484, 0);
		}
		else if (__LIB_0__::func_192(iParam0, 1147021565) && __LIB_0__::func_192(iParam0, -524514947))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 554195525))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 589988438))
		{
			if (__LIB_1__::func_709())
			{
				__LIB_1__::func_797(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_843(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_1__::func_844(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_1__::func_845(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_846(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (__LIB_0__::func_192(iParam0, 1841149704))
		{
			__LIB_0__::func_359();
		}
		else if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_1__::func_847(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_1__::func_858(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return false;
			}
			__LIB_1__::func_824(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_146(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_146(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_146(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_146(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_146(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_146(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_601(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1399091007))
		{
			__LIB_0__::func_917(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_146(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				__LIB_10__::func_252(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				__LIB_1__::func_240(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				__LIB_0__::func_361();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				__LIB_0__::func_362();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				__LIB_0__::func_363();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				__LIB_1__::func_244();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				__LIB_1__::func_240(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				__LIB_1__::func_240(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_146(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_146(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				__LIB_1__::func_240(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				__LIB_1__::func_240(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_1__::func_825(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return true;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_10__::func_379(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_10__::func_485(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (__LIB_0__::func_708(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_146(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			__LIB_1__::func_451(iVar2, 0);
		}
	}
	Var35 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	__LIB_1__::func_602(iParam0);
	if (fParam6 > 0f)
	{
		if (__LIB_0__::func_192(iParam0, -839724752))
		{
			__LIB_1__::func_157(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_148()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_518();
	func_519();
	func_520();
	func_521();
	func_522();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_525(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		__LIB_1__::func_798(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(__LIB_1__::func_710(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	__LIB_0__::func_921(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946804.f_57[iVar1 /*11*/];
		Global_1946804.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946804.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
				{
					__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
		{
			__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946804.f_1378.f_1[iVar1 /*3*/] = { Global_1946804.f_1616.f_1[iVar1 /*3*/] };
		iVar1++;
	}
}

void func_186()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575.f_4)
	{
		return;
	}
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return;
	}
	else if ((__LIB_0__::func_296(0, 0, 1) || __LIB_0__::func_383()) || __LIB_1__::func_195())
	{
		return;
	}
	iVar0 = __LIB_1__::func_194();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_566(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		__LIB_1__::func_103(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		__LIB_0__::func_703(0, -1);
	}
	if (iVar2 > 0)
	{
		__LIB_0__::func_45("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_385(1, 0);
	Global_1956575.f_4 = 1;
}

Vector3 func_200(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_581(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_581(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

bool func_211(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	uParam0->f_269 = 0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	bVar0 = DATAFILE::_0x7907969497EA92F5(uParam0->f_264);
	if (!bVar0)
	{
		if (!DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam1)))
		{
			return true;
		}
		if (!bParam4)
		{
			uParam0->f_264 = DATAFILE::_0xCA56DD6AB7A39F64(MISC::GET_HASH_KEY(sParam1));
		}
		else
		{
			uParam0->f_264 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
		}
	}
	uParam0->f_270 = DATAFILE::_0x603AC35FD4602C76(uParam0->f_264);
	if (!uParam0->f_270)
	{
		if (!bParam4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	func_590(uParam0);
	uParam0->f_264.f_2 = 0;
	uParam0->f_277 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_264));
	uParam0->f_264.f_2 = 12;
	uParam0->f_279 = DATAFILE::_DATAFILE_GET_NUM_NODES(&(uParam0->f_264));
	uParam0->f_270 = 1;
	uParam0->f_278 = 0;
	uParam0->f_280 = 0;
	if (bParam3)
	{
		return false;
	}
	return true;
}

void func_224(bool bParam0)
{
	if (__LIB_0__::func_102())
	{
		Global_1357509 = 1;
	}
	if (func_592(joaat("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == joaat("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = joaat("WEAPON_UNARMED");
	}
}

void func_226(var uParam0)
{
	vector3 vVar0[24];
	int iVar3;
	vector3 vVar4[24];
	vector3 vVar7[24];
	if (!func_232(1) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
	{
		if (!__LIB_2__::func_618(&uLocal_1384))
		{
			__LIB_5__::func_107(&uLocal_1384);
		}
		else if (__LIB_5__::func_51(&uLocal_1384) > 15f && !__LIB_7__::func_443(Global_35))
		{
			StringCopy(&cVar0, "CAUNC_RIDEBANT1", 24);
			if (__LIB_1__::func_104(&uLocal_1286, cVar0, 0, -1, 0, 0))
			{
				__LIB_2__::func_608(&uLocal_1384);
				func_236(1);
			}
		}
	}
	else if (!func_232(2048) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
	{
		iVar3 = -1;
		if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1517, ENTITY::GET_ENTITY_COORDS(iLocal_22, true, false), &iVar3))
		{
			if (iVar3 >= (func_594() - 1))
			{
				StringCopy(&cVar4, "CAUNC_RIDEUPA", 24);
				if (__LIB_1__::func_104(&uLocal_1286, cVar4, 0, -1, 0, 0))
				{
					func_236(2048);
				}
			}
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1272) && !func_229(131072))
	{
		if (__LIB_0__::func_272(iLocal_22, 0) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_22, iLocal_1272, true, 0))
		{
			func_231(131072);
		}
	}
	else if (func_229(131072))
	{
		if (!func_232(512))
		{
			StringCopy(&cVar7, "CAUNC_RIDETURN", 24);
			if (__LIB_1__::func_104(&uLocal_1286, cVar7, 0, -1, 0, 0))
			{
				func_236(512);
			}
		}
	}
}

void func_227(bool bParam0)
{
	if (!PED::DOES_GROUP_EXIST(iLocal_95))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_22))
		{
			iLocal_95 = PED::GET_PED_GROUP_INDEX(iLocal_22);
		}
		else
		{
			iLocal_95 = PED::CREATE_GROUP(2);
			PED::SET_PED_AS_GROUP_LEADER(iLocal_22, iLocal_95, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_22, 279, true);
		}
		PED::SET_GROUP_FORMATION(iLocal_95, 10);
	}
	if (((__LIB_0__::func_272(iLocal_22, 0) && !PED::IS_PED_IN_GROUP(iLocal_22)) && PED::DOES_GROUP_EXIST(iLocal_95)) && PED::IS_PED_ON_MOUNT(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_22, 279, true);
		PED::SET_PED_AS_GROUP_LEADER(iLocal_22, iLocal_95, true);
	}
	else if (((__LIB_0__::func_272(iLocal_22, 0) && PED::IS_PED_IN_GROUP(iLocal_22)) && !PED::IS_PED_ON_MOUNT(Global_35)) && bParam0)
	{
		__LIB_1__::func_640(4);
		PED::REMOVE_PED_FROM_GROUP(iLocal_22);
	}
}

void func_228()
{
	if (!PED::IS_PED_ON_MOUNT(iLocal_22))
	{
		if ((!__LIB_0__::func_163(iLocal_22, 1868526510) && !ENTITY::IS_ENTITY_DEAD(iLocal_22)) && !ENTITY::IS_ENTITY_DEAD(iLocal_23))
		{
			TASK::TASK_MOUNT_ANIMAL(iLocal_22, iLocal_23, 30000, -1, 1f, 1, 0, 0);
			Local_1520.f_3 = Global_35;
			Local_1520.f_7 = 40000;
			Local_1520.f_20 = 4;
			Local_1520.f_19 = 4;
			Local_1520.f_17 = 0;
			Local_1520.f_18 = 0;
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_22, &Local_1520);
		}
		else if (ENTITY::IS_ENTITY_DEAD(iLocal_23))
		{
			func_595(4, 1, 1, 0, 0, 0, 0, 0);
			iLocal_23 = func_596(4, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_23))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_23, true);
			}
		}
	}
	else if (!__LIB_0__::func_163(iLocal_22, 713668775) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_22, vLocal_932, 3f, 4f, 4f, false, true, 0))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_22, vLocal_932, 0.55f, 20000, 0.25f, 0, 40000f);
	}
}

bool func_229(int iParam0)
{
	return (iLocal_1797 && iParam0) != 0;
}

void func_231(int iParam0)
{
	if (func_229(iParam0))
	{
		return;
	}
	iLocal_1797 = (iLocal_1797 || iParam0);
}

bool func_232(int iParam0)
{
	return (uLocal_1798 && iParam0) != 0;
}

void func_236(int iParam0)
{
	if (func_232(iParam0))
	{
		return;
	}
	uLocal_1798 = (uLocal_1798 || iParam0);
}

void func_237(char* sParam0)
{
	__LIB_1__::func_324(sParam0);
	__LIB_2__::func_608(&uLocal_1494);
}

struct<4> func_241(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { func_610(0) };
			Var0.f_3 = 60.2491f;
			break;
		case 1:
			Var0 = { func_610(1) };
			Var0.f_3 = 281.7799f;
			break;
		case 2:
			Var0 = { func_610(2) };
			Var0.f_3 = 281.7799f;
			break;
		case 4:
			Var0 = { func_610(4) };
			Var0.f_3 = 114.4156f;
			break;
		case 5:
			Var0 = { func_610(5) };
			Var0.f_3 = 168.2971f;
			break;
		case 6:
			Var0 = { func_610(6) };
			Var0.f_3 = 354.3703f;
			break;
	}
	return Var0;
}

void func_245()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3[24];
	if (__LIB_0__::func_272(iLocal_22, 0))
	{
		iVar0 = -1;
		iVar1 = -1;
		switch (iLocal_74)
		{
			case 0:
				if (!PED::IS_PED_ON_MOUNT(iLocal_22))
				{
					if ((!__LIB_0__::func_163(iLocal_22, 242628503) && !ENTITY::IS_ENTITY_DEAD(iLocal_22)) && !ENTITY::IS_ENTITY_DEAD(iLocal_23))
					{
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_GO_TO_ENTITY(0, iLocal_23, 30000, 2f, 1f, 1f, 0);
						TASK::TASK_MOUNT_ANIMAL(0, iLocal_23, 30000, -1, 2f, 1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_22, iVar2);
					}
					else if (ENTITY::IS_ENTITY_DEAD(iLocal_23))
					{
						func_595(4, 1, 1, 0, 0, 0, 0, 0);
						iLocal_23 = func_596(4, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_23))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_23, true);
						}
					}
				}
				else
				{
					if (((((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_22, true) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !__LIB_0__::func_163(iLocal_22, 658540077)) && ((__LIB_7__::func_443(Global_35) && func_612()) || !__LIB_7__::func_443(Global_35))) && PED::DOES_GROUP_EXIST(iLocal_95)) && PED::IS_PED_IN_GROUP(iLocal_22))
					{
						if (__LIB_7__::func_443(iLocal_22))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_22, sLocal_1517, 0, 25602, -1, 0, 0, -1);
						}
						else
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_22, sLocal_1517, 0, 25608, -1, 0, 0, -1);
						}
						PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_23, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
						PED::_0x0E9E95FDEDCC9D35(Global_35, 0, 0);
						PED::SET_PED_CONFIG_FLAG(iLocal_22, 167, true);
						_NAMESPACE29::_0x0EABF182FBB63D72(iLocal_22, 6, 0);
						if (__LIB_7__::func_443(iLocal_22))
						{
							iLocal_74 = 1;
						}
						else
						{
							iLocal_74 = 2;
						}
					}
					if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_22, true) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
					{
						if (!TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1517, ENTITY::GET_ENTITY_COORDS(iLocal_22, true, false), &iVar0))
						{
						}
						else if (!TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1517, Global_36, &iVar1))
						{
						}
						else if (iVar1 >= func_613() && iVar0 >= func_613())
						{
							iLocal_74 = 4;
						}
					}
				}
				break;
			case 1:
				if ((!__LIB_0__::func_163(iLocal_22, 658540077) && !__LIB_0__::func_163(iLocal_22, 242628503)) || !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_22, true))
				{
					iLocal_74 = 0;
				}
				else if (!__LIB_7__::func_443(iLocal_22))
				{
					iLocal_74 = 2;
				}
				break;
			case 2:
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_22, 0) || !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_22, true))
				{
					iLocal_74 = 0;
				}
				else
				{
					__LIB_5__::func_552(iLocal_22, 2.001f, 0, 0.1f, 1, 7f, 20f, 35f, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 1, 1045220557 /* Float: 0.2f */, 0);
					if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, false))
					{
						if (__LIB_0__::func_665(Global_35, iLocal_22, 1, 1) <= 10f)
						{
							if (!__LIB_2__::func_618(&uLocal_1408))
							{
								__LIB_5__::func_107(&uLocal_1408);
							}
							else if (__LIB_5__::func_53(&uLocal_1408) > 8f)
							{
								if (!AUDIO::_0xA2CAC9DEF0195E6F(1) && iLocal_94 < iLocal_93)
								{
									StringCopy(&cVar3, "CAUNC_NOHORSE", 24);
									if (__LIB_1__::func_104(&uLocal_1286, cVar3, 0, -1, 0, 0))
									{
										iLocal_94++;
										__LIB_5__::func_107(&uLocal_1408);
									}
								}
							}
						}
					}
					if (!TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1517, ENTITY::GET_ENTITY_COORDS(iLocal_22, true, false), &iVar0))
					{
					}
					else if (iVar0 >= func_594())
					{
						iLocal_74 = 4;
					}
				}
				break;
			case 4:
				if (__LIB_0__::func_71(Global_35))
				{
					if (__LIB_18__::func_374(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_22, false, false), &uLocal_1387, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 5f, 1084227584 /* Float: 5f */, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 1))
					{
						__LIB_1__::func_721(7);
					}
				}
				if (!__LIB_0__::func_163(iLocal_22, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_22, vLocal_935, 1.25f, 20000, 0.25f, 1, fLocal_938);
				}
				else if (__LIB_0__::func_94(iLocal_22, vLocal_935, 1) < 3f)
				{
					PED::_0x89F5E7ADECCCB49C(iLocal_22, "Stealth");
					iLocal_74 = 5;
				}
				break;
			case 5:
				if (__LIB_0__::func_71(Global_35))
				{
					if (__LIB_18__::func_374(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_22, false, false), &uLocal_1387, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 5f, 1084227584 /* Float: 5f */, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 1))
					{
						__LIB_1__::func_721(7);
					}
				}
				if (__LIB_0__::func_163(iLocal_22, 658540077))
				{
					TASK::CLEAR_PED_TASKS(iLocal_22, true, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_22, 167, false);
				}
				else if ((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_22, true) && !__LIB_0__::func_163(iLocal_22, 501393341)) && !__LIB_0__::func_163(iLocal_22, 1920417248))
				{
					PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), iLocal_23);
					TASK::TASK_DISMOUNT_ANIMAL(iLocal_22, 64, 0, 0, 0, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_22, 167, false);
				}
				else if (!PED::IS_PED_ON_MOUNT(iLocal_22))
				{
					if (__LIB_0__::func_866(4, 0))
					{
						__LIB_1__::func_462(4);
					}
					if (__LIB_0__::func_272(iLocal_23, 0))
					{
						TASK::TASK_STAND_STILL(iLocal_23, -1);
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_22, Global_35, -1, -1f, -1f, -1f);
					iLocal_74 = 6;
					__LIB_0__::func_900(4);
				}
				break;
			case 6:
				break;
		}
	}
}

void func_246()
{
	if ((CLOCK::GET_CLOCK_HOURS() < 4 && CLOCK::GET_CLOCK_HOURS() > 0) || CLOCK::GET_CLOCK_HOURS() > 4)
	{
		__LIB_11__::func_572(Global_35, vLocal_929, 4, 0, 0, 50f, 300f);
	}
	else
	{
		__LIB_9__::func_827(4, 0, 0, 0);
	}
}

bool func_248()
{
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_1283))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1283);
		if (INTERIOR::IS_INTERIOR_READY(iLocal_1283))
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_908))
			{
				iLocal_908 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1378.653f, -875.9824f, 70.15073f, 0f, 0f, 14.53047f, 3.153452f, 3.46254f, 2.191711f, "Rancher too close wakeup check");
			}
			else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_909))
			{
				iLocal_909 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1378.509f, -869.1351f, 69.7963f, 0f, 0f, 15.4992f, 6.995067f, 9.077378f, 3.1563f, "Rancher porch interrupt check");
			}
			else if (iLocal_55 == 0)
			{
				iLocal_55 = GRAPHICS::_0x5D1C5D8E62E8EE1C(iLocal_1283);
			}
			else if (GRAPHICS::_0x113857D66A9CABE6(iLocal_55))
			{
				GRAPHICS::_0xBFCB17895BB99E4E(iLocal_55, 0);
			}
			else
			{
				return true;
			}
		}
	}
	else
	{
		iLocal_1283 = INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_926);
	}
	return false;
}

bool func_249()
{
	return true;
	if (iLocal_56 == 0)
	{
		iLocal_56 = __LIB_0__::func_17(-1536551334);
	}
	if (GRAPHICS::_0x113857D66A9CABE6(iLocal_56))
	{
		GRAPHICS::_0xBFCB17895BB99E4E(iLocal_56, 0);
	}
	else
	{
		return true;
	}
	return false;
}

bool func_250(bool bParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_897))
	{
		iLocal_897 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1431.615f, -835.8602f, 58.87785f, 0.066662f, 9.410843f, 4.525022f, 67.16203f, 37.79922f, 7.926406f, "CURU Herding start vol");
		if (bParam0)
		{
			Local_96.f_188 = joaat("A_C_COW");
			__LIB_11__::func_487(&Local_96);
		}
	}
	else if (__LIB_19__::func_189(&Local_96, vLocal_968, 20, vLocal_971, vLocal_974, vLocal_977, joaat("A_C_COW"), joaat("VOLBOX"), iLocal_897, 0, 0, 0, 1, 0))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_96.f_694))
		{
			Local_96.f_694 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(659.9146f, -491.0696f, 87.56485f, 0f, 0f, 40.93697f, 341.5773f, 151.8329f, 116.7063f, "volLimitMovement");
		}
		__LIB_11__::func_466(&Local_96);
		__LIB_3__::func_123(1785985962, 1);
		__LIB_3__::func_123(283363467, 1);
		__LIB_3__::func_123(-22174689, 1);
		__LIB_3__::func_123(558917988, 1);
		return true;
	}
	return false;
}

bool func_251()
{
	float fVar0;
	if (func_621())
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_920))
		{
			STREAMING::REQUEST_MODEL(joaat("P_RUSSLINGGATELOCK02X"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("P_RUSSLINGGATELOCK02X")))
			{
				if (iLocal_919 == 0)
				{
					iLocal_919 = ENTITY::_0x6F3068258A499E52(joaat("P_RUSSLINGGATELOCK02X"), vLocal_921, 9);
				}
				else if (ENTITY::_0x1FF441D7954F8709(iLocal_919))
				{
					iLocal_920 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_919));
				}
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_925))
		{
			if (iLocal_924 == 0)
			{
				iLocal_924 = ENTITY::_0x6F3068258A499E52(joaat("P_CS_CHAINLINK01X"), vLocal_921, 11);
			}
			else if (ENTITY::_0x1FF441D7954F8709(iLocal_924))
			{
				iLocal_925 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_924));
			}
		}
		else
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_899))
			{
				vLocal_921 = { ENTITY::GET_ENTITY_COORDS(iLocal_920, false, false) };
				fVar0 = ENTITY::GET_ENTITY_HEADING(iLocal_920);
				iLocal_899 = VOLUME::_CREATE_VOLUME_CYLINDER(vLocal_921, 0f, 0f, fVar0, 4f, 2f, 6f);
				ENTITY::_SET_ENTITY_HEALTH(iLocal_920, 50, 0);
				PHYSICS::SET_DISABLE_BREAKING(iLocal_920, false);
				PHYSICS::SET_DISABLE_FRAG_DAMAGE(iLocal_920, false);
				OBJECT::SET_OBJECT_TARGETTABLE(iLocal_920, false);
				PHYSICS::SET_DISABLE_BREAKING(iLocal_925, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_925, true);
				OBJECT::SET_OBJECT_TARGETTABLE(iLocal_925, false);
				PHYSICS::SET_DISABLE_FRAG_DAMAGE(iLocal_925, false);
				if (__LIB_0__::func_30(iLocal_1158) && !__LIB_2__::func_769(iLocal_1158))
				{
					__LIB_3__::func_123(iLocal_1158, 1);
				}
				if (__LIB_0__::func_30(iLocal_1159) && !__LIB_2__::func_769(iLocal_1159))
				{
					__LIB_3__::func_123(iLocal_1159, 1);
				}
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_899, 480, 0, 0, -1, -1, 0);
				POPULATION::_0xB56D41A694E42E86(iLocal_899, 480, 0, 0, -1, -1, 0);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_899))
			{
				if (__LIB_0__::func_30(iLocal_1158) && __LIB_4__::func_925(iLocal_1158))
				{
					__LIB_3__::func_123(iLocal_1158, 1);
				}
				if (__LIB_0__::func_30(iLocal_1159) && !__LIB_2__::func_769(iLocal_1159))
				{
					__LIB_3__::func_123(iLocal_1159, 1);
				}
				return true;
			}
			else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_899))
			{
				return false;
			}
		}
		return false;
	}
	return false;
}

bool func_252()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_25))
	{
		return true;
	}
	if (!func_249())
	{
		return false;
	}
	if (!func_248())
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_910))
	{
		iLocal_910 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1397.281f, -852.8032f, 65.48918f, 0f, 0f, 17.41141f, 51.07673f, 40.1183f, 16.91399f, "Uncle can see KO vol");
		return false;
	}
	if (__LIB_2__::func_934(760, 1))
	{
		iLocal_25 = __LIB_2__::func_965(760, 1, 0, 0, 1, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_25))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_25, true);
			__LIB_0__::func_928(&uLocal_1286, iLocal_25, "HILLHAVEN_RANCHER", 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_25, iLocal_1169);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_25, 1);
			ENTITY::SET_ENTITY_COORDS(iLocal_25, 1378.65f, -875.95f, 69.12f, true, false, true, true);
			__LIB_3__::func_123(1511858696, 1);
		}
	}
	return false;
}

bool func_253()
{
	int iVar0;
	int iVar1;
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_27) && ENTITY::DOES_ENTITY_EXIST(iLocal_28)) && ENTITY::DOES_ENTITY_EXIST(iLocal_33)) && ENTITY::DOES_ENTITY_EXIST(iLocal_34))
	{
		__LIB_1__::func_572(vLocal_955, 15f, 0, 0, 1, 1, 0);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_27))
	{
		iLocal_27 = __LIB_1__::func_545(iLocal_41, vLocal_939, fLocal_942, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_27, true);
		PED::_SET_PED_CROUCH_MOVEMENT(iLocal_27, true, 0, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_27, iLocal_1168);
		PED::SET_PED_HEARING_RANGE(iLocal_27, 30f);
		PED::_0x9238A3D970BBB0A9(iLocal_27, -820192119);
		ENTITY::_0x18FF3110CF47115D(iLocal_27, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_27, 6, true);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_27, __LIB_3__::func_430(33554432, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_28))
	{
		iLocal_28 = __LIB_1__::func_545(iLocal_41, vLocal_943, fLocal_946, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_28, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_28, iLocal_1168);
		PED::SET_PED_HEARING_RANGE(iLocal_28, 30f);
		PED::_0x9238A3D970BBB0A9(iLocal_28, -820192119);
		ENTITY::_0x18FF3110CF47115D(iLocal_28, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_28, 6, true);
		iVar1 = WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_28, __LIB_3__::func_672(283115520, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 60, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33))
	{
		iLocal_33 = OBJECT::CREATE_OBJECT(iLocal_44, vLocal_955, true, true, false, false, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_33, 160);
		ENTITY::SET_ENTITY_PROOFS(iLocal_33, 9, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_33, true);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34))
	{
		iLocal_34 = OBJECT::CREATE_OBJECT(iLocal_44, vLocal_958, true, true, false, false, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_34, 160);
		ENTITY::SET_ENTITY_PROOFS(iLocal_34, 9, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_34, true);
	}
	return false;
}

bool func_254()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_29) && ENTITY::DOES_ENTITY_EXIST(iLocal_30))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_29))
	{
		iLocal_29 = __LIB_1__::func_545(iLocal_42, vLocal_947, fLocal_950, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		__LIB_0__::func_170(iLocal_29, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_29, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_29, 6, true);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_30))
	{
		iLocal_30 = __LIB_1__::func_545(iLocal_43, vLocal_951, fLocal_954, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_30, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_30, 6, true);
		__LIB_0__::func_170(iLocal_30, 1);
	}
	return false;
}

bool func_255()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_901))
	{
		iLocal_901 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1398.507f, -889.322f, 64.59841f, 0f, 0f, -30.30944f, 2.183321f, 4.251626f, 3.228534f, "Player cover safe zone 1");
	}
	else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_902))
	{
		iLocal_902 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1400.308f, -885.0298f, 64.20551f, 0f, 0f, -10.84263f, 2.846307f, 5.442308f, 3.835784f, "Player cover safe zone 2");
	}
	else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_903))
	{
		iLocal_903 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1396.194f, -891.5717f, 65.05345f, 0f, 0f, -52.51001f, 1.77192f, 2.99292f, 2.722458f, "Player cover safe zone 3");
	}
	else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_904))
	{
		iLocal_904 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_986, vLocal_989, vLocal_992, "Player move up cover safe zone");
	}
	else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_906))
	{
		iLocal_906 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1378.23f, -870.4373f, 70.02222f, 0f, 0f, 13.99995f, 7.454033f, 9.999874f, 3.89119f, "Rustler front door notice area");
	}
	else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_914))
	{
		iLocal_914 = VOLUME::_CREATE_VOLUME_BOX(1400.408f, -856.7831f, 64.90885f, 0f, 0f, 0f, 214.8861f, 152.954f, 64.20692f);
	}
	else if (!PED::_0x91A5F9CBEBB9D936(uLocal_1284))
	{
		uLocal_1284 = __LIB_1__::func_391(iLocal_914, 0, 0, 8192);
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_914, 0, 0, 0);
	}
	else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_907))
	{
		iLocal_907 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1394.027f, -855.8226f, 68.27893f, 0f, 0f, 10.25f, 20.5f, 28.5f, 14f, "Rustler must crouch zone");
	}
	else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_905))
	{
		iLocal_905 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1439.748f, -878.1005f, 64.21099f, 0f, 0f, 0.75f, 73f, 50.75f, 29.75f, "Player field safe zone");
	}
	else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_898))
	{
		iLocal_898 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1383.767f, -857.2835f, 67.8431f, 0f, 0f, -6.338585f, 18.56703f, 31.79725f, 14.99506f, "Rancher knockout notice zone");
	}
	else
	{
		return true;
	}
	return false;
}

void func_256()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2[24];
	vector3 vVar5[24];
	vector3 vVar8[24];
	bool bVar11;
	func_633();
	switch (iLocal_65)
	{
		case 0:
			if (func_303(0, 0, "pl_Idle_base"))
			{
				if (func_634())
				{
					__LIB_0__::func_928(&uLocal_1286, iLocal_27, "CARUST_RUSTLER01", 0);
					__LIB_0__::func_928(&uLocal_1286, iLocal_28, "CARUST_RUSTLER02", 0);
					iLocal_65 = 1;
				}
			}
			break;
		case 1:
			if (iLocal_14 == 6)
			{
				func_635();
				iLocal_65 = 2;
			}
			break;
		case 2:
			if (func_232(128))
			{
				iLocal_65 = 3;
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[0], false)) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_15[0], "pl_LockPick_Success"))
			{
				func_636(&iLocal_27, &(Local_1414[0 /*21*/]), 12f, &Local_1458, 5f, 3, 0, "OBJ_CURU_RUSTLBL", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				func_636(&iLocal_28, &(Local_1436[0 /*21*/]), 12f, &Local_1476, 5f, 3, 0, "OBJ_CURU_RUSTLBL", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (__LIB_9__::func_754(&(Local_1414[0 /*21*/])))
				{
					if (func_638(&iLocal_27))
					{
						__LIB_3__::func_515(&(Local_1458[0 /*17*/]), 0, 0);
						__LIB_3__::func_515(&(Local_1476[0 /*17*/]), 0, 0);
						iLocal_65 = 5;
					}
				}
				else if (__LIB_9__::func_754(&(Local_1436[0 /*21*/])))
				{
					if (func_638(&iLocal_28))
					{
						__LIB_3__::func_515(&(Local_1458[0 /*17*/]), 0, 0);
						__LIB_3__::func_515(&(Local_1476[0 /*17*/]), 0, 0);
						iLocal_65 = 5;
					}
				}
			}
			else
			{
				__LIB_2__::func_624(&Local_1458, 0, 0, 1, 0);
				__LIB_2__::func_624(&Local_1476, 0, 0, 1, 0);
			}
			break;
		case 5:
			if (AUDIO::_0x1ECC76792F661CF5("CAUNC_IG3"))
			{
				func_641(0);
			}
			if (func_642())
			{
				bVar0 = true;
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
				if (__LIB_0__::func_272(iLocal_27, 0))
				{
					if (!PED::IS_PED_ON_MOUNT(iLocal_27))
					{
						bVar0 = false;
						if (!__LIB_0__::func_163(iLocal_27, 1868526510))
						{
							if (PED::_GET_PED_CROUCH_MOVEMENT(iLocal_27))
							{
								PED::_SET_PED_CROUCH_MOVEMENT(iLocal_27, false, 0, false);
							}
							__LIB_1__::func_562(iLocal_27, iLocal_29, 0, 2f, 20000);
						}
					}
				}
				if (__LIB_0__::func_272(iLocal_28, 0))
				{
					if (!PED::IS_PED_ON_MOUNT(iLocal_28))
					{
						bVar0 = false;
						if (!__LIB_0__::func_163(iLocal_28, 1868526510))
						{
							__LIB_1__::func_562(iLocal_28, iLocal_30, 0, 2f, 20000);
						}
					}
				}
				if (bVar0)
				{
					if (__LIB_0__::func_272(iLocal_27, 0))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_27, Global_35, 3, 0, 200f, -1, iLocal_29);
					}
					if (__LIB_0__::func_272(iLocal_28, 0))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_28, Global_35, 3, 0, 200f, -1, iLocal_30);
					}
					iLocal_65 = 6;
				}
			}
			break;
		case 6:
			if (!__LIB_2__::func_618(&uLocal_1390))
			{
				__LIB_5__::func_107(&uLocal_1390);
			}
			else if (__LIB_5__::func_53(&uLocal_1390) > 5f)
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_53))
				{
					MAP::REMOVE_BLIP(&iLocal_53);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_54))
				{
					MAP::REMOVE_BLIP(&iLocal_54);
				}
				__LIB_2__::func_624(&Local_1458, 0, 0, 1, 0);
				__LIB_2__::func_624(&Local_1476, 0, 0, 1, 0);
				__LIB_2__::func_608(&uLocal_1390);
				iLocal_65 = 9;
			}
			break;
		case 3:
			bVar1 = true;
			if (__LIB_0__::func_272(iLocal_27, 0))
			{
				if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_27, true))
				{
					bVar1 = false;
					if (!__LIB_0__::func_163(iLocal_27, 1868526510))
					{
						if (PED::_GET_PED_CROUCH_MOVEMENT(iLocal_27))
						{
							PED::_SET_PED_CROUCH_MOVEMENT(iLocal_27, false, 0, false);
						}
						__LIB_1__::func_562(iLocal_27, iLocal_29, 0, 1065353216 /* Float: 1f */, 20000);
					}
				}
			}
			if (__LIB_0__::func_272(iLocal_28, 0))
			{
				if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_28, true))
				{
					bVar1 = false;
					if (!__LIB_0__::func_163(iLocal_28, 1868526510))
					{
						__LIB_1__::func_562(iLocal_28, iLocal_30, 0, 1065353216 /* Float: 1f */, 20000);
					}
				}
			}
			if (bVar1)
			{
				iLocal_65 = 4;
			}
			break;
		case 4:
			func_296(&Local_96, 0);
			if (__LIB_0__::func_272(iLocal_27, 0))
			{
				if (!__LIB_0__::func_163(iLocal_27, 658540077) && !func_229(4096))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_27, sLocal_1519, 0, 17410, -1, 0, 0, -1);
				}
				else
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_27, 0))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_27, 1.25f, 0, 0.4f, 0);
					}
					if (!func_229(4096))
					{
						func_231(4096);
					}
				}
			}
			if (__LIB_0__::func_272(iLocal_28, 0))
			{
				if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_28, true))
				{
					if (!__LIB_0__::func_163(iLocal_28, 1868526510))
					{
						__LIB_1__::func_562(iLocal_28, iLocal_30, 0, 1065353216 /* Float: 1f */, 20000);
					}
				}
			}
			break;
		case 7:
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_27, Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_28, Global_35, 1, 1))
			{
				if (__LIB_1__::func_322("CAUNC_IG4"))
				{
					__LIB_5__::func_239("CAUNC_IG4", 0, 0);
				}
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[0], false))
			{
				if (iLocal_48 == 1)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_27, iLocal_15[0]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_28, iLocal_15[0]))
					{
						StringCopy(&cVar2, "CAUNC_IG4", 24);
						if (((ENTITY::IS_ENTITY_DEAD(iLocal_28) || ENTITY::IS_ENTITY_DEAD(iLocal_27)) || iLocal_48 == 1) || __LIB_1__::func_104(&uLocal_1286, cVar2, 0, -1, 0, 0))
						{
							if (MAP::DOES_BLIP_EXIST(iLocal_53))
							{
								MAP::_BLIP_SET_MODIFIER(iLocal_53, -1034486097);
							}
							if (MAP::DOES_BLIP_EXIST(iLocal_54))
							{
								MAP::_BLIP_SET_MODIFIER(iLocal_54, -1034486097);
							}
							iLocal_65 = 8;
						}
					}
					else if (ANIMSCENE::_0x1F0E401031E20146(iLocal_15[0], "pl_QuickExit"))
					{
						if (MAP::DOES_BLIP_EXIST(iLocal_53))
						{
							MAP::_BLIP_SET_MODIFIER(iLocal_53, -1034486097);
						}
						if (MAP::DOES_BLIP_EXIST(iLocal_54))
						{
							MAP::_BLIP_SET_MODIFIER(iLocal_54, -1034486097);
						}
						iLocal_65 = 8;
					}
				}
				else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_27, iLocal_15[0]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_28, iLocal_15[0]))
				{
					StringCopy(&cVar5, "CAUNC_IG4", 24);
					if (((ENTITY::IS_ENTITY_DEAD(iLocal_28) || ENTITY::IS_ENTITY_DEAD(iLocal_27)) || iLocal_48 == 1) || __LIB_1__::func_104(&uLocal_1286, cVar5, 0, -1, 0, 0))
					{
						if (MAP::DOES_BLIP_EXIST(iLocal_53))
						{
							MAP::_BLIP_SET_MODIFIER(iLocal_53, -1034486097);
						}
						if (MAP::DOES_BLIP_EXIST(iLocal_54))
						{
							MAP::_BLIP_SET_MODIFIER(iLocal_54, -1034486097);
						}
						iLocal_65 = 8;
					}
				}
				else if (ANIMSCENE::_0x1F0E401031E20146(iLocal_15[0], "pl_Breakout_NoiseReact"))
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_53))
					{
						MAP::_BLIP_SET_MODIFIER(iLocal_53, -1034486097);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_54))
					{
						MAP::_BLIP_SET_MODIFIER(iLocal_54, -1034486097);
					}
					iLocal_65 = 8;
				}
			}
			else
			{
				StringCopy(&cVar8, "CAUNC_IG4", 24);
				if (((ENTITY::IS_ENTITY_DEAD(iLocal_28) || ENTITY::IS_ENTITY_DEAD(iLocal_27)) || iLocal_48 == 1) || __LIB_1__::func_104(&uLocal_1286, cVar8, 0, -1, 0, 0))
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_53))
					{
						MAP::_BLIP_SET_MODIFIER(iLocal_53, -1034486097);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_54))
					{
						MAP::_BLIP_SET_MODIFIER(iLocal_54, -1034486097);
					}
					iLocal_65 = 8;
				}
			}
			break;
		case 8:
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_27, Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_28, Global_35, 1, 1))
			{
				if (__LIB_1__::func_322("CAUNC_IG4"))
				{
					__LIB_5__::func_239("CAUNC_IG4", 0, 0);
				}
			}
			bVar11 = true;
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[0]) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_27, iLocal_15[0])) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_28, iLocal_15[0]))
			{
				return;
			}
			if (__LIB_0__::func_272(iLocal_29, 0) && (!__LIB_0__::func_394(iLocal_27, iLocal_29, 0) || ENTITY::IS_ENTITY_DEAD(iLocal_27)))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_29, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				PED::SET_PED_KEEP_TASK(iLocal_29, true);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_29, false);
				__LIB_2__::func_788(&iLocal_29, 1, 1, 1);
			}
			if (__LIB_0__::func_272(iLocal_30, 0) && (!__LIB_0__::func_394(iLocal_28, iLocal_30, 0) || ENTITY::IS_ENTITY_DEAD(iLocal_28)))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_30, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				PED::SET_PED_KEEP_TASK(iLocal_30, true);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_30, false);
				__LIB_2__::func_788(&iLocal_30, 1, 1, 1);
			}
			if (__LIB_0__::func_272(iLocal_27, 0) && !PED::_IS_PED_HOGTIED(iLocal_27))
			{
				bVar11 = false;
				if (PED::_GET_PED_CROUCH_MOVEMENT(iLocal_27))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(iLocal_27, false, 0, false);
				}
				if (!__LIB_0__::func_163(iLocal_27, -2117564886))
				{
					PED::_0xD8736EFDA38EDC5C(iLocal_27, ENTITY::GET_ENTITY_COORDS(iLocal_27, true, false), 150f);
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_27, ENTITY::GET_ENTITY_COORDS(iLocal_27, true, false), 100f, 16384, 1);
				}
			}
			else if (MAP::DOES_BLIP_EXIST(iLocal_53))
			{
				MAP::REMOVE_BLIP(&iLocal_53);
			}
			if (__LIB_0__::func_272(iLocal_28, 0) && !PED::_IS_PED_HOGTIED(iLocal_28))
			{
				bVar11 = false;
				if (!__LIB_0__::func_163(iLocal_28, -2117564886))
				{
					PED::_0xD8736EFDA38EDC5C(iLocal_28, ENTITY::GET_ENTITY_COORDS(iLocal_28, true, false), 150f);
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_28, ENTITY::GET_ENTITY_COORDS(iLocal_28, true, false), 100f, 16384, 1);
				}
			}
			else if (MAP::DOES_BLIP_EXIST(iLocal_54))
			{
				MAP::REMOVE_BLIP(&iLocal_54);
			}
			if (bVar11)
			{
				if (__LIB_0__::func_272(iLocal_29, 0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_29, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK(iLocal_29, true);
					__LIB_2__::func_788(&iLocal_29, 1, 1, 1);
				}
				if (__LIB_0__::func_272(iLocal_30, 0))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_30, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK(iLocal_30, true);
					__LIB_2__::func_788(&iLocal_30, 1, 1, 1);
				}
				iLocal_65 = 9;
			}
			break;
		case 9:
			if (!__LIB_0__::func_272(iLocal_27, 0))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_53))
				{
					MAP::REMOVE_BLIP(&iLocal_53);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_27))
				{
					__LIB_2__::func_788(&iLocal_27, 1, 0, 1);
				}
			}
			else if (__LIB_0__::func_665(Global_35, iLocal_27, 1, 1) > 75f)
			{
				__LIB_2__::func_788(&iLocal_27, 1, 0, 1);
				__LIB_2__::func_788(&iLocal_29, 1, 0, 1);
			}
			if (!__LIB_0__::func_272(iLocal_28, 0))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_54))
				{
					MAP::REMOVE_BLIP(&iLocal_54);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_28))
				{
					__LIB_2__::func_788(&iLocal_28, 1, 0, 1);
				}
			}
			else if (__LIB_0__::func_665(Global_35, iLocal_28, 1, 1) > 75f)
			{
				__LIB_2__::func_788(&iLocal_28, 1, 0, 1);
				__LIB_2__::func_788(&iLocal_30, 1, 0, 1);
			}
			break;
	}
	if (((iLocal_65 < 7 && iLocal_65 != 5) && iLocal_65 != 6) && iLocal_65 != 9)
	{
		if (func_644())
		{
			if (AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				AUDIO::_0x36559148B78853B3(1, 0, 0);
			}
			func_645(16777216);
			func_231(134217728);
			iLocal_65 = 7;
		}
	}
}

void func_258()
{
	if (CLOCK::GET_CLOCK_HOURS() != 4 || (CLOCK::GET_CLOCK_HOURS() == 4 && CLOCK::GET_CLOCK_MINUTES() > 0))
	{
		__LIB_9__::func_827(4, 0, 0, 0);
	}
}

void func_260()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		ENTITY::CREATE_FORCED_OBJECT(vLocal_1042[iVar0 /*3*/], 2.5f, func_375(iVar0), false);
		iVar0++;
	}
}

void func_262()
{
	if (iLocal_14 < 11 && iLocal_73 <= 0)
	{
		if ((((PED::IS_PED_SHOOTING(Global_35) || (__LIB_0__::func_272(iLocal_22, 0) && PED::IS_PED_SHOOTING(iLocal_22))) || (__LIB_0__::func_272(iLocal_27, 0) && PED::IS_PED_SHOOTING(iLocal_27))) || (__LIB_0__::func_272(iLocal_28, 0) && PED::IS_PED_SHOOTING(iLocal_28))) || FIRE::IS_EXPLOSION_IN_SPHERE(iLocal_1282, vLocal_929, 75f))
		{
			vLocal_1014 = { vLocal_929 };
			func_231(128);
		}
	}
}

void func_263()
{
	vector3 vVar0[24];
	vector3 vVar3[24];
	if (!__LIB_0__::func_272(iLocal_25, 0))
	{
		if (iLocal_73 != 8 && iLocal_73 != 7)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[2]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_15[2]);
			}
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RUST_RNCH");
			iLocal_73 = 8;
		}
	}
	switch (iLocal_73)
	{
		case 0:
			if (func_303(2, 0, "pl_Base_Loop"))
			{
				if (func_647())
				{
				}
			}
			if (iLocal_14 >= 4 && __LIB_0__::func_665(iLocal_25, Global_35, 1, 1) > 150f)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_25))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_25, true);
				}
				iLocal_73 = 9;
			}
			if (((iLocal_14 >= 9 && !__LIB_1__::func_205(Global_35, iLocal_897, 1, 0)) && func_648(&Local_96, iLocal_897) > 0) && (__LIB_0__::func_94(Global_35, 1377.22f, -870.66f, 69.04f, 1) <= 25f || __LIB_1__::func_205(Global_35, iLocal_898, 1, 0)))
			{
				vLocal_1014 = { Global_36 };
				func_231(16);
			}
			if (func_649())
			{
				func_231(16);
			}
			if (func_229(16))
			{
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_1283) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != iLocal_1283)
				{
					func_650();
				}
				PED::_0x802092B07E3B1EEA(iLocal_25, vLocal_1014, 3);
				iLocal_73 = 1;
				PED::_0xD8736EFDA38EDC5C(iLocal_25, vLocal_1014, 150f);
				PED::_0xD8736EFDA38EDC5C(iLocal_25, vLocal_968, 100f);
			}
			break;
		case 1:
			if ((((INTERIOR::IS_VALID_INTERIOR(iLocal_1283) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iLocal_1283) || __LIB_4__::func_195(1282705079) > 0.1f) || __LIB_4__::func_195(1282705079) < -0.1f) || __LIB_1__::func_205(Global_35, iLocal_909, 1, 0))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[2], false))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_15[2], "pl_Wake_Up"))
					{
						if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_15[2], "pl_Wake_Up") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_15[2], "pl_Wake_Up"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_15[2], "pl_Wake_Up", true);
						}
					}
					else
					{
						iLocal_73 = 2;
					}
				}
			}
			else if (!__LIB_2__::func_618(&uLocal_1405) || __LIB_5__::func_53(&uLocal_1405) > 6f)
			{
				if (func_303(3, 0, "pl_RancherConfront"))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_25, vLocal_964, 1f, 1f, 3f, false, true, 0))
					{
						func_652(iLocal_25, vLocal_964, fLocal_967, 2, 1073741824 /* Float: 2f */);
					}
					else if (func_653())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
						{
							ENTITY::DELETE_ENTITY(&iLocal_36);
						}
						__LIB_0__::func_7(&(Local_1507.f_3), 2);
						TASK::CLEAR_PED_TASKS(iLocal_25, true, false);
						iLocal_73 = 3;
					}
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[2], false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_15[2]) > 0.98f)
				{
					iLocal_73 = 6;
				}
			}
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_25, iLocal_15[2]))
			{
				iLocal_73 = 6;
			}
			break;
		case 3:
			if (func_653())
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_15[3]) > 0.1f && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_15[3]) <= 0.66f)
				{
					if (!bLocal_26)
					{
						PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_25, "RUSTLING_RANCHER", 0f, 0f, 0f, 0, "RUST_RNCH");
						bLocal_26 = true;
					}
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), 1f);
					}
				}
				else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_15[3]) > 0.66f)
				{
					if (bLocal_26)
					{
						PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RUST_RNCH");
						bLocal_26 = false;
					}
				}
				if (!func_232(2))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_15[3]) >= 0.3f)
					{
						func_655(0);
						_NAMESPACE29::_0x0EABF182FBB63D72(iLocal_22, 6, 0);
						Local_1520.f_3 = iLocal_25;
						Local_1520.f_7 = -1;
						Local_1520.f_20 = 4;
						Local_1520.f_19 = 4;
						Local_1520.f_17 = 0;
						Local_1520.f_18 = 0;
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_22, &Local_1520);
						TASK::_0xE7FA07624574B79A(iLocal_22, iLocal_25, 3, 3, 7.5f, 1, 0, 0, 0);
						func_236(2);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_25) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_15[3]) >= 0.7f)
				{
					TASK::TASK_KNOCKED_OUT(iLocal_25, 20f, true);
					func_231(65536);
					func_656();
					iLocal_73 = 7;
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_15[3], false))
				{
					func_231(65536);
					func_656();
					iLocal_73 = 7;
				}
			}
			break;
		case 4:
			func_655(0);
			if (WEAPON::_IS_WEAPON_MELEE(__LIB_0__::func_153(iLocal_25, 0, 1, 0)) || __LIB_0__::func_153(iLocal_25, 0, 1, 0) == 0)
			{
				TASK::TASK_SWAP_WEAPON(iLocal_25, 1, 0, 0, 0);
			}
			else if (!__LIB_0__::func_163(iLocal_25, 713668775) && __LIB_0__::func_94(iLocal_25, vLocal_1014, 1) > 3f)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_25, vLocal_1014, 1.5f, 60000, 0.25f, 0, 40000f);
			}
			else if (__LIB_0__::func_94(iLocal_25, vLocal_1014, 1) <= 3f)
			{
				iLocal_73 = 5;
			}
			else if (func_229(16))
			{
				TASK::CLEAR_PED_TASKS(iLocal_25, true, false);
				func_645(16);
			}
			if (((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_25, Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_25, iLocal_22, 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_25, iLocal_27, 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_25, iLocal_28, 17))
			{
				func_655(1);
				iLocal_73 = 6;
			}
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_25, true, false), 5f, true))
			{
				iLocal_73 = 6;
			}
			break;
		case 5:
			func_655(0);
			if (WEAPON::_IS_WEAPON_MELEE(__LIB_0__::func_153(iLocal_25, 0, 1, 0)) || __LIB_0__::func_153(iLocal_25, 0, 1, 0) == 0)
			{
				TASK::TASK_SWAP_WEAPON(iLocal_25, 1, 0, 0, 0);
			}
			else if (!__LIB_0__::func_163(iLocal_25, 713668775) && __LIB_0__::func_94(iLocal_25, vLocal_968, 1) > 3f)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_25, vLocal_968, 1.5f, 6000, 0.25f, 0, 40000f);
			}
			if (((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_25, Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_25, iLocal_22, 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_25, iLocal_27, 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_25, iLocal_28, 17))
			{
				func_655(1);
				iLocal_73 = 6;
			}
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_25, true, false), 5f, true))
			{
				func_655(1);
				iLocal_73 = 6;
			}
			break;
		case 6:
			if (!__LIB_0__::func_163(iLocal_25, 1120685857))
			{
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_25, vLocal_929, 150f, 33554432, 0);
				if (__LIB_0__::func_272(iLocal_22, 0))
				{
					PED::REGISTER_TARGET(iLocal_25, iLocal_22, 1);
					PED::REGISTER_TARGET(iLocal_22, iLocal_25, 1);
				}
				PED::REGISTER_TARGET(iLocal_25, Global_35, 1);
			}
			break;
		case 7:
			if (MAP::DOES_BLIP_EXIST(iLocal_52))
			{
				MAP::REMOVE_BLIP(&iLocal_52);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[2]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_15[2], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_15[2]);
			}
			if (!__LIB_0__::func_272(iLocal_25, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_25, Global_35, 1, 1))
				{
					__LIB_1__::func_715(2, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, iLocal_25, 0, 1065353216 /* Float: 1f */, 0);
					iLocal_73 = 8;
				}
				else
				{
					if (!func_232(256))
					{
						if (func_229(65536))
						{
							if (__LIB_1__::func_205(iLocal_22, iLocal_910, 1, 0))
							{
								if (!__LIB_2__::func_618(&uLocal_1396))
								{
									__LIB_5__::func_107(&uLocal_1396);
								}
								else if (__LIB_18__::func_398(&uLocal_1396) > 1500)
								{
									StringCopy(&cVar0, "CAUNC_KNOCK", 24);
									if (__LIB_1__::func_104(&uLocal_1286, cVar0, 0, -1, 0, 0))
									{
										func_236(256);
										__LIB_2__::func_608(&uLocal_1396);
										_NAMESPACE29::_0x0EABF182FBB63D72(iLocal_22, 6, 0);
										WEAPON::_HIDE_PED_WEAPONS(iLocal_22, 2, false);
									}
								}
							}
							else
							{
								func_236(256);
								__LIB_2__::func_608(&uLocal_1396);
							}
						}
					}
					Jump @2143; //curOff = 1944
					if (MAP::DOES_BLIP_EXIST(iLocal_52))
					{
						MAP::REMOVE_BLIP(&iLocal_52);
					}
					if (!func_232(256))
					{
						if (func_229(65536))
						{
							if (__LIB_1__::func_205(iLocal_22, iLocal_910, 1, 0))
							{
								if (!__LIB_2__::func_618(&uLocal_1396))
								{
									__LIB_5__::func_107(&uLocal_1396);
								}
								else if (__LIB_18__::func_398(&uLocal_1396) > 1500)
								{
									StringCopy(&cVar3, "CAUNC_KNOCK", 24);
									if (__LIB_1__::func_104(&uLocal_1286, cVar3, 0, -1, 0, 0))
									{
										func_236(256);
										__LIB_2__::func_608(&uLocal_1396);
										_NAMESPACE29::_0x0EABF182FBB63D72(iLocal_22, 6, 0);
										WEAPON::_HIDE_PED_WEAPONS(iLocal_22, 2, false);
									}
								}
							}
							else
							{
								func_236(256);
								__LIB_2__::func_608(&uLocal_1396);
							}
						}
					}
					Jump @2143; //curOff = 2105
					if (__LIB_0__::func_665(iLocal_25, Global_35, 1, 1) <= (150f - 5f))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_25, false);
						iLocal_73 = 0;
					}
				}
			}
			default:
				break;
	}
}

void func_264(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			if (!EVENT::_0x1D1B448D719415AB(uParam0->f_2[iVar0]))
			{
			}
			else if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar0], false, false), 1.5f, true, true) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar0], false, false), 1f, true))
			{
				if (func_659(uParam0, 60f, iVar0, 0, 1, 1))
				{
					EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
				}
				else
				{
					iVar1 = -1;
					iVar1 = EVENT::_0xAD17A18215DD23D6(uParam0->f_2[iVar0], 0, 0);
					if (iVar1 > -1)
					{
						if (iVar1 > 2000)
						{
							EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
						}
						else
						{
							iVar2 = EVENT::_0x796EECFF0C6D39BE(uParam0->f_2[iVar0], 0, 0);
							if (iVar2 != 0)
							{
								iVar3 = EVENT::_0x822A001BCEA5BD81(uParam0->f_2[iVar0], iVar2, 0, 0);
							}
							else
							{
								EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
							}
							else if (__LIB_11__::func_474(uParam0, iVar0))
							{
								if (iVar2 == joaat("EVENT_ANIMAL_DETECTED_THREAT") && !__LIB_0__::func_163(uParam0->f_2[iVar0], 713668775))
								{
									if (((ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3))) && !__LIB_0__::func_125(iVar3)) && !__LIB_4__::func_156(uParam0, 131072))
									{
										if (func_659(uParam0, 60f, iVar0, iVar3, 1, 0))
										{
											EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
										}
										else
										{
											Jump @401; //curOff = 382
											EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
											Jump @941; //curOff = 398
											Jump @420; //curOff = 401
											EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
											Jump @941; //curOff = 417
											if (iVar2 == joaat("EVENT_ANIMAL_DETECTED_THREAT"))
											{
												if (ENTITY::DOES_ENTITY_EXIST(iVar3))
												{
													if (ENTITY::IS_ENTITY_A_PED(iVar3))
													{
														if ((PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3)) || __LIB_0__::func_125(iVar3)) || __LIB_4__::func_156(uParam0, 131072))
														{
															EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
														}
														else
														{
															if (iVar2 == joaat("EVENT_DAMAGE"))
															{
																if (ENTITY::DOES_ENTITY_EXIST(iVar3))
																{
																	if (ENTITY::IS_ENTITY_AN_OBJECT(iVar3))
																	{
																		EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
																		Jump @941; //curOff = 546
																	}
																	else if (__LIB_11__::func_475(uParam0, &iVar3))
																	{
																		EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
																	}
																	else
																	{
																		Jump @607; //curOff = 579
																		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
																		{
																		}
																		else
																		{
																			vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar3, false, false) };
																		}
																		if (FLOCK::_0x8D913E493BAFE0A3(*uParam0) && iVar2 != joaat("EVENT_ON_FIRE"))
																		{
																			if (func_659(uParam0, 60f, iVar0, iVar3, 1, 0))
																			{
																				EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
																				Jump @941; //curOff = 663
																			}
																		else
																		{
																			}
																			else
																			{
																				Jump @927; //curOff = 672
																				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
																				{
																					TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_2[iVar0], ENTITY::GET_ENTITY_COORDS(iVar3, true, false), 2, 0, 60f, 10000, 0);
																					EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
																					Jump @941; //curOff = 728
																				}
																				else if (iVar2 == joaat("EVENT_ON_FIRE"))
																				{
																					uParam0->f_23[iVar0] = 10;
																					TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_2[iVar0], ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar0], true, false), 4, 0, 600f, -1, 0);
																					TASK::_0x3923EC958249657D(uParam0->f_2[iVar0], PLAYER::PLAYER_PED_ID(), -1082130432 /* Float: -1f */);
																					TASK::_0xE8F1A5B4CED3725A(uParam0->f_2[iVar0], uParam0->f_613, -1082130432 /* Float: -1f */);
																					EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
																					Jump @941; //curOff = 847
																				}
																				else
																				{
																					TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_2[iVar0], ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar0], true, false), 2, 0, 60f, 10000, 0);
																					TASK::_0x3923EC958249657D(uParam0->f_2[iVar0], PLAYER::PLAYER_PED_ID(), -1082130432 /* Float: -1f */);
																					EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
																				}
																				else
																				{
																					Jump @941; //curOff = 927
																					__LIB_13__::func_964(uParam0, iVar0, iParam1);
																				}
																			}
																			iVar0++;
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_269()
{
	if (iLocal_65 >= 7 && iLocal_65 != 9)
	{
		return true;
	}
	return false;
}

bool func_270(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[0], false))
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_27, iLocal_15[0]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_28, iLocal_15[0]))
		{
			func_667(uParam0);
			return true;
		}
		else if (iLocal_48 == 1)
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_15[0], "pl_QuickExit"))
			{
				if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_15[0], "pl_QuickExit") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_15[0], "pl_QuickExit"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_15[0], "pl_QuickExit", true);
				}
			}
			else
			{
				func_667(uParam0);
				return true;
			}
		}
		else if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_15[0], "pl_Breakout_NoiseReact"))
		{
			if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_15[0], "pl_Breakout_NoiseReact") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_15[0], "pl_Breakout_NoiseReact"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_15[0], "pl_Breakout_NoiseReact", true);
			}
		}
		else
		{
			func_667(uParam0);
			return true;
		}
	}
	else
	{
		func_667(uParam0);
		return true;
	}
	return false;
}

void func_271()
{
	switch (iLocal_75)
	{
		case 0:
			if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_22, vLocal_929, 1f, -1, 0.25f, 0, 40000f);
				iLocal_75 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_163(iLocal_22, 713668775))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_22, vLocal_929, 1f, -1, 0.25f, 0, 40000f);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_912))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_22, iLocal_912, true, 0))
				{
					PED::_0x58F7DB5BD8FA2288(iLocal_22);
					iLocal_75 = 2;
				}
			}
			break;
		case 2:
			break;
	}
}

void func_273()
{
	vector3 vVar0[24];
	StringCopy(&cVar0, "", 24);
	switch (iLocal_58)
	{
		case 0:
			if (!__LIB_2__::func_618(&uLocal_59) && !AUDIO::_0x1ECC76792F661CF5(&cLocal_62))
			{
				__LIB_5__::func_107(&uLocal_59);
			}
			else if (__LIB_2__::func_618(&uLocal_59))
			{
				if (__LIB_5__::func_51(&uLocal_59) > 0.5f && !AUDIO::_0xA2CAC9DEF0195E6F(1))
				{
					StringCopy(&cVar0, "CAUNC_WAIT1", 24);
					if (__LIB_1__::func_104(&uLocal_1286, cVar0, 0, -1, 0, 0))
					{
						cLocal_62 = { cVar0 };
						iLocal_58 = 1;
						__LIB_2__::func_608(&uLocal_59);
					}
				}
			}
			break;
		case 1:
			if (!__LIB_2__::func_618(&uLocal_59))
			{
				__LIB_5__::func_107(&uLocal_59);
			}
			else if (__LIB_2__::func_618(&uLocal_59))
			{
				if (__LIB_5__::func_51(&uLocal_59) > 1f && !AUDIO::_0xA2CAC9DEF0195E6F(1))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[0], false))
					{
						if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_15[0], "pl_Convo_LockPick_01"))
						{
							if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_15[0], "pl_Convo_LockPick_01") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_15[0], "pl_Convo_LockPick_01"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_15[0], "pl_Convo_LockPick_01", true);
							}
						}
						else
						{
							StringCopy(&cVar0, "CAUNC_IG1", 24);
							cLocal_62 = { cVar0 };
							iLocal_58 = 2;
							__LIB_2__::func_608(&uLocal_59);
						}
					}
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[0]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_15[0], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_15[0]);
			}
			else if (func_303(0, 0, "pl_Idle_base"))
			{
				if (!func_634())
				{
				}
			}
			if (!__LIB_2__::func_618(&uLocal_59) && !AUDIO::_0x1ECC76792F661CF5(&cLocal_62))
			{
				__LIB_5__::func_107(&uLocal_59);
			}
			else if (__LIB_2__::func_618(&uLocal_59))
			{
				if (__LIB_5__::func_51(&uLocal_59) > 2.5f && !AUDIO::_0xA2CAC9DEF0195E6F(1))
				{
					StringCopy(&cVar0, "CAUNC_WAIT2", 24);
					if (__LIB_1__::func_104(&uLocal_1286, cVar0, 0, -1, 0, 0))
					{
						cLocal_62 = { cVar0 };
						iLocal_58 = 3;
						__LIB_0__::func_745(4);
						func_668(4);
						__LIB_2__::func_608(&uLocal_59);
					}
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[0]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_15[0], false))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_15[0]);
				}
				else if (func_303(0, 0, "pl_Idle_base"))
				{
					if (!func_634())
					{
					}
				}
			}
			break;
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[0]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_15[0], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_15[0]);
			}
			else if (func_303(0, 0, "pl_Idle_base"))
			{
				if (!func_634())
				{
				}
			}
			if (!__LIB_2__::func_618(&uLocal_59) && !AUDIO::_0x1ECC76792F661CF5(&cLocal_62))
			{
				__LIB_5__::func_107(&uLocal_59);
			}
			else if (__LIB_2__::func_618(&uLocal_59))
			{
				if (__LIB_5__::func_51(&uLocal_59) > 2.5f && !AUDIO::_0xA2CAC9DEF0195E6F(1))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[0], false))
					{
						if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_15[0], "pl_Convo_LockPick_02"))
						{
							if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_15[0], "pl_Convo_LockPick_02") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_15[0], "pl_Convo_LockPick_02"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_15[0], "pl_Convo_LockPick_02", true);
							}
						}
						else
						{
							StringCopy(&cLocal_62, "CAUNC_IG2", 24);
							iLocal_58 = 4;
							__LIB_2__::func_608(&uLocal_59);
						}
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[0]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_15[0], false))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_15[0]);
					}
					else if (func_303(0, 0, "pl_Idle_base"))
					{
						if (!func_634())
						{
						}
					}
				}
			}
			break;
		case 4:
			if (!__LIB_2__::func_618(&uLocal_59) && !AUDIO::_0x1ECC76792F661CF5(&cLocal_62))
			{
				__LIB_5__::func_107(&uLocal_59);
			}
			else if (__LIB_2__::func_618(&uLocal_59))
			{
				if (__LIB_5__::func_51(&uLocal_59) > 20f && !AUDIO::_0xA2CAC9DEF0195E6F(1))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[0], false))
					{
						if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_15[0], "pl_LockPick_Success"))
						{
							if (!__LIB_9__::func_754(&(Local_1414[0 /*21*/])) && !__LIB_9__::func_754(&(Local_1436[0 /*21*/])))
							{
								if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_15[0], "pl_LockPick_Success") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_15[0], "pl_LockPick_Success"))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_15[0], "pl_LockPick_Success", true);
									__LIB_2__::func_624(&Local_1458, 0, 0, 1, 0);
									__LIB_2__::func_624(&Local_1476, 0, 0, 1, 0);
								}
							}
						}
						else if (AUDIO::_0x1ECC76792F661CF5("CAUNC_IG5") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("CAUNC_IG5") >= 1)
						{
							if (!func_229(512))
							{
								func_231(512);
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_920))
								{
									PHYSICS::SET_DISABLE_BREAKING(iLocal_920, false);
									PHYSICS::SET_DISABLE_FRAG_DAMAGE(iLocal_920, false);
									OBJECT::_0xE7E4C198B0185900(iLocal_920, 0, false);
									OBJECT::_0xE7E4C198B0185900(iLocal_920, 1, false);
								}
								if (__LIB_0__::func_30(iLocal_1158))
								{
									__LIB_3__::func_124(iLocal_1158, 1);
								}
								if (__LIB_0__::func_30(iLocal_1159))
								{
									__LIB_3__::func_124(iLocal_1159, 1);
								}
							}
						}
						else if (!AUDIO::_0x1ECC76792F661CF5("CAUNC_IG5"))
						{
							func_236(128);
							iLocal_58 = 5;
							__LIB_2__::func_608(&uLocal_59);
						}
					}
				}
			}
			break;
		case 5:
			if (!__LIB_2__::func_618(&uLocal_59) && !AUDIO::_0x1ECC76792F661CF5(&cLocal_62))
			{
				__LIB_5__::func_107(&uLocal_59);
			}
			else if (__LIB_2__::func_618(&uLocal_59))
			{
				if (__LIB_5__::func_51(&uLocal_59) > 3f && !AUDIO::_0xA2CAC9DEF0195E6F(1))
				{
					StringCopy(&cVar0, "CAUNC_WAIT3", 24);
					if (__LIB_1__::func_104(&uLocal_1286, cVar0, 0, -1, 0, 0))
					{
						cLocal_62 = { cVar0 };
						iLocal_58 = 6;
						__LIB_2__::func_608(&uLocal_59);
					}
				}
			}
			break;
		case 6:
			if (!__LIB_2__::func_618(&uLocal_59) && !AUDIO::_0x1ECC76792F661CF5(&cLocal_62))
			{
				__LIB_5__::func_107(&uLocal_59);
			}
			else if (__LIB_2__::func_618(&uLocal_59))
			{
				if (__LIB_5__::func_51(&uLocal_59) > 2f && !AUDIO::_0xA2CAC9DEF0195E6F(1))
				{
					StringCopy(&cVar0, "CAUNC_WAIT4", 24);
					if (__LIB_1__::func_104(&uLocal_1286, cVar0, 0, -1, 0, 0))
					{
						cLocal_62 = { cVar0 };
						iLocal_58 = 8;
						__LIB_2__::func_608(&uLocal_59);
					}
				}
			}
			break;
	}
}

void func_274(var uParam0)
{
	int iVar0;
	iVar0 = -1;
	if (__LIB_0__::func_272(iLocal_22, 0))
	{
		if ((((iLocal_58 == 8 && iLocal_65 != 2) && iLocal_65 != 5) && iLocal_65 != 6) && iLocal_65 != 9)
		{
			func_281();
		}
		else
		{
			switch (iLocal_76)
			{
				case 2:
					if (iLocal_58 > 0)
					{
						if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_1264))
						{
							iLocal_1264 = TASK::ADD_COVER_POINT(vLocal_1265, fLocal_1268, 2, 0, 2, false);
						}
						else
						{
							if (!PED::_GET_PED_CROUCH_MOVEMENT(iLocal_22))
							{
								PED::_SET_PED_CROUCH_MOVEMENT(iLocal_22, true, 0, false);
							}
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_22, sLocal_1518, 11, 0, -1, 0, 0, -1);
							__LIB_0__::func_900(4);
							func_668(2);
							__LIB_19__::func_119(uParam0, func_241(2), func_241(4), 2, 4);
							iLocal_76 = 3;
						}
					}
					break;
				case 3:
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_22, 0) || __LIB_0__::func_163(iLocal_22, 658540077))
					{
						if (!PED::_GET_PED_CROUCH_MOVEMENT(iLocal_22))
						{
							PED::_SET_PED_CROUCH_MOVEMENT(iLocal_22, true, 0, false);
						}
						if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1518, ENTITY::GET_ENTITY_COORDS(iLocal_22, true, false), &iVar0))
						{
							if (!MAP::DOES_BLIP_EXIST(iLocal_50) && iLocal_58 > 2)
							{
								if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_904))
								{
									iLocal_904 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_986, vLocal_989, vLocal_992, "Player move up cover safe zone");
								}
							}
							if (iVar0 >= 22)
							{
								TASK::TASK_SEEK_COVER_TO_COVER_POINT(iLocal_22, iLocal_1264, vLocal_1269, -1, 0, 0, 0);
								iLocal_76 = 4;
							}
						}
					}
					else
					{
						if (!PED::_GET_PED_CROUCH_MOVEMENT(iLocal_22))
						{
							PED::_SET_PED_CROUCH_MOVEMENT(iLocal_22, true, 0, false);
						}
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_22, sLocal_1518, 0, 0, -1, 0, 0, -1);
					}
					break;
				case 4:
					if (!__LIB_0__::func_163(iLocal_22, -1716541277) && !PED::IS_PED_IN_COVER(iLocal_22, false, false))
					{
						iLocal_76 = 3;
					}
					else if (PED::IS_PED_IN_COVER(iLocal_22, false, false))
					{
						iLocal_76 = 5;
					}
					break;
				case 5:
					break;
				default:
					break;
			}
		}
	}
}

void func_275()
{
	switch (iLocal_82)
	{
		case 0:
			if (!__LIB_2__::func_618(&uLocal_1494))
			{
				__LIB_5__::func_107(&uLocal_1494);
			}
			else
			{
				if (!func_229(32768))
				{
					__LIB_1__::func_422("OBJ_CURU_COVER", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_231(32768);
					__LIB_2__::func_608(&uLocal_1494);
				}
				else if (__LIB_0__::func_94(Global_35, vLocal_980, 1) < fLocal_1497)
				{
					fLocal_1497 = __LIB_0__::func_94(Global_35, vLocal_980, 1);
					__LIB_5__::func_107(&uLocal_1494);
				}
				if (__LIB_5__::func_352("OBJ_CURU_COVER"))
				{
					func_231(32768);
					__LIB_2__::func_608(&uLocal_1494);
				}
			}
			break;
		case 1:
			if (!func_669())
			{
				if (!__LIB_2__::func_618(&uLocal_1494))
				{
					__LIB_5__::func_107(&uLocal_1494);
				}
				else if (__LIB_5__::func_51(&uLocal_1494) > 6f && !func_229(262144))
				{
					__LIB_1__::func_422("OBJ_CURU_STAY", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_231(262144);
				}
			}
			else if (__LIB_2__::func_618(&uLocal_1494))
			{
				__LIB_2__::func_608(&uLocal_1494);
			}
			if (__LIB_5__::func_352("OBJ_CURU_STAY"))
			{
				func_231(262144);
				__LIB_2__::func_608(&uLocal_1494);
			}
			break;
		case 2:
			if (!__LIB_2__::func_618(&uLocal_1494))
			{
				__LIB_5__::func_107(&uLocal_1494);
			}
			else
			{
				if ((__LIB_5__::func_51(&uLocal_1494) > 6f && !func_229(524288)) && __LIB_0__::func_665(Global_35, iLocal_22, 1, 1) >= (fLocal_1497 + 5f))
				{
					__LIB_1__::func_422("OBJ_CURU_FOLLOW", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_231(524288);
				}
				else if (__LIB_0__::func_665(Global_35, iLocal_22, 1, 1) < fLocal_1497)
				{
					fLocal_1497 = __LIB_0__::func_665(Global_35, iLocal_22, 1, 1);
					__LIB_5__::func_107(&uLocal_1494);
				}
				if (__LIB_5__::func_352("OBJ_CURU_FOLLOW"))
				{
					func_231(524288);
					__LIB_2__::func_608(&uLocal_1494);
				}
			}
			break;
		case 3:
			if (!__LIB_2__::func_618(&uLocal_1494))
			{
				__LIB_5__::func_107(&uLocal_1494);
			}
			else
			{
				if (!func_670())
				{
					if ((!func_229(1048576) && !AUDIO::_0x1ECC76792F661CF5("CAUNC_COVLEFT")) && __LIB_5__::func_53(&uLocal_1494) > 6f)
					{
						__LIB_1__::func_422("OBJ_CURU_COVROCK", 7500, 0, 1, 0, 0, -1, -1, 0);
						func_231(1048576);
					}
				}
				else if (__LIB_2__::func_618(&uLocal_1494))
				{
					__LIB_2__::func_608(&uLocal_1494);
				}
				if (__LIB_5__::func_352("OBJ_CURU_COVROCK"))
				{
					func_231(1048576);
					__LIB_2__::func_608(&uLocal_1494);
				}
			}
			break;
		case 4:
			if (iLocal_65 == 4 || iLocal_58 >= 4)
			{
				if (!func_229(2097152))
				{
					__LIB_1__::func_422("OBJ_CURU_RUSTLERS", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_231(2097152);
				}
			}
			if (__LIB_5__::func_352("OBJ_CURU_RUSTLERS"))
			{
				func_231(2097152);
			}
			break;
	}
}

void func_276()
{
	if ((!func_229(512) && !func_671(&iLocal_920)) && !func_672(iLocal_920))
	{
		if (!__LIB_13__::func_469(iLocal_1158))
		{
			__LIB_3__::func_123(iLocal_1158, 1);
		}
		else if ((__LIB_4__::func_195(iLocal_1158) > 0.02404f || __LIB_4__::func_195(iLocal_1158) < 0.024035f) && (ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_659(iLocal_1158, 0, 0)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(__LIB_3__::func_659(iLocal_1158, 0, 0), -1)))
		{
			if (!__LIB_2__::func_618(&uLocal_1162) || __LIB_18__::func_398(&uLocal_1162) > 1000)
			{
				__LIB_1__::func_948(iLocal_1158, 1, 0.024039f, 0, 0, 0f, 1, 1);
				__LIB_5__::func_107(&uLocal_1162);
			}
		}
		else if ((__LIB_4__::func_195(iLocal_1158) > 0.02404f || __LIB_4__::func_195(iLocal_1158) < 0.024035f) && (ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_659(iLocal_1158, 0, 0)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(__LIB_3__::func_659(iLocal_1158, 0, 0), -1)))
		{
		}
		if (!__LIB_13__::func_469(iLocal_1159))
		{
			__LIB_3__::func_123(iLocal_1159, 1);
		}
		else if (__LIB_4__::func_195(iLocal_1159) > 0.1f || __LIB_4__::func_195(iLocal_1159) < -0.1f)
		{
			__LIB_4__::func_213(iLocal_1159, 0f, 1);
		}
	}
}

bool func_277()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_911))
	{
		iLocal_911 = VOLUME::_CREATE_VOLUME_CYLINDER(711.3827f, -837.1169f, 50.80711f, 0f, 0f, 0f, 38.92466f, 40.62675f, 9.402658f);
	}
	else
	{
		func_676(&Local_96, &Global_35, 0);
		func_676(&Local_96, &iLocal_22, "UNCLE");
		__LIB_11__::func_488(&Local_96, iLocal_911, 0);
		__LIB_11__::func_472(&Local_96, 1, "CAUNC_HELPHERD", -1);
		__LIB_11__::func_472(&Local_96, 3, "CAUNC_NEWSTRAG", -1);
		__LIB_11__::func_472(&Local_96, 4, "CAUNC_TRAMPLE", -1);
		__LIB_11__::func_472(&Local_96, 5, "CAUNC_WAITHERD", -1);
		__LIB_11__::func_472(&Local_96, 2, "CAUNC_GETSTRAGG", -1);
		__LIB_11__::func_472(&Local_96, 6, "CAUNC_KILLONE", -1);
		__LIB_11__::func_472(&Local_96, 7, "CAUNC_KILLMULTI", -1);
		__LIB_18__::func_345(&Local_96, 0);
		__LIB_13__::func_974(&Local_96, 20f);
		__LIB_11__::func_473(&Local_96, 120f);
		__LIB_13__::func_955(&Local_96, 2);
		__LIB_13__::func_955(&Local_96, 8);
		PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), iLocal_23);
		return true;
	}
	return false;
}

void func_278(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_447))
			{
				TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iVar0], -1, uParam0->f_447, 1, 1);
			}
			else
			{
				TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iVar0], -1, 0, 1, 1);
			}
			uParam0->f_23[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_281()
{
	if (__LIB_0__::func_272(iLocal_22, 0))
	{
		switch (iLocal_77)
		{
			case 0:
				if (!__LIB_0__::func_163(iLocal_22, 716706914) && __LIB_0__::func_399(iLocal_22, 1, 0, 0) == joaat("WEAPON_UNARMED"))
				{
					TASK::TASK_SWAP_WEAPON(iLocal_22, 1, 0, 0, 0);
				}
				if (PED::_GET_PED_CROUCH_MOVEMENT(iLocal_22))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(iLocal_22, false, 0, false);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[0]))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_15[0], false))
					{
						iLocal_77 = 1;
					}
				}
				else
				{
					iLocal_77 = 1;
				}
				break;
			case 1:
				if (__LIB_0__::func_665(iLocal_22, iLocal_27, 1, 1) <= 20f || __LIB_0__::func_665(iLocal_22, iLocal_28, 1, 1) <= 20f)
				{
					iLocal_77 = 2;
				}
				if (__LIB_0__::func_272(iLocal_27, 0) && __LIB_0__::func_272(iLocal_27, 0))
				{
					if (PED::IS_PED_IN_COMBAT(iLocal_27, 0) || PED::IS_PED_IN_COMBAT(iLocal_28, 0))
					{
						iLocal_77 = 2;
					}
					else if (!__LIB_0__::func_163(iLocal_22, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_22, vLocal_929, 2f, 20000, 0.25f, 0, 40000f);
					}
				}
				break;
			case 2:
				if (!__LIB_0__::func_163(iLocal_22, 1120685857))
				{
					if (__LIB_0__::func_272(iLocal_27, 0))
					{
						PED::REGISTER_TARGET(iLocal_22, iLocal_27, 1);
					}
					if (__LIB_0__::func_272(iLocal_28, 0))
					{
						PED::REGISTER_TARGET(iLocal_22, iLocal_28, 1);
					}
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_22, vLocal_929, 200f, 0, 4);
				}
				break;
		}
	}
}

void func_282()
{
	vector3 vVar0[24];
	switch (iLocal_78)
	{
		case 0:
			func_303(1, 0, "pl_enter");
			if (!func_685())
			{
				if ((__LIB_0__::func_272(iLocal_22, 0) && PED::IS_PED_IN_GROUP(iLocal_22)) && PED::DOES_GROUP_EXIST(iLocal_95))
				{
					__LIB_1__::func_640(4);
					PED::REMOVE_PED_FROM_GROUP(iLocal_22);
				}
				if (__LIB_0__::func_163(iLocal_22, -2117564886))
				{
					TASK::CLEAR_PED_TASKS(iLocal_22, true, false);
				}
				if (PED::_GET_PED_CROUCH_MOVEMENT(iLocal_22))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(iLocal_22, false, 0, false);
				}
				if (PED::IS_PED_ON_MOUNT(iLocal_22) && !__LIB_0__::func_163(iLocal_22, 501393341))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iLocal_22, 0, 0, 0, 0, 0);
				}
				else if (!__LIB_0__::func_163(iLocal_22, 501393341))
				{
					if (__LIB_0__::func_399(iLocal_22, 1, 0, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_399(iLocal_22, 1, 1, 0) != joaat("WEAPON_UNARMED"))
					{
						if (!__LIB_2__::func_618(&uLocal_1402))
						{
							WEAPON::_HIDE_PED_WEAPONS(iLocal_22, 2, false);
							TASK::TASK_SWAP_WEAPON(iLocal_22, 0, 0, 0, 0);
							__LIB_5__::func_107(&uLocal_1402);
						}
						else if (__LIB_5__::func_28(&uLocal_1402) > 2000)
						{
							WEAPON::_HIDE_PED_WEAPONS(iLocal_22, 2, false);
							TASK::TASK_SWAP_WEAPON(iLocal_22, 0, 0, 0, 0);
							__LIB_5__::func_107(&uLocal_1402);
						}
					}
					else if (func_303(1, 0, "pl_enter"))
					{
						func_687();
						PED::_0x58F7DB5BD8FA2288(iLocal_22);
						TASK::TASK_ENTER_ANIM_SCENE(iLocal_22, iLocal_15[1], "Uncle", "pl_enter", 5.05f, 1, 0, 20000, -1082130432 /* Float: -1f */);
						iLocal_78 = 1;
					}
				}
			}
			else
			{
				if (__LIB_0__::func_163(iLocal_22, -2117564886))
				{
					TASK::CLEAR_PED_TASKS(iLocal_22, true, false);
				}
				if (!bLocal_1165)
				{
					PED::_0x89F5E7ADECCCB49C(iLocal_22, "Stealth");
					TASK::TASK_TURN_PED_TO_FACE_COORD(iLocal_22, vLocal_921, 0);
					bLocal_1165 = true;
				}
			}
			break;
		case 1:
			func_303(1, 0, "pl_enter");
			if (ANIMSCENE::_0x337F1CC8EE895601(iLocal_15[1], "Uncle"))
			{
				iLocal_78 = 2;
			}
			else if (!__LIB_0__::func_163(iLocal_22, 1369124074) && !PED::IS_PED_ON_MOUNT(iLocal_22))
			{
				TASK::TASK_ENTER_ANIM_SCENE(iLocal_22, iLocal_15[1], "Uncle", "pl_enter", 5.05f, 1, 0, 20000, -1082130432 /* Float: -1f */);
			}
			else if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_22, true) && !__LIB_0__::func_163(iLocal_22, 501393341))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_22, 167, false);
				TASK::TASK_DISMOUNT_ANIMAL(iLocal_22, 0, 0, 0, 0, 0);
			}
			if (iLocal_14 == 9)
			{
				iLocal_78 = 2;
			}
			break;
		case 2:
			if (iLocal_14 == 9)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[1], false))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_15[1], "pl_Lockpick_sucess_Exit"))
					{
						if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_15[1], "pl_Lockpick_sucess_Exit") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_15[1], "pl_Lockpick_sucess_Exit"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_15[1], "pl_Lockpick_sucess_Exit", true);
						}
					}
					else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_15[1]) > 0.98f)
					{
						iLocal_78 = 3;
					}
				}
				else
				{
					iLocal_78 = 3;
				}
			}
			else if (!func_232(16384))
			{
				if (bLocal_1285)
				{
					StringCopy(&cVar0, "CAUNC_IG8_ALT", 24);
					if (__LIB_1__::func_104(&uLocal_1286, cVar0, 0, -1, 0, 0))
					{
						func_236(16384);
					}
				}
				else
				{
					StringCopy(&cVar0, "CAUNC_IG8", 24);
					if (__LIB_1__::func_104(&uLocal_1286, cVar0, 0, -1, 0, 0))
					{
						func_236(16384);
					}
				}
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_22) && !PED::IS_PED_ON_MOUNT(iLocal_22))
			{
				iLocal_78 = 4;
			}
			break;
		case 4:
			if (iLocal_73 == 6)
			{
				if (iLocal_73 == 6 && !func_229(2048))
				{
					PED::REGISTER_TARGET(iLocal_22, iLocal_25, 1);
					func_231(2048);
				}
				if (!__LIB_0__::func_163(iLocal_22, -2117564886))
				{
					TASK::TASK_COMBAT_HATED_TARGETS(iLocal_22, -1f);
				}
			}
			else
			{
				if ((__LIB_0__::func_272(iLocal_22, 0) && PED::IS_PED_IN_GROUP(iLocal_22)) && PED::DOES_GROUP_EXIST(iLocal_95))
				{
					__LIB_1__::func_640(4);
					PED::REMOVE_PED_FROM_GROUP(iLocal_22);
				}
				if (__LIB_0__::func_94(iLocal_22, 2253.25f, -100.47f, 44.73f, 1) >= 2f && !__LIB_0__::func_163(iLocal_22, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_22, 2253.25f, -100.47f, 44.73f, 1.5f, 60000, 0.25f, 131072, 40000f);
				}
				else if (__LIB_0__::func_94(iLocal_22, 2253.25f, -100.47f, 44.73f, 1) < 2f && !__LIB_0__::func_163(iLocal_22, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_22, Global_35, 0, -1f, -1f, -1f);
				}
			}
			break;
	}
}

bool func_286()
{
	if (func_251())
	{
		if (func_671(&iLocal_920) || func_672(iLocal_920))
		{
			if (__LIB_0__::func_30(iLocal_1158))
			{
				__LIB_3__::func_124(iLocal_1158, 1);
			}
			if (__LIB_0__::func_30(iLocal_1159))
			{
				__LIB_3__::func_124(iLocal_1159, 1);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_899))
			{
				POPULATION::_0x74C2B3DC0B294102(iLocal_899);
				POPULATION::_0xA1CFB35069D23C23(iLocal_899);
				__LIB_0__::func_172(iLocal_899);
			}
			func_231(536870912);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_920))
			{
				OBJECT::SET_OBJECT_TARGETTABLE(iLocal_920, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_925))
			{
				if (ENTITY::_IS_ENTITY_FROZEN(iLocal_925))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_925, false);
				}
				PHYSICS::SET_DISABLE_BREAKING(iLocal_925, false);
				ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_925, 3, 0f, 0f, -3f, 0f, 0f, 0f, 0, true, true, true, false, true);
			}
			return true;
		}
		else
		{
			if (__LIB_0__::func_30(iLocal_1158) && !__LIB_2__::func_769(iLocal_1158))
			{
				__LIB_3__::func_123(iLocal_1158, 1);
			}
			if (__LIB_0__::func_30(iLocal_1159) && !__LIB_2__::func_769(iLocal_1159))
			{
				__LIB_3__::func_123(iLocal_1159, 1);
			}
		}
	}
	return false;
}

void func_291()
{
	float fVar0;
	float fVar1;
	if (!func_229(256))
	{
		if (__LIB_0__::func_30(iLocal_1158) && __LIB_2__::func_986(iLocal_1158))
		{
			fVar0 = __LIB_4__::func_195(iLocal_1158);
			if (fVar0 >= 1f)
			{
				__LIB_11__::func_228(iLocal_1158, 1f, 1);
				func_231(256);
			}
			else if (fVar0 <= -1f)
			{
				__LIB_11__::func_228(iLocal_1158, -1f, 1);
				func_231(256);
			}
		}
	}
	if (!func_229(1073741824 /* Float: 2f */))
	{
		if (__LIB_0__::func_30(iLocal_1159) && __LIB_2__::func_986(iLocal_1159))
		{
			fVar1 = __LIB_4__::func_195(iLocal_1159);
			if (fVar1 >= 1f)
			{
				__LIB_11__::func_228(iLocal_1159, 1f, 1);
				func_231(1073741824 /* Float: 2f */);
			}
			else if (fVar1 <= -1f)
			{
				__LIB_11__::func_228(iLocal_1159, -1f, 1);
				func_231(1073741824 /* Float: 2f */);
			}
		}
	}
}

void func_292()
{
	vector3 vVar0[24];
	if (func_690())
	{
		if (iLocal_73 == 6 && !func_229(2048))
		{
			PED::REGISTER_TARGET(iLocal_22, iLocal_25, 1);
			func_231(2048);
		}
		if (!__LIB_0__::func_163(iLocal_22, -2117564886))
		{
			TASK::TASK_COMBAT_HATED_TARGETS(iLocal_22, -1f);
		}
	}
	else if (!__LIB_13__::func_969(&Local_96))
	{
		switch (iLocal_79)
		{
			case 0:
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_22, -1))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[1], false))
					{
						if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_15[1], "pl_Lockpick_sucess_Exit"))
						{
							if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_15[1], "pl_Lockpick_sucess_Exit") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_15[1], "pl_Lockpick_sucess_Exit"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_15[1], "pl_Lockpick_sucess_Exit", true);
							}
						}
						else
						{
							if (!func_232(1024))
							{
								if (!func_232(4096))
								{
									if (func_229(536870912))
									{
										StringCopy(&cVar0, "CAUNC_SHOTLOCK", 24);
										if (__LIB_1__::func_104(&uLocal_1286, cVar0, 0, -1, 0, 0))
										{
											func_236(4096);
										}
									}
									else
									{
										func_236(4096);
									}
								}
								else if (!__LIB_5__::func_259("CAUNC_SHOTLOCK") && !__LIB_1__::func_322("CAUNC_SHOTLOCK"))
								{
									StringCopy(&cVar0, "CAUNC_WAITGATH", 24);
									if (__LIB_1__::func_104(&uLocal_1286, cVar0, 0, -1, 0, 0))
									{
										func_236(1024);
									}
								}
							}
							if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_15[1]) > 0.99f)
							{
								ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_15[1]);
							}
						}
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[1]))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_15[1]);
					}
				}
				else if (!func_232(1024))
				{
					if (!__LIB_2__::func_618(&uLocal_1399))
					{
						__LIB_5__::func_107(&uLocal_1399);
					}
					else if (__LIB_18__::func_398(&uLocal_1399) > 2000)
					{
						StringCopy(&cVar0, "CAUNC_WAITGATH", 24);
						if (__LIB_1__::func_104(&uLocal_1286, cVar0, 0, -1, 0, 0))
						{
							func_236(1024);
							__LIB_2__::func_608(&uLocal_1399);
						}
					}
				}
				else
				{
					iLocal_79 = 1;
					PED::_0x58F7DB5BD8FA2288(iLocal_22);
				}
				break;
			case 1:
				if (__LIB_0__::func_272(iLocal_22, 0) && !__LIB_0__::func_272(iLocal_23, 0))
				{
					if (PED::IS_PED_ON_MOUNT(iLocal_22))
					{
						iLocal_23 = PED::GET_MOUNT(iLocal_22);
					}
					else
					{
						func_595(4, 1, 1, 0, 0, 0, 0, 0);
						iLocal_23 = func_596(4, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_23))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_23, true);
						}
					}
				}
				else if ((((__LIB_0__::func_272(iLocal_22, 0) && __LIB_0__::func_272(iLocal_23, 0)) && __LIB_0__::func_272(iLocal_24, 0)) && !__LIB_0__::func_163(iLocal_23, 2043986356)) && !PED::IS_PED_ON_MOUNT(iLocal_22))
				{
					TASK::TASK_GO_TO_WHISTLE(iLocal_23, iLocal_22, 0);
					if ((!__LIB_0__::func_163(iLocal_24, 2043986356) && !__LIB_0__::func_163(iLocal_24, 713668775)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_24, vLocal_1002, 2f, 2f, 3f, false, true, 0))
					{
						TASK::TASK_GO_TO_WHISTLE(iLocal_24, iLocal_22, 0);
					}
					if (__LIB_0__::func_665(iLocal_23, iLocal_22, 1, 1) > 10f)
					{
						__LIB_1__::func_326(iLocal_22, 869278708, joaat("STEALTH"));
					}
				}
				else if ((((__LIB_0__::func_272(iLocal_22, 0) && __LIB_0__::func_272(iLocal_23, 0)) && !PED::IS_PED_ON_MOUNT(iLocal_22)) && __LIB_0__::func_665(iLocal_22, iLocal_23, 1, 1) <= 10f) && !__LIB_0__::func_163(iLocal_22, 1868526510))
				{
					TASK::TASK_MOUNT_ANIMAL(iLocal_22, iLocal_23, 20000, -1, 2f, 1, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_24, vLocal_1002, 1.25f, 20000, 0.25f, 0, 40000f);
				}
				else if (((((__LIB_0__::func_272(iLocal_22, 0) && __LIB_0__::func_272(iLocal_23, 0)) && !PED::IS_PED_ON_MOUNT(iLocal_22)) && __LIB_0__::func_163(iLocal_23, 2043986356)) && __LIB_0__::func_665(iLocal_22, iLocal_23, 1, 1) > 10f) && !__LIB_0__::func_163(iLocal_22, 1227113341))
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_22, iLocal_23, 60000, 0.5f, 1.5f, 2f, 0);
				}
				else if ((__LIB_0__::func_272(iLocal_22, 0) && __LIB_0__::func_272(iLocal_23, 0)) && PED::IS_PED_ON_MOUNT(iLocal_22))
				{
					iLocal_79 = 2;
				}
				break;
			case 2:
				if (((__LIB_0__::func_272(iLocal_22, 0) && __LIB_0__::func_272(iLocal_23, 0)) && !PED::IS_PED_ON_MOUNT(iLocal_22)) && !__LIB_0__::func_163(iLocal_22, 1868526510))
				{
					TASK::TASK_MOUNT_ANIMAL(iLocal_22, iLocal_23, 20000, -1, 2f, 1, 0, 0);
				}
				else if ((((__LIB_0__::func_272(iLocal_22, 0) && __LIB_0__::func_272(iLocal_23, 0)) && PED::IS_PED_ON_MOUNT(iLocal_22)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_22, vLocal_1005, 2f, 2f, 3f, false, true, 0)) && !__LIB_0__::func_163(iLocal_22, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_22, vLocal_1005, 1f, 20000, 0.25f, 0, 40000f);
					Local_1520.f_3 = __LIB_13__::func_957(&Local_96, iLocal_22);
					Local_1520.f_7 = -1;
					Local_1520.f_20 = 4;
					Local_1520.f_19 = 4;
					Local_1520.f_17 = 0;
					Local_1520.f_18 = 0;
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_22, &Local_1520);
				}
				if (iLocal_14 >= 10)
				{
					iLocal_79 = 4;
				}
				break;
			case 4:
				if (((__LIB_0__::func_272(iLocal_22, 0) && __LIB_0__::func_272(iLocal_23, 0)) && !PED::IS_PED_ON_MOUNT(iLocal_22)) && !__LIB_0__::func_163(iLocal_22, 1868526510))
				{
					TASK::TASK_MOUNT_ANIMAL(iLocal_22, iLocal_23, 20000, -1, 2f, 1, 0, 0);
				}
				break;
		}
	}
}

bool func_294(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]) && ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_2[iVar0], *iParam1, false, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_295(var uParam0)
{
	if (uParam0->f_189 >= 4)
	{
		return true;
	}
	return false;
}

bool func_296(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	float fVar9;
	int iVar10;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;
	int iVar20;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;
	int iVar30;
	vector3 vVar31;
	vector3 vVar34;
	vector3 vVar37;
	if (uParam0->f_209 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (uParam0->f_190[iVar0 /*9*/] == 0 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_190[iVar0 /*9*/].f_2))
			{
				uParam0->f_209 = iVar0;
			}
			iVar0++;
		}
		if (uParam0->f_209 == -1)
		{
			return false;
		}
	}
	if (!FLOCK::_0x8D913E493BAFE0A3(*uParam0))
	{
		return false;
	}
	if (uParam0->f_189 >= 5)
	{
		return true;
	}
	uParam0->f_613 = { __LIB_11__::func_467(uParam0, 0) };
	if (__LIB_4__::func_156(uParam0, 2))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam1))
		{
			vVar5 = { VOLUME::_GET_VOLUME_COORDS(iParam1) };
		}
		else
		{
			vVar5 = { uParam0->f_613 };
		}
		vVar2 = { TASK::_0x91CB5E431F579BA1(TASK::_0x152664AA3188B193(vVar5, 250f, 2, 0)) };
		if (__LIB_0__::func_86(vVar2))
		{
		}
	}
	else
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(uParam0->f_652, 0, &vVar2);
	}
	func_694(uParam0);
	func_695(uParam0);
	iVar8 = 0;
	fVar9 = 0f;
	if (uParam0->f_189 == 4)
	{
		func_696(uParam0);
	}
	func_697(uParam0, vVar2);
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]))
		{
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar1]) && uParam0->f_691 == 1)
			{
				if (!__LIB_11__::func_476(uParam0, iVar1) && uParam0->f_23[iVar1] >= 2)
				{
					uParam0->f_358[iVar1] = MAP::_BLIP_ADD_FOR_ENTITY(-700928964, uParam0->f_2[iVar1]);
				}
				else
				{
					uParam0->f_358[iVar1] = MAP::_BLIP_ADD_FOR_ENTITY(-214162151, uParam0->f_2[iVar1]);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_358[iVar1], "HERDING_GTHILO");
				}
			}
			fVar9 = (fVar9 + 1f);
		}
		else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]) && MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar1]))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_358[iVar1]));
		}
		switch (uParam0->f_23[iVar1])
		{
			case 0:
				__LIB_13__::func_964(uParam0, iVar1, iParam1);
				break;
			case 1:
				if (!__LIB_2__::func_618(&(uParam0->f_65[iVar1 /*3*/])))
				{
					__LIB_5__::func_107(&(uParam0->f_65[iVar1 /*3*/]));
				}
				else if (IntToFloat(__LIB_5__::func_28(&(uParam0->f_65[iVar1 /*3*/]))) > uParam0->f_44[iVar1])
				{
					PED::_0x463803429297117C(uParam0->f_2[iVar1], ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, true, false), 3, 1);
					if (!__LIB_0__::func_163(uParam0->f_2[iVar1], 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_2[iVar1], vVar2, 1.5f, 90000, 0.25f, 5384192, 40000f);
					}
					if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar1]))
					{
						if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar1], -700928964))
						{
						}
					}
					uParam0->f_23[iVar1] = 2;
				}
				break;
			case 2:
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]))
				{
					if ((!__LIB_0__::func_163(uParam0->f_2[iVar1], 713668775) && !TASK::_0x0C3CB2E600C8977D(uParam0->f_2[iVar1], 1)) && __LIB_0__::func_94(uParam0->f_2[iVar1], vVar2, 1) > 6f)
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_2[iVar1], true, false);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_2[iVar1], vVar2, 1.5f, 90000, 0.25f, 5384192, 40000f);
					}
					else if (__LIB_0__::func_94(uParam0->f_2[iVar1], vVar2, 1) <= 3f && !__LIB_0__::func_163(uParam0->f_2[iVar1], 1139527981))
					{
						TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iVar1], -1, 0, 1, 1);
					}
					else if (__LIB_0__::func_163(uParam0->f_2[iVar1], 242628503))
					{
						PED::SET_PED_RESET_FLAG(uParam0->f_2[iVar1], 83, true);
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar1]) && ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]))
				{
					if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar1]))
					{
						FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iVar1]);
					}
				}
				break;
		}
		iVar1++;
	}
	switch (uParam0->f_189)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]))
				{
					if (!__LIB_0__::func_163(uParam0->f_2[iVar1], 518218985) && __LIB_0__::func_94(uParam0->f_2[iVar1], vVar2, 1) > 2f)
					{
						vVar11 = { 0f, 0f, 0f };
						iVar10 = 0;
						if (__LIB_13__::func_965(uParam0, iVar1, &vVar2, &vVar11, 0))
						{
							iVar10 = 1;
						}
						vVar17 = { vVar2 - ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar1], true, false) };
						vVar17 = { __LIB_0__::func_173(vVar17) };
						vVar14 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar1], true, false) - vVar17 * Vector(1f, 1f, 1f) };
						if (MISC::IS_BULLET_IN_AREA(vVar14, 2f, true))
						{
							iVar10 = 1;
						}
						if (iVar10 == 1)
						{
							if (uParam0->f_23[iVar1] < 1)
							{
								uParam0->f_23[iVar1] = 1;
								uParam0->f_44[iVar1] = ((BUILTIN::TO_FLOAT(iVar1) * 100f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 100f));
							}
							func_696(uParam0);
							uParam0->f_189 = 2;
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar1]) && ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]))
				{
					if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar1]))
					{
						FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iVar1]);
					}
				}
				iVar1++;
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]))
				{
					vVar21 = { 0f, 0f, 0f };
					iVar20 = 0;
					if (__LIB_13__::func_965(uParam0, iVar1, &vVar2, &vVar21, 0))
					{
						iVar20 = 1;
					}
					vVar27 = { vVar2 - ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar1], true, false) };
					vVar27 = { __LIB_0__::func_173(vVar27) };
					vVar24 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar1], true, false) - vVar27 * Vector(1f, 1f, 1f) };
					if (MISC::IS_BULLET_IN_AREA(vVar24, 2f, true))
					{
						iVar20 = 1;
					}
					if (iVar20 == 1)
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]) && uParam0->f_23[iVar1] < 1)
						{
							uParam0->f_23[iVar1] = 1;
							uParam0->f_44[iVar1] = ((BUILTIN::TO_FLOAT(iVar1) * 100f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 100f));
							func_696(uParam0);
						}
					}
					if (__LIB_0__::func_94(uParam0->f_2[iVar1], vVar2, 1) <= 8f || (VOLUME::_DOES_VOLUME_EXIST(iParam1) && !ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_2[iVar1], iParam1, true, 0)))
					{
						iVar8++;
					}
				}
				iVar1++;
			}
			if (IntToFloat(iVar8) >= (fVar9 / 4f))
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 20)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]) && uParam0->f_23[iVar1] < 1)
					{
						uParam0->f_23[iVar1] = 1;
						uParam0->f_44[iVar1] = ((BUILTIN::TO_FLOAT(iVar1) * 100f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 100f));
					}
					iVar1++;
				}
				uParam0->f_189 = 4;
			}
			break;
		case 4:
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]))
				{
					vVar31 = { 0f, 0f, 0f };
					iVar30 = 0;
					if (__LIB_13__::func_965(uParam0, iVar1, &vVar2, &vVar31, 0))
					{
						iVar30 = 1;
					}
					vVar37 = { vVar2 - ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar1], true, false) };
					vVar37 = { __LIB_0__::func_173(vVar37) };
					vVar34 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar1], true, false) - vVar37 * Vector(1f, 1f, 1f) };
					if (MISC::IS_BULLET_IN_AREA(vVar34, 2f, true))
					{
						iVar30 = 1;
					}
					if (iVar30 == 1)
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]) && uParam0->f_23[iVar1] < 1)
						{
							uParam0->f_23[iVar1] = 1;
							uParam0->f_44[iVar1] = ((BUILTIN::TO_FLOAT(iVar1) * 120f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 150f));
							func_696(uParam0);
						}
					}
					if (__LIB_0__::func_94(uParam0->f_2[iVar1], vVar2, 1) <= 8f)
					{
						iVar8++;
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar1]) && ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]))
				{
					if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar1]))
					{
						FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iVar1]);
					}
				}
				iVar1++;
			}
			if (IntToFloat(iVar8) >= fVar9)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 20)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]))
					{
						uParam0->f_23[iVar1] = 3;
					}
					iVar1++;
				}
				func_701(uParam0);
				__LIB_17__::func_785(&(uParam0->f_329), &(uParam0->f_311));
				uParam0->f_189 = 5;
				return true;
			}
			break;
	}
	return false;
}

void func_297(var uParam0, bool bParam1)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_350))
	{
		__LIB_1__::func_480(&(uParam0->f_350));
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			__LIB_1__::func_480(&(uParam0->f_2[iVar0]));
			EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
			__LIB_11__::func_477(uParam0, &(uParam0->f_2[iVar0]), bParam1);
			uParam0->f_23[iVar0] = 3;
		}
		iVar0++;
	}
	__LIB_17__::func_785(&(uParam0->f_329), &(uParam0->f_311));
}

void func_298(var uParam0, int iParam1)
{
	uParam0->f_612 = iParam1;
}

bool func_302()
{
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_31) && ENTITY::DOES_ENTITY_EXIST(iLocal_32)) && VOLUME::_DOES_VOLUME_EXIST(iLocal_915)) && VOLUME::_DOES_VOLUME_EXIST(iLocal_916))
	{
		return true;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_915))
	{
		iLocal_915 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 720.5015f, -834.5086f, 49.50018f, 0f, 0f, -30.7633f, 6.222975f, 3.511267f, 2.534181f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_916))
	{
		iLocal_916 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 710.6204f, -851.5604f, 51.15835f, 0f, 0f, -41.00056f, 31.65196f, 20.41077f, 5.893109f);
	}
	if (__LIB_2__::func_934(642, 1) && !__LIB_2__::func_763(642, 1))
	{
		if (__LIB_3__::func_397(642, 0))
		{
			iLocal_31 = __LIB_2__::func_965(642, 1, 0, 0, 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_31, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_31, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_31, joaat("REL_PLAYER_ALLY"));
		__LIB_4__::func_228(&uLocal_1226);
		__LIB_1__::func_392(&uLocal_1226, 0);
		__LIB_10__::func_590(&uLocal_1226, 1);
		__LIB_1__::func_393(&uLocal_1226, 1);
	}
	if (__LIB_2__::func_934(643, 1) && !__LIB_2__::func_763(643, 1))
	{
		if (__LIB_3__::func_397(643, 0))
		{
			iLocal_32 = __LIB_2__::func_965(643, 1, 0, 0, 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_32, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_32, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_32, joaat("REL_PLAYER_ALLY"));
	}
	return false;
}

bool func_303(int iParam0, int iParam1, char* sParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[iParam0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_15[iParam0], true, false))
		{
			return true;
		}
	}
	else
	{
		iLocal_15[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_712(iParam0), iParam1, sParam2, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[iParam0]))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_15[iParam0]);
		}
	}
	return false;
}

bool func_304()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[4]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_15[4], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[4], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[4], "CLAY", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[4], "CLAY", iLocal_31, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[4], "CLIVE", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[4], "CLIVE", iLocal_32, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_38))
		{
			iLocal_38 = __LIB_3__::func_136(iLocal_1161, 1);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_15[4], "p_door_clemens01", false)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_38))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[4], "p_door_clemens01", iLocal_38, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_39))
		{
			iLocal_39 = __LIB_3__::func_136(iLocal_1160, 1);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_15[4], "p_door_clemens02x", false)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_39))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[4], "p_door_clemens02x", iLocal_39, 0);
		}
		if (((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[4], "CLAY", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[4], "CLIVE", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_15[4], "p_door_clemens01", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_15[4], "p_door_clemens02x", false)))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_15[4]);
			return true;
		}
	}
	else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[4]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_15[4], true, false)) && (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[4], false) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_15[4], false)))
	{
		return true;
	}
	return false;
}

void func_307(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_23[iVar0] == 11)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_2[iVar0], true, false);
		}
		iVar0++;
	}
}

bool func_308(var uParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	if (!FLOCK::_0x8D913E493BAFE0A3(*uParam0))
	{
		return false;
	}
	if (uParam0->f_189 == 0)
	{
		uParam0->f_189 = 5;
	}
	__LIB_13__::func_981(uParam0);
	uParam0->f_613 = { __LIB_13__::func_935(uParam0) };
	if (uParam0->f_209 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (uParam0->f_190[iVar0 /*9*/] == 0 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_190[iVar0 /*9*/].f_2))
			{
				uParam0->f_209 = iVar0;
			}
			iVar0++;
		}
	}
	if (!__LIB_4__::func_156(uParam0, 2))
	{
		__LIB_13__::func_982(uParam0);
	}
	else
	{
		if (!FLOCK::_0x36486AF7DA93A464(*uParam0))
		{
			FLOCK::_0x6C57BEA886A20C6B(*uParam0, 1);
		}
		if (uParam0->f_209 != -1)
		{
			__LIB_13__::func_959(uParam0, __LIB_11__::func_481(&(uParam0->f_190[uParam0->f_209 /*9*/])));
		}
		__LIB_18__::func_734(uParam0);
	}
	func_264(uParam0, 0);
	func_749(uParam0, 1);
	func_694(uParam0);
	func_695(uParam0);
	if (!FLOCK::_0x8D913E493BAFE0A3(*uParam0))
	{
		*uParam0 = FLOCK::_CREATE_HERD();
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (__LIB_0__::func_272(uParam0->f_2[iVar1], 0))
		{
			if (((((!__LIB_0__::func_86(uParam0->f_613) && __LIB_0__::func_94(uParam0->f_2[iVar1], uParam0->f_613, 1) > 200f) && __LIB_0__::func_665(uParam0->f_2[iVar1], PLAYER::PLAYER_PED_ID(), 1, 1) > 125f) && ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_2[iVar1])) && uParam0->f_498 != iVar1) && uParam0->f_23[iVar1] != 10)
			{
				if (!FLOCK::_0x8D913E493BAFE0A3(*uParam0))
				{
					*uParam0 = FLOCK::_CREATE_HERD();
				}
				if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar1]))
				{
					FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iVar1]);
				}
				if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar1]))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_358[iVar1]));
				}
				PED::DELETE_PED(&(uParam0->f_2[iVar1]));
				if (uParam0->f_23[iVar1] != 14)
				{
					uParam0->f_23[iVar1] = 14;
				}
				if (uParam0->f_800 >= 3)
				{
					__LIB_13__::func_608(uParam0->f_799, 1);
					uParam0->f_800 = 1;
				}
			}
			else if ((!FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar1]) && uParam0->f_691 == 1) && uParam0->f_23[iVar1] == 3)
			{
				if (__LIB_11__::func_477(uParam0, &(uParam0->f_2[iVar1]), 0))
				{
				}
			}
			else if (__LIB_0__::func_163(uParam0->f_2[iVar1], -1846572487))
			{
				PED::SET_PED_RESET_FLAG(uParam0->f_2[iVar1], 83, true);
			}
			if (((((ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar1]) && FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar1])) && !MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar1])) && uParam0->f_691 == 1) && uParam0->f_23[iVar1] != 10) && !__LIB_4__::func_156(uParam0, 262144))
			{
				uParam0->f_358[iVar1] = MAP::_BLIP_ADD_FOR_ENTITY(-700928964, uParam0->f_2[iVar1]);
			}
			if (!__LIB_4__::func_156(uParam0, 2048))
			{
				__LIB_13__::func_939(uParam0, iVar1);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar1]) && ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]))
		{
			if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar1]))
			{
				FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iVar1]);
			}
			if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar1]))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_358[iVar1]));
			}
			if (uParam0->f_23[iVar1] != 14)
			{
				uParam0->f_23[iVar1] = 14;
			}
			sVar2 = __LIB_11__::func_460(uParam0);
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(uParam0->f_2[iVar1], MISC::GET_HASH_KEY(sVar2));
			__LIB_2__::func_788(&(uParam0->f_2[iVar1]), 1, 0, 1);
			if (uParam0->f_800 >= 3)
			{
				__LIB_13__::func_608(uParam0->f_799, 1);
				uParam0->f_800 = 1;
			}
		}
		iVar1++;
	}
	if (__LIB_4__::func_156(uParam0, 2048))
	{
		__LIB_13__::func_940(uParam0);
	}
	func_753(uParam0);
	__LIB_18__::func_357(uParam0, 0);
	__LIB_0__::func_11(uParam0);
	func_756(uParam0);
	__LIB_11__::func_479(uParam0);
	func_758(uParam0);
	__LIB_18__::func_360(uParam0);
	if (!__LIB_4__::func_156(uParam0, 2))
	{
		__LIB_18__::func_735(uParam0);
	}
	else
	{
		__LIB_18__::func_736(uParam0);
	}
	if (!__LIB_2__::func_618(&(uParam0->f_657)))
	{
		__LIB_5__::func_107(&(uParam0->f_657));
	}
	else if (__LIB_5__::func_28(&(uParam0->f_657)) < 250)
	{
		if (__LIB_11__::func_480(uParam0->f_625))
		{
			if (!__LIB_4__::func_156(uParam0, 2))
			{
				__LIB_13__::func_960(uParam0);
			}
			else
			{
				__LIB_13__::func_961(uParam0);
			}
		}
		if (__LIB_4__::func_156(uParam0, 2))
		{
			__LIB_18__::func_361(uParam0);
		}
	}
	else if (__LIB_5__::func_28(&(uParam0->f_657)) > 250)
	{
		func_766(uParam0);
		__LIB_18__::func_359(uParam0);
		if (__LIB_11__::func_480(uParam0->f_625))
		{
			if (!__LIB_4__::func_156(uParam0, 2))
			{
				__LIB_13__::func_960(uParam0);
			}
			else
			{
				__LIB_13__::func_961(uParam0);
			}
		}
		if (__LIB_4__::func_156(uParam0, 2))
		{
			__LIB_18__::func_361(uParam0);
		}
		uParam0->f_635 = 10;
		fVar3 = 14f;
		if (!__LIB_0__::func_86(uParam0->f_625))
		{
			if (!FLOCK::_0xD95F04A4E73BE85E(*uParam0, uParam0->f_1))
			{
				uParam0->f_1 = FLOCK::_0x09EE00B8F858E0BE(*uParam0, uParam0->f_625, 2.5f, 300f, fVar3);
				FLOCK::_0x17E3E5C46ECCD308(*uParam0, uParam0->f_1, uParam0->f_635);
			}
			else
			{
				FLOCK::_0xE36D2CB540597EF7(*uParam0, uParam0->f_1, uParam0->f_625, 2.5f, 300f, fVar3);
				FLOCK::_0x17E3E5C46ECCD308(*uParam0, uParam0->f_1, uParam0->f_635);
			}
		}
		uParam0->f_628 = { uParam0->f_625 };
		uParam0->f_625 = { 0f, 0f, 0f };
		uParam0->f_655 = 0.5f;
		__LIB_5__::func_107(&(uParam0->f_657));
	}
	fVar4 = __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], uParam0->f_613, 1);
	fVar4 = (fVar4 + 2f);
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_446))
	{
		uParam0->f_605 = { uParam0->f_613 };
		uParam0->f_446 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_605, 0f, 0f, 0f, fVar4, fVar4, 6f, "Herding avoidance cylinder");
		POPULATION::_0xB56D41A694E42E86(uParam0->f_446, 270336, 0, 0, -1, -1, 0);
	}
	else
	{
		uParam0->f_605 = { uParam0->f_613 };
		VOLUME::_SET_VOLUME_COORDS(uParam0->f_446, uParam0->f_605);
		VOLUME::_SET_VOLUME_SCALE(uParam0->f_446, fVar4, fVar4, 6f);
	}
	if (!__LIB_2__::func_618(&(uParam0->f_622)))
	{
		__LIB_5__::func_107(&(uParam0->f_622));
	}
	else if (__LIB_5__::func_28(&(uParam0->f_622)) >= 1000)
	{
		vVar5 = { __LIB_11__::func_467(uParam0, 1) };
		if (!__LIB_0__::func_86(uParam0->f_616))
		{
			uParam0->f_619 = { vVar5 - uParam0->f_616 / Vector(1f, 1f, 1f) };
		}
		else
		{
			uParam0->f_619 = { 0f, 0f, 0f };
		}
		uParam0->f_616 = { vVar5 };
		__LIB_5__::func_107(&(uParam0->f_622));
	}
	if (__LIB_18__::func_362(uParam0))
	{
		uParam0->f_189 = 8;
		return true;
	}
	return false;
}

bool func_310()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[4]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[4], false))
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_15[4], "pl_CloseGate"))
		{
			if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_15[4], "pl_CloseGate") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_15[4], "pl_CloseGate"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_15[4], "pl_CloseGate", true);
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_311(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_771(uParam0, iVar0, iParam1);
		iVar0++;
	}
}

bool func_312()
{
	char cVar0[32];
	vector3 vVar4[24];
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_22) && !ENTITY::IS_ENTITY_DEAD(iLocal_31))
	{
		switch (iLocal_81)
		{
			case 0:
				func_772();
				__LIB_18__::func_374(Global_35, vLocal_1039, &uLocal_1387, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 10f, 2f, 0, 0, 1, 1, 1);
				STREAMING::REQUEST_MODEL(iLocal_45, false);
				STREAMING::REQUEST_MODEL(iLocal_46, false);
				if (STREAMING::HAS_MODEL_LOADED(iLocal_45) && STREAMING::HAS_MODEL_LOADED(iLocal_46))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1787))
					{
						iLocal_1787 = OBJECT::CREATE_OBJECT(iLocal_45, vLocal_1789, true, true, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1787, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
					{
						iLocal_1788 = OBJECT::CREATE_OBJECT(iLocal_46, vLocal_1792, true, true, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1788, false);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1795))
					{
						iLocal_1795 = __LIB_3__::func_136(iLocal_1161, 1);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1796))
					{
						iLocal_1796 = __LIB_3__::func_136(iLocal_1160, 1);
					}
					if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_917))
					{
						iLocal_917 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(721.4719f, -833.0289f, 49.66586f, 0f, 0f, -29.50004f, 6.104838f, 3.532761f, 2.207704f, "No leadin nav task check");
					}
					if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_1787) && ENTITY::DOES_ENTITY_EXIST(iLocal_1788)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1795)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1796)) && VOLUME::_DOES_VOLUME_EXIST(iLocal_917))
					{
						__LIB_1__::func_772(&uLocal_1545, Global_35, 0, 0, 0, 0);
						__LIB_1__::func_772(&uLocal_1545, iLocal_22, 0, 0, 0, 0);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_31))
						{
							__LIB_1__::func_772(&uLocal_1545, iLocal_31, "CLAY", 0, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_32))
						{
							__LIB_1__::func_772(&uLocal_1545, iLocal_32, "CLIVE", 0, 0, 0);
						}
						func_311(&Local_96, Local_96.f_444);
						__LIB_1__::func_620(&uLocal_1545, iLocal_1787, "p_moneyStack01x", 0, 0, 0);
						__LIB_1__::func_620(&uLocal_1545, iLocal_1788, "p_cs_billSingle01x", 0, 0, 0);
						__LIB_1__::func_620(&uLocal_1545, iLocal_1795, "p_door_clemens01", 0, 0, 0);
						__LIB_1__::func_620(&uLocal_1545, iLocal_1796, "p_door_clemens02x", 0, 0, 0);
						__LIB_1__::func_595(&uLocal_1545);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_45);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_46);
						iLocal_81 = 1;
					}
				}
				break;
			case 1:
				func_772();
				__LIB_18__::func_374(Global_35, vLocal_1039, &uLocal_1387, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 10f, 2f, 0, 0, 1, 1, 1);
				__LIB_17__::func_759(&uLocal_1545, "CAUNC_RUST2_EXT", 1, 1);
				if (func_303(5, 0, "pl_base"))
				{
					if (func_777())
					{
						if (func_778())
						{
							__LIB_0__::func_325(&iLocal_50);
							iLocal_50 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_31);
							MAP::_BLIP_SET_MODIFIER(iLocal_50, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
							func_237("OBJ_CURU_PAY");
							fLocal_1497 = __LIB_0__::func_665(Global_35, iLocal_31, 1, 1);
							__LIB_18__::func_358(&Local_96, 0);
							PED::SET_PED_CONFIG_FLAG(iLocal_22, 167, false);
							__LIB_3__::func_123(iLocal_1160, 1);
							__LIB_3__::func_123(iLocal_1161, 1);
							iLocal_81 = 2;
						}
					}
				}
				break;
			case 2:
				func_772();
				__LIB_18__::func_374(Global_35, vLocal_1039, &uLocal_1387, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 10f, 2f, 0, 0, 1, 1, 1);
				__LIB_17__::func_759(&uLocal_1545, "CAUNC_RUST2_EXT", 1, 1);
				if (!func_229(33554432))
				{
					if (!__LIB_2__::func_618(&uLocal_1494))
					{
						__LIB_5__::func_107(&uLocal_1494);
					}
					else
					{
						if ((__LIB_5__::func_53(&uLocal_1494) > 6f && __LIB_0__::func_665(Global_35, iLocal_31, 1, 1) >= (fLocal_1497 + 2.5f)) || PED::IS_PED_STOPPED(Global_35))
						{
							__LIB_1__::func_422("OBJ_CURU_PAY", 7500, 0, 1, 0, 0, -1, -1, 0);
							func_231(33554432);
						}
						if (__LIB_0__::func_94(Global_35, vLocal_929, 1) < fLocal_1497)
						{
							fLocal_1497 = __LIB_0__::func_665(Global_35, iLocal_31, 1, 1);
							__LIB_5__::func_107(&uLocal_1494);
						}
					}
				}
				if (__LIB_13__::func_262(iLocal_31, 0, &uLocal_1226, &iLocal_1254, 0, 0))
				{
					iLocal_81 = 3;
				}
				if (__LIB_0__::func_665(Global_35, iLocal_31, 0, 1) <= 7f)
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
					{
						PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iLocal_31, "LSEM_LEADIN_ACTIVE", 0f, 0f, 0f, 0, "CAUNC_CONV");
						if (!__LIB_1__::func_205(Global_35, iLocal_917, 1, 0))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vLocal_1039, 1f, 20000, 0.25f, 0, 40000f);
						}
						iLocal_81 = 5;
					}
					else if (!__LIB_0__::func_163(Global_35, 501393341))
					{
						TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
					}
				}
				break;
			case 3:
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[5]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[5], false))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_15[5], "pl_exit_quick"))
					{
						if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_15[5], "pl_exit_quick") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_15[5], "pl_exit_quick"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_15[5], "pl_exit_quick", true);
						}
					}
					else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_15[5]) >= 0.95f)
					{
						iLocal_81 = 4;
					}
				}
				break;
			case 4:
				break;
			case 5:
				__LIB_17__::func_759(&uLocal_1545, "CAUNC_RUST2_EXT", 1, 1);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				HUD::_0xC9CAEAEEC1256E54(724769646);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[5]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[5], false))
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_15[5], "pl_greet"))
					{
						if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_15[5], "pl_greet") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_15[5], "pl_greet"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_15[5], "pl_greet", true);
						}
					}
					else
					{
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
						if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
						{
						}
						else if (!__LIB_0__::func_163(Global_35, 501393341))
						{
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
						}
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_15[5]) >= 0.98f)
						{
							if (__LIB_17__::func_759(&uLocal_1545, "CAUNC_RUST2_EXT", 1, 1))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_1787))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_1787, false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_1788, false);
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_23))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_23, 737.73f, -825.16f, 52.41f, 1f, 20000, 0.25f, 0, 40000f);
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_24))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_24, 733.64f, -822.87f, 51.78f, 1f, 20000, 0.25f, 0, 40000f);
								}
								__LIB_0__::func_325(&iLocal_50);
								__LIB_13__::func_937(&Local_96);
								PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "CAUNC_CONV");
								iLocal_81 = 6;
							}
						}
					}
				}
				break;
			case 6:
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				HUD::_0xC9CAEAEEC1256E54(724769646);
				if (__LIB_1__::func_563(&uLocal_1545))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						__LIB_8__::func_734(500, 1);
					}
				}
				StringCopy(&cVar0, "CAUNC_RUST2_EXT", 32);
				if (func_783(cVar0, &uLocal_1545))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						__LIB_8__::func_734(500, 1);
					}
					StringCopy(&cVar4, "CAUNC_THANKS", 24);
					if (__LIB_1__::func_104(&uLocal_1286, cVar4, 0, -1, 0, 0))
					{
						if (!__LIB_0__::func_163(iLocal_22, 1868526510) && !ENTITY::IS_ENTITY_DEAD(iLocal_23))
						{
							TASK::TASK_MOUNT_ANIMAL(iLocal_22, iLocal_23, 20000, -1, 2f, 1, 0, 0);
						}
						else if (ENTITY::IS_ENTITY_DEAD(iLocal_23))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_22, Global_35, 2000, -1f, -1f, -1f);
						}
						__LIB_1__::func_616(6000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
						__LIB_2__::func_753(642, 0, 1, 0, 0);
						__LIB_2__::func_753(643, 0, 1, 0, 0);
						iLocal_81 = 7;
					}
				}
				break;
			case 7:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_8__::func_734(500, 1);
				}
				else if (((!__LIB_1__::func_322("CAUNC_THANKS") && !__LIB_5__::func_259("CAUNC_THANKS")) && !__LIB_1__::func_322("CAUNC_THANKSJ")) && !__LIB_5__::func_259("CAUNC_THANKSJ"))
				{
					AUDIO::STOP_PED_SPEAKING(Global_35, false);
					iLocal_81 = 8;
				}
				break;
			case 8:
				return true;
		}
	}
	return false;
}

int func_317(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (__LIB_0__::func_287(iParam0, 2, 1))
			{
				__LIB_0__::func_290(iParam0, 2, 1);
			}
			if (__LIB_0__::func_273(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						__LIB_0__::func_288(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						__LIB_11__::func_616(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						__LIB_0__::func_712(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!__LIB_0__::func_287(iParam0, 44, 0))
			{
				__LIB_0__::func_288(iParam0, 44, 0);
			}
			if (__LIB_1__::func_466(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				__LIB_0__::func_201(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			__LIB_0__::func_290(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			__LIB_0__::func_707(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				__LIB_1__::func_296(iParam0, 0, 0, 1);
			}
			__LIB_0__::func_290(iParam0, 33, 1);
			__LIB_0__::func_290(iParam0, 34, 1);
			__LIB_0__::func_290(iParam0, 29, 1);
			if (!__LIB_0__::func_86(vVar0) && bParam7)
			{
				__LIB_0__::func_201(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_0__::func_712(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_652(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (__LIB_1__::func_201(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_1__::func_288(iParam0, iParam13, 0);
						__LIB_1__::func_558(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (__LIB_0__::func_287(iParam0, 25, 0))
						{
							__LIB_0__::func_290(iParam0, 25, 0);
						}
						__LIB_0__::func_288(iParam0, 66, 0);
						__LIB_0__::func_201(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					__LIB_0__::func_201(iParam0, 5);
				}
				__LIB_0__::func_288(iParam0, 28, 1);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				__LIB_0__::func_201(iParam0, 6);
			}
			break;
		case 6:
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					__LIB_1__::func_30(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					__LIB_0__::func_202(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			__LIB_0__::func_201(iParam0, 7);
		case 7:
			__LIB_0__::func_707(iParam0, bParam9, bParam15, 0);
			__LIB_0__::func_289(iParam0, 4, bParam11);
			__LIB_0__::func_706(iParam0);
			if (bParam20)
			{
				if (__LIB_0__::func_203(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			__LIB_1__::func_799(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			__LIB_0__::func_201(iParam0, 0);
			__LIB_0__::func_204(iParam0, 16, 1);
			__LIB_0__::func_290(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

bool func_319(var uParam0)
{
	char* sVar0;
	if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_43));
	}
	if (PED::_0x62DE46F061CAA468() <= 0)
	{
		PED::_0xED9582B3DA8F02B4(26);
	}
	else if (PED::_0x5C16855277819BBF() >= 26)
	{
		if (((((func_799() && func_800(uParam0->f_7)) && func_801(uParam0->f_7)) && func_802()) && func_803()) && func_804())
		{
			sVar0 = "ARTHUR";
			__LIB_0__::func_928(&uLocal_1286, Global_35, sVar0, 0);
			__LIB_0__::func_928(&uLocal_1286, iLocal_22, "UNCLE", 0);
			AUDIO::STOP_PED_SPEAKING(Global_35, true);
			iLocal_56 = __LIB_0__::func_17(-1536551334);
			Local_1498.f_5 = 3f;
			__LIB_4__::func_228(&uLocal_1170);
			__LIB_1__::func_396(&uLocal_1170, 1);
			__LIB_6__::func_905(&uLocal_1170);
			__LIB_1__::func_397(&uLocal_1170, 0);
			__LIB_1__::func_398(&uLocal_1198, 1);
			__LIB_1__::func_975(&uLocal_1170, 5f);
			__LIB_2__::func_906(&uLocal_1170, 75);
			__LIB_1__::func_399(&uLocal_1170, 0);
			__LIB_1__::func_400(&uLocal_1170, 1);
			__LIB_4__::func_228(&uLocal_1198);
			__LIB_1__::func_398(&uLocal_1198, 0);
			__LIB_1__::func_401(&uLocal_1198, 0);
			__LIB_1__::func_402(&uLocal_1198, 0);
			__LIB_1__::func_403(&uLocal_1198, 0);
			__LIB_1__::func_399(&uLocal_1198, 0);
			__LIB_1__::func_396(&uLocal_1198, 0);
			__LIB_1__::func_397(&uLocal_1198, 0);
			__LIB_1__::func_404(&uLocal_1198, 0);
			__LIB_1__::func_405(&uLocal_1198, 0);
			__LIB_1__::func_406(&uLocal_1198, 0);
			__LIB_1__::func_407(&uLocal_1198, 0);
			__LIB_1__::func_392(&uLocal_1198, 0);
			func_820();
			__LIB_13__::func_930(&Local_96, 50f);
			if (__LIB_0__::func_895(__LIB_1__::func_316(3, joaat("HAI_RUSTLING_02"))) >= 1)
			{
				bLocal_49 = true;
			}
			uLocal_1516 = GRAPHICS::_0xFA50F79257745E74(vLocal_986, 4f, 1, 45, 0);
			vLocal_1042[0 /*3*/] = { 1450.29f, -854.25f, 54.43f };
			vLocal_1042[1 /*3*/] = { 1453.36f, -853.94f, 54.04f };
			vLocal_1042[2 /*3*/] = { 1456.35f, -853.81f, 53.65f };
			vLocal_1042[3 /*3*/] = { 1459.51f, -853.64f, 53.29f };
			vLocal_1042[4 /*3*/] = { 1462.48f, -853.1f, 52.84f };
			vLocal_1042[5 /*3*/] = { 1465.15f, -852.64f, 52.58f };
			vLocal_1042[6 /*3*/] = { 1465.45f, -851.02f, 52.49f };
			vLocal_1042[7 /*3*/] = { 1463.96f, -848.4f, 52.54f };
			vLocal_1042[8 /*3*/] = { 1462.81f, -845.63f, 52.73f };
			vLocal_1042[9 /*3*/] = { 1461.81f, -843.14f, 52.55f };
			vLocal_1042[10 /*3*/] = { 1461.22f, -840.89f, 52.24f };
			vLocal_1042[11 /*3*/] = { 1460.5f, -838.33f, 51.98f };
			vLocal_1042[12 /*3*/] = { 1459.64f, -835.27f, 51.68f };
			vLocal_1042[13 /*3*/] = { 1458.76f, -832.34f, 51.57f };
			vLocal_1042[14 /*3*/] = { 1457.91f, -829.43f, 51.72f };
			vLocal_1042[15 /*3*/] = { 1457.02f, -826.41f, 51.9f };
			vLocal_1042[16 /*3*/] = { 1456.22f, -823.46f, 52.15f };
			vLocal_1042[17 /*3*/] = { 1455.19f, -820.49f, 52.29f };
			vLocal_1042[18 /*3*/] = { 1453.42f, -819.39f, 52.45f };
			vLocal_1042[19 /*3*/] = { 1450.56f, -819.5f, 52.8f };
			vLocal_1042[20 /*3*/] = { 1447.69f, -819.57f, 53.16f };
			vLocal_1042[21 /*3*/] = { 1444.63f, -819.67f, 53.57f };
			vLocal_1042[22 /*3*/] = { 1441.59f, -819.72f, 54.06f };
			vLocal_1042[23 /*3*/] = { 1438.62f, -819.77f, 54.51f };
			vLocal_1115[0 /*3*/] = { 1399.2f, -842.2f, 64.5f };
			vLocal_1115[1 /*3*/] = { 1399.8f, -847.2f, 64.3f };
			vLocal_1115[2 /*3*/] = { 1400.1f, -849.6f, 63.9f };
			vLocal_1115[3 /*3*/] = { 1402.1f, -852.4f, 63.3f };
			vLocal_1115[4 /*3*/] = { 1403.1f, -855.2f, 62.8f };
			vLocal_1115[5 /*3*/] = { 1404.6f, -857f, 62.2f };
			vLocal_1115[6 /*3*/] = { 1407.4f, -855.9f, 61.5f };
			vLocal_1115[7 /*3*/] = { 1410.1f, -854.8f, 61f };
			if (__LIB_0__::func_866(4, 0))
			{
				__LIB_1__::func_640(4);
			}
			Local_96.f_188 = joaat("A_C_COW");
			__LIB_11__::func_487(&Local_96);
			return true;
		}
	}
	return false;
}

bool func_321(var uParam0)
{
	if (__LIB_0__::func_1(Global_1935630, 2048))
	{
		return false;
	}
	if (func_823(uParam0))
	{
		CAM::DO_SCREEN_FADE_IN(500);
		__LIB_1__::func_164(0);
		HUD::DISPLAY_HUD(true);
		MAP::DISPLAY_RADAR(true);
		return true;
	}
	return false;
}

int func_325(vector3 vParam0, float fParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		__LIB_9__::func_786(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_830(0, 0);
		if (__LIB_0__::func_154(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			__LIB_0__::func_713(1, 0);
		}
	}
	else
	{
		__LIB_0__::func_713(1, 0);
	}
	__LIB_0__::func_305(0);
	__LIB_1__::func_617(0, vParam0, fParam3);
	return 1;
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 6:
		case 7:
		case 8:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			return joaat("P_CAL_FENCE01X");
		case 1:
		case 4:
			return joaat("P_CAL_FENCE02X");
		case 5:
		case 9:
		case 10:
		case 18:
			return joaat("P_CAL_FENCE03X");
	}
	return 0;
}

void func_518()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_991(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			__LIB_1__::func_851();
		}
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	__LIB_1__::func_116();
	if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("NBD1")) >= 2)
	{
		if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("CABR01")) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
	{
		return;
	}
	func_991(1);
}

void func_519()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_146(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_520()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_994(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_994(1);
}

void func_521()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_994(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	__LIB_1__::func_616(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_994(1);
}

void func_522()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_146(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(1))
			{
				__LIB_0__::func_368(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_146(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(2))
			{
				__LIB_0__::func_368(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !__LIB_0__::func_458(4))
		{
			__LIB_0__::func_368(4);
		}
		if (__LIB_0__::func_458(0))
		{
			__LIB_0__::func_459(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_525(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_525(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
			}
		}
		if (__LIB_0__::func_458(1))
		{
			__LIB_0__::func_459(1);
		}
		if (__LIB_0__::func_458(2))
		{
			__LIB_0__::func_459(2);
		}
		if (__LIB_0__::func_458(4))
		{
			__LIB_0__::func_459(4);
		}
		if (!__LIB_0__::func_458(0))
		{
			__LIB_0__::func_368(0);
		}
	}
}

int func_525(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = __LIB_0__::func_937(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) < 0)
		{
			func_525(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

int func_566(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_63(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	__LIB_0__::func_794(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (__LIB_0__::func_192(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { __LIB_1__::func_615(iVar0, 0, 1) };
	iVar10 = __LIB_1__::func_119(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1040(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_146(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

Vector3 func_581(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	fVar2 = 9999999f;
	__LIB_1__::func_456(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (__LIB_0__::func_479() == 0 && !__LIB_0__::func_795(0))
		{
			bVar14 = true;
		}
	}
	if (!__LIB_0__::func_720(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1055();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1056(Global_1310720.f_21))
	{
		bParam10 = bParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { __LIB_0__::func_953(iVar0, iVar1) };
			bVar11 = __LIB_0__::func_954(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_4__::func_718(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}
}

void func_590(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_264, iVar0, func_1063(iVar0));
		iVar0++;
	}
}

bool func_592(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			func_1064(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_594()
{
	return 616;
}

int func_595(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	vector3 vVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_177(iParam0);
	if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_70, 0))
	{
		if (!__LIB_0__::func_211(iParam0))
		{
			if (bParam2)
			{
				if (!__LIB_1__::func_411(iParam0, iVar0, 1))
				{
					return 0;
				}
			}
			else if (!__LIB_1__::func_535(iParam0, iVar0))
			{
				return 0;
			}
			if (Global_1360165[iParam0 /*1157*/].f_70.f_11 != SCRIPTS::GET_ID_OF_THIS_THREAD())
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
				}
				POPULATION::_0xF74E134F40192884(iVar0, 0);
				__LIB_0__::func_288(iParam0, 39, 1);
				__LIB_0__::func_213(iParam0, 8, 1);
				__LIB_0__::func_213(iParam0, 64, 0);
				__LIB_1__::func_434(iParam0, 0, 0, 1);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			vVar1.x = iParam3;
			vVar1.f_1 = iParam4;
			vVar1.f_2 = iParam5;
			if (!__LIB_0__::func_86(vVar1) && bParam7)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iVar0))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
						{
							TASK::CLEAR_PED_TASKS(iVar0, true, false);
						}
						else
						{
							ENTITY::DETACH_ENTITY(iVar0, true, true);
						}
					}
					func_652(iVar0, vVar1, iParam6, 2, 1073741824 /* Float: 2f */);
					return 1;
				}
				else
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0) && !TASK::_0x0C3CB2E600C8977D(iVar0, 1))
					{
						TASK::CLEAR_PED_TASKS(iVar0, true, false);
					}
					return 0;
				}
			}
			return 1;
		}
		else if (bParam1)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
			__LIB_0__::func_288(iParam0, 39, 1);
			__LIB_0__::func_213(iParam0, 8, 1);
			__LIB_0__::func_213(iParam0, 64, 0);
			__LIB_1__::func_434(iParam0, 0, 0, 1);
			Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return 1;
		}
	}
	return 0;
}

int func_596(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_1071(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

Vector3 func_610(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1860.806f, -1830.052f, 42.1351f;
		case 1:
			return 1449.461f, -947.4047f, 55.861f;
		case 2:
		case 3:
			return 1402.41f, -913.23f, 63.03f;
		case 4:
			return 1371.239f, -864.5988f, 68.305f;
		case 5:
			return 907.7f, -802.6f, 68.48f;
		case 6:
			return 720.3777f, -816.9917f, 49.8127f;
	}
	return 1885.04f, -1857.22f, 41.71f;
}

bool func_612()
{
	int iVar0;
	iVar0 = -1;
	if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1517, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0))
	{
		if (__LIB_0__::func_665(iLocal_22, Global_35, 1, 1) < 25f || iVar0 > 0)
		{
			return true;
		}
	}
	return false;
}

int func_613()
{
	return 586;
}

bool func_621()
{
	if (!__LIB_1__::func_220(100))
	{
		return false;
	}
	__LIB_7__::func_426();
	return true;
}

void func_633()
{
	vector3 vVar0;
	float fVar3;
	if (!func_229(67108864))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_27))
		{
			if (func_229(8388608))
			{
				if (!__LIB_2__::func_618(&uLocal_1393))
				{
					__LIB_5__::func_107(&uLocal_1393);
				}
				else if (__LIB_18__::func_398(&uLocal_1393) > 1500)
				{
					func_1105(iLocal_27, &Local_1498, 0f, 0f, 0f, 0, 30f, 100f, 3000, 500, 1000, 5f, 0, 1);
					if ((__LIB_0__::func_51(&(Local_1498.f_3), 1) && __LIB_5__::func_53(&Local_1498) > BUILTIN::TO_FLOAT(3)) && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						func_231(16777216);
						func_645(8388608);
						__LIB_2__::func_608(&uLocal_1393);
					}
				}
			}
			if (!func_229(16777216) && func_229(4194304))
			{
				__LIB_13__::func_927(&Local_85);
				if (__LIB_0__::func_139(Local_85.f_5))
				{
					__LIB_1__::func_281(&(Local_85.f_5), 1, 1);
				}
				func_645(4194304);
			}
		}
	}
	else if (func_229(134217728))
	{
		if (__LIB_0__::func_139(iLocal_84))
		{
			__LIB_1__::func_281(&iLocal_84, 1, 1);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_1256))
		{
			HUD::_DISPLAY_HUD_COMPONENT(724769646);
			CAM::SET_CAM_ACTIVE(iLocal_1256, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(iLocal_1256, false);
		}
	}
	else
	{
		if (__LIB_0__::func_665(Global_35, iLocal_27, 1, 1) > 25f)
		{
			func_231(16777216);
			func_645(67108864);
			iLocal_1255 = 2;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_27))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_27, false, false) };
			fVar3 = 150f;
			if (!__LIB_0__::func_139(iLocal_84))
			{
				iLocal_84 = __LIB_1__::func_282("HINT_CURU_FOCUS", joaat("INPUT_FOCUS_CAM"), vVar0, fVar3, 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				switch (iLocal_1255)
				{
					case 0:
						if (__LIB_1__::func_530(iLocal_84, 1))
						{
							HUD::_HIDE_HUD_COMPONENT(724769646);
							if (!CAM::DOES_CAM_EXIST(iLocal_1256))
							{
								iLocal_1256 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_1257, vLocal_1260, 35f, false, 2);
								CAM::SET_CAM_ACTIVE(iLocal_1256, true);
								CAM::SHAKE_CAM(iLocal_1256, "HAND_SHAKE", 0.2f);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							}
							else
							{
								iLocal_1255 = 1;
							}
						}
						break;
					case 1:
						if (!__LIB_1__::func_530(iLocal_84, 1))
						{
							iLocal_1255 = 2;
						}
						else
						{
							PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
							PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FOCUS_CAM"), true);
						}
						break;
					case 2:
						if (CAM::DOES_CAM_EXIST(iLocal_1256))
						{
							CAM::SET_CAM_ACTIVE(iLocal_1256, false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							CAM::DESTROY_CAM(iLocal_1256, false);
						}
						__LIB_1__::func_281(&iLocal_84, 1, 1);
						HUD::_DISPLAY_HUD_COMPONENT(724769646);
						iLocal_1255 = 0;
						break;
				}
			}
		}
	}
}

bool func_634()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_15[0], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[0], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_27) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[0], "A_M_M_SMHTHUG_01", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[0], "A_M_M_SMHTHUG_01", iLocal_27, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_28) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[0], "A_M_M_SMHTHUG_01^1", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[0], "A_M_M_SMHTHUG_01^1", iLocal_28, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[0], "ARTHUR", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[0], "ARTHUR", Global_35, 0);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_659(iLocal_1158, 0, 0)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(__LIB_3__::func_659(iLocal_1158, 0, 0))) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_15[0], "p_val_aucgate1m01x", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[0], "p_val_aucgate1m01x", __LIB_3__::func_659(iLocal_1158, 0, 0), 0);
		}
		else if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(__LIB_3__::func_659(iLocal_1158, 0, 0)))
		{
		}
		if (((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[0], "A_M_M_SMHTHUG_01", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[0], "A_M_M_SMHTHUG_01^1", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[0], "ARTHUR", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_15[0], "p_val_aucgate1m01x", false)))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_15[0]);
			return true;
		}
	}
	else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_15[0], true, false)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[0], false))
	{
		return true;
	}
	return false;
}

void func_635()
{
	__LIB_2__::func_602(&(Local_1458[0 /*17*/]), "OBJ_CURU_INTIM", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_1476[0 /*17*/]), "OBJ_CURU_INTIM", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
}

int func_636(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0));
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_5__::func_107(&(iParam1->f_13));
		}
		if (__LIB_9__::func_905(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_18__::func_404(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_636(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_1__::func_480(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*iParam0, 317, true))
						{
							__LIB_1__::func_488(*iParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*iParam0, 0, 1);
					}
				}
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_13__::func_611(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_18__::func_405(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									__LIB_1__::func_490(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					__LIB_2__::func_361(iParam1, uParam3, fVar8);
					if (__LIB_17__::func_786(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_2__::func_624(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (__LIB_13__::func_289(iParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_11__::func_791(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_18__::func_405(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_13__::func_611(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						__LIB_2__::func_624(uParam3, 0, 0, 1, 1);
					}
					__LIB_1__::func_491(iParam1, 1);
				}
				__LIB_2__::func_361(iParam1, uParam3, fVar8);
				if (__LIB_13__::func_289(iParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			__LIB_17__::func_785(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_638(int iParam0)
{
	int iVar0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[0], false))
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(iLocal_15[0], "pl_breakout_HoldUp"))
		{
			if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_15[0], "pl_breakout_HoldUp") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_15[0], "pl_breakout_HoldUp"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_15[0], "pl_breakout_HoldUp", true);
			}
		}
		else
		{
			iVar0 = WEAPON::GET_BEST_PED_WEAPON(Global_35, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true, *iParam0, -1, false);
			__LIB_1__::func_397(&uLocal_1170, 0);
			__LIB_1__::func_399(&uLocal_1170, 0);
			__LIB_1__::func_402(&uLocal_1170, 0);
			__LIB_1__::func_406(&uLocal_1170, 0);
			__LIB_1__::func_392(&uLocal_1170, 0);
			PED::_0x58F7DB5BD8FA2288(Global_35);
			if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			}
			__LIB_1__::func_480(&iLocal_27);
			__LIB_1__::func_480(&iLocal_28);
			__LIB_2__::func_624(&Local_1458, 0, 0, 1, 0);
			__LIB_2__::func_624(&Local_1476, 0, 0, 1, 0);
			func_645(16777216);
			func_231(134217728);
			if (__LIB_0__::func_139(iLocal_84))
			{
				__LIB_1__::func_281(&iLocal_84, 1, 1);
			}
			if (__LIB_0__::func_139(Local_85.f_5))
			{
				__LIB_1__::func_281(&(Local_85.f_5), 1, 1);
			}
			return true;
		}
	}
	return false;
}

void func_641(int iParam0)
{
	if (AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		AUDIO::_0x36559148B78853B3(1, iParam0, 0);
	}
	iLocal_58 = 8;
	__LIB_2__::func_608(&uLocal_59);
}

bool func_642()
{
	char* sVar0;
	sVar0 = "CAUNC_IG3";
	if ((!AUDIO::_0x1ECC76792F661CF5(sVar0) || (AUDIO::_0x1ECC76792F661CF5(sVar0) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(sVar0) > 7)) || !AUDIO::_0xD89504D9D7D5057D(sVar0))
	{
		return true;
	}
	return false;
}

bool func_644()
{
	bool bVar0;
	bVar0 = false;
	if (ENTITY::IS_ENTITY_DEAD(iLocal_29) || ENTITY::IS_ENTITY_DEAD(iLocal_30))
	{
		bVar0 = true;
		iLocal_48 = 1;
	}
	if (__LIB_18__::func_718() && __LIB_0__::func_665(Global_35, iLocal_27, 1, 1) <= 50f)
	{
		bVar0 = true;
		iLocal_48 = 1;
	}
	if (!bVar0)
	{
		switch (iLocal_57)
		{
			case 0:
				if (!__LIB_0__::func_272(iLocal_27, 0))
				{
					bVar0 = true;
					iLocal_48 = 1;
				}
				else if (func_1130(&iLocal_27))
				{
					bVar0 = true;
					if (__LIB_0__::func_665(Global_35, iLocal_27, 1, 1) <= 10f)
					{
						iLocal_48 = 1;
					}
				}
				else if (__LIB_14__::func_51(iLocal_27, &uLocal_1170, &iLocal_1254, 0))
				{
					bVar0 = true;
					if (__LIB_1__::func_339(iLocal_1254, 1, 0, 0, 1))
					{
						iLocal_48 = 1;
					}
				}
				else if (PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_27, 32768, 0))
				{
					bVar0 = true;
					iLocal_48 = 1;
				}
				iLocal_57++;
				break;
			case 1:
				if (!__LIB_0__::func_272(iLocal_28, 0))
				{
					bVar0 = true;
					iLocal_48 = 1;
				}
				else if (func_1130(&iLocal_28))
				{
					bVar0 = true;
					if (__LIB_0__::func_665(Global_35, iLocal_28, 1, 1) <= 10f)
					{
						iLocal_48 = 1;
					}
				}
				else if (__LIB_14__::func_51(iLocal_28, &uLocal_1170, &iLocal_1254, 0))
				{
					bVar0 = true;
					if (__LIB_1__::func_339(iLocal_1254, 1, 0, 0, 1))
					{
						iLocal_48 = 1;
					}
				}
				else if (PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_28, 32768, 0))
				{
					bVar0 = true;
					iLocal_48 = 1;
				}
				iLocal_57++;
				break;
			case 2:
				if (__LIB_13__::func_262(iLocal_29, 0, &uLocal_1198, &iLocal_1254, 0, 0))
				{
					bVar0 = true;
					iLocal_48 = 1;
				}
				iLocal_57++;
				break;
			case 3:
				if (__LIB_13__::func_262(iLocal_30, 0, &uLocal_1198, &iLocal_1254, 0, 0))
				{
					bVar0 = true;
					iLocal_48 = 1;
				}
				iLocal_57 = 0;
				break;
		}
	}
	if (iLocal_77 > 0)
	{
		iLocal_48 = 1;
		bVar0 = true;
	}
	if (bVar0 == 1)
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[0], false)) && ANIMSCENE::_0x1F0E401031E20146(iLocal_15[0], "pl_Lockpick_Success"))
		{
			iLocal_48 = 1;
		}
	}
	return bVar0;
}

void func_645(int iParam0)
{
	if (!func_229(iParam0))
	{
		return;
	}
	iLocal_1797 = (iLocal_1797 - (iLocal_1797 && iParam0));
}

bool func_647()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[2]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_15[2], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[2], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_25))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[2], "UNIRANCHERS_01", iLocal_25, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_36))
		{
			STREAMING::REQUEST_MODEL(joaat("W_RIFLE_CARCANO01"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("W_RIFLE_CARCANO01")))
			{
				iLocal_36 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_SNIPERRIFLE_CARCANO"), 7, 1379f, -875f, 69f, true, 1f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("W_RIFLE_CARCANO01"));
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_15[2], "w_rifle_carcano01", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[2], "w_rifle_carcano01", iLocal_36, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[2], "UNIRANCHERS_01", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_15[2], "w_rifle_carcano01", false)))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_15[2]);
			return true;
		}
	}
	else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[2]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_15[2], true, false)) && (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[2], false) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_15[2], false)))
	{
		return true;
	}
	return false;
}

int func_648(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_2[iVar1], iParam1, true, 0))
				{
					iVar0++;
				}
				else
				{
					Jump @129; //curOff = 75
					vVar2 = { 0f, 0f, 0f };
					TASK::WAYPOINT_RECORDING_GET_COORD(uParam0->f_652, 0, &vVar2);
					if (__LIB_0__::func_94(uParam0->f_2[iVar1], vVar2, 1) <= 2f)
					{
						iVar0++;
					}
					else if (__LIB_0__::func_163(uParam0->f_2[iVar1], 242628503) || __LIB_0__::func_163(uParam0->f_2[iVar1], 713668775))
					{
						iVar0++;
					}
				}
				iVar1++;
				return iVar0;
			}
		}
	}
}

bool func_649()
{
	if (__LIB_1__::func_205(Global_35, iLocal_908, 1, 0))
	{
		if (iLocal_66 != 2)
		{
			iLocal_66 = 2;
		}
	}
	if ((INTERIOR::IS_VALID_INTERIOR(iLocal_1283) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iLocal_1283) && PED::IS_PED_SHOOTING(Global_35))
	{
		if (iLocal_66 != 2)
		{
			iLocal_66 = 2;
		}
	}
	switch (iLocal_66)
	{
		case 0:
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_1283) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iLocal_1283)
			{
				if ((!PED::_GET_PED_CROUCH_MOVEMENT(Global_35) && !TASK::IS_PED_STILL(Global_35)) && !PED::IS_PED_USING_ANY_SCENARIO(Global_35))
				{
					iLocal_66 = 1;
				}
			}
			break;
		case 1:
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_1283) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iLocal_1283)
			{
				if (!__LIB_2__::func_618(&uLocal_67))
				{
					__LIB_5__::func_107(&uLocal_67);
				}
				else if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35) || TASK::IS_PED_STILL(Global_35))
				{
					if (!__LIB_2__::func_618(&uLocal_70))
					{
						__LIB_5__::func_107(&uLocal_70);
						__LIB_11__::func_596(&uLocal_67);
					}
					else if (__LIB_5__::func_53(&uLocal_70) > 5f)
					{
						__LIB_2__::func_608(&uLocal_67);
						__LIB_2__::func_608(&uLocal_70);
						iLocal_66 = 0;
					}
				}
				else
				{
					if (__LIB_2__::func_618(&uLocal_70))
					{
						__LIB_2__::func_608(&uLocal_70);
					}
					if (__LIB_2__::func_611(&uLocal_67))
					{
						__LIB_11__::func_595(&uLocal_67);
						if (__LIB_5__::func_53(&uLocal_67) > 8f)
						{
							__LIB_2__::func_620(&uLocal_67, 8f);
						}
					}
					else if (__LIB_5__::func_53(&uLocal_67) > 10f)
					{
						__LIB_2__::func_608(&uLocal_67);
						__LIB_2__::func_608(&uLocal_70);
						iLocal_66 = 2;
					}
				}
			}
			else
			{
				__LIB_2__::func_608(&uLocal_67);
				iLocal_66 = 0;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_650()
{
	if (iLocal_55 != 0)
	{
		if (!GRAPHICS::_0x113857D66A9CABE6(iLocal_55))
		{
			GRAPHICS::_0xBFCB17895BB99E4E(iLocal_55, 1);
		}
	}
}

void func_652(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_0__::func_125(iParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_652(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_652(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (__LIB_0__::func_27(iParam5, 129))
	{
		if (__LIB_0__::func_27(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (__LIB_0__::func_125(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_653()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[3]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_15[3], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[3], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_25) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[3], "UNIRANCHERS_01", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[3], "UNIRANCHERS_01", iLocal_25, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_37))
		{
			iLocal_37 = __LIB_3__::func_136(1282705079, 1);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_15[3], "p_door41x", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[3], "p_door41x", iLocal_37, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35))
		{
			iLocal_35 = OBJECT::CREATE_OBJECT(iLocal_44, vLocal_961, true, true, false, false, true);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[3], "UNIRANCHERS_01", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_15[3], "p_door41x", false))) && ENTITY::DOES_ENTITY_EXIST(iLocal_35))
		{
			__LIB_3__::func_124(1282705079, 1);
			WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_25, joaat("WEAPON_SNIPERRIFLE_CARCANO"), 30, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			ANIMSCENE::START_ANIM_SCENE(iLocal_15[3]);
			return true;
		}
	}
	else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[3]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_15[3], true, false)) && (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[3], false) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_15[3], false)))
	{
		return true;
	}
	return false;
}

void func_655(bool bParam0)
{
	if (MAP::DOES_BLIP_EXIST(iLocal_52) && bParam0)
	{
		MAP::_BLIP_SET_MODIFIER(iLocal_52, -1034486097);
	}
	else
	{
		iLocal_52 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_25);
		if (bParam0)
		{
			MAP::_BLIP_SET_MODIFIER(iLocal_52, -1034486097);
		}
		else
		{
			MAP::_BLIP_SET_MODIFIER(iLocal_52, -662251075);
		}
	}
}

void func_656()
{
	if (MAP::DOES_BLIP_EXIST(iLocal_52))
	{
		MAP::REMOVE_BLIP(&iLocal_52);
	}
}

bool func_659(var uParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	vector3 vVar8;
	struct<9> Var11;
	vector3 vVar20;
	vector3 vVar23;
	float fVar26;
	float fVar27;
	var uVar28;
	var uVar29[1];
	int iVar31;
	var uVar32;
	vector3 vVar33;
	vector3 vVar36;
	vector3 vVar39;
	vector3 vVar42;
	float fVar45;
	vector3 vVar46;
	vector3 vVar49;
	vector3 vVar52;
	float fVar55;
	vector3 vVar56;
	vector3 vVar59;
	vector3 vVar62;
	vector3 vVar65;
	vector3 vVar68;
	float fVar71;
	vector3 vVar72;
	vector3 vVar75;
	vector3 vVar78;
	vector3 vVar81;
	vector3 vVar84;
	vector3 vVar87;
	float fVar90;
	vector3 vVar91;
	vector3 vVar94;
	float fVar97;
	vector3 vVar98;
	float fVar101;
	float fVar102;
	float fVar103;
	float fVar104;
	vector3 vVar105;
	var uVar108;
	if (!FLOCK::_0x8D913E493BAFE0A3(*uParam0))
	{
		return true;
	}
	if (__LIB_11__::func_474(uParam0, iParam2) && iParam5 == 0)
	{
		return true;
	}
	vVar8 = { __LIB_11__::func_467(uParam0, 0) };
	if (!__LIB_0__::func_86(vVar8))
	{
	}
	else
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iParam2]))
	{
		iVar0 = uParam0->f_2[iParam2];
	}
	else
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		Var11 = { __LIB_13__::func_946(uParam0, iVar0) };
		vVar4 = { __LIB_11__::func_481(&Var11) };
	}
	else
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam3, false, false) };
	}
	if (__LIB_4__::func_156(uParam0, 2))
	{
		uVar28 = TASK::_0x152664AA3188B193(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 100f, 2, 0);
		if (TASK::_0x22CD2C33ED4467A1(uVar28))
		{
			vVar20 = { TASK::_0x91CB5E431F579BA1(uVar28) };
			fVar26 = TASK::_0x370F57C47F68EBCA(uVar28);
		}
		if (TASK::_0x22CD2C33ED4467A1(uVar28))
		{
			iVar31 = TASK::_0xEFD875C2791EBEFD(uVar28, &uVar29, 1, 1);
			if (iVar31 > 0)
			{
				uVar32 = uVar29[0];
			}
			if (TASK::_0x22CD2C33ED4467A1(uVar32))
			{
				vVar23 = { TASK::_0x91CB5E431F579BA1(uVar32) };
				fVar27 = TASK::_0x370F57C47F68EBCA(uVar32);
			}
			else
			{
				vVar33 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) - vVar4 };
				vVar33 = { __LIB_0__::func_173(vVar33) };
				vVar23 = { vVar20 + vVar33 * Vector(0.01f, 0.01f, 0.01f) };
				fVar27 = fVar26;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		vVar20 = { uParam0->f_648 };
		fVar26 = uParam0->f_651;
		vVar23 = { uParam0->f_644 };
		fVar27 = uParam0->f_647;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!__LIB_0__::func_255(iVar0, 1))
		{
			vVar36 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
			vVar39 = { vVar36 - uParam0->f_613 };
			vVar39.f_2 = 0f;
			vVar39 = { -__LIB_0__::func_173(vVar39) };
			vVar42 = { vVar36 - vVar4 };
			fVar45 = BUILTIN::VMAG(vVar42);
			vVar42.f_2 = 0f;
			vVar42 = { __LIB_0__::func_173(vVar42) };
			vVar46 = { vVar36 - vVar23 };
			vVar46.f_2 = 0f;
			vVar46 = { __LIB_0__::func_173(vVar46) };
			vVar52 = { vVar42 * Vector(3f, 3f, 3f) + vVar39 * Vector(4f, 4f, 4f) + vVar46 };
			if (bParam4)
			{
				vVar49 = { vVar36 - Global_36 };
				vVar49.f_2 = 0f;
				vVar49 = { __LIB_0__::func_173(vVar49) };
				vVar52 = { vVar52 + vVar49 * Vector(3f, 3f, 3f) };
			}
			vVar52 = { __LIB_0__::func_173(vVar52) };
			fVar55 = (fParam1 - fVar45);
			vVar52 = { vVar52 * Vector(fVar55, fVar55, fVar55) };
			vVar56 = { vVar52 + vVar36 };
			vVar59 = { vVar23 - vVar20 };
			vVar59.f_2 = 0f;
			vVar62 = { __LIB_0__::func_173(vVar59) };
			vVar65 = { __LIB_3__::func_744(vVar62, 0f, 0f, 1f) };
			vVar68 = { vVar36 - vVar20 };
			fVar71 = __LIB_1__::func_95(vVar68, vVar65);
			if (fVar71 >= 0f)
			{
				vVar72 = { vVar20 + vVar65 * Vector(fVar26, fVar26, fVar26) };
				vVar75 = { vVar23 + vVar65 * Vector(fVar27, fVar27, fVar27) };
			}
			else
			{
				vVar72 = { vVar20 - vVar65 * Vector(fVar26, fVar26, fVar26) };
				vVar75 = { vVar23 - vVar65 * Vector(fVar27, fVar27, fVar27) };
			}
			if (__LIB_0__::func_138(vVar75, vVar72))
			{
				vVar78 = { vVar52 };
				vVar78 = { __LIB_0__::func_173(vVar78) };
				vVar75 = { vVar72 + vVar78 * Vector(0.01f, 0.01f, 0.01f) };
			}
			vVar81 = { vVar75 - vVar72 };
			vVar84 = { __LIB_0__::func_173(vVar81) };
			vVar87 = { vVar36 - vVar72 };
			fVar90 = __LIB_1__::func_95(vVar87, vVar84);
			vVar91 = { vVar72 + vVar84 * Vector(fVar90, fVar90, fVar90) };
			vVar94 = { vVar91 - vVar36 };
			fVar97 = BUILTIN::VMAG(vVar94);
			vVar94 = { __LIB_0__::func_173(vVar94) };
			vVar98 = { vVar56 - vVar36 };
			vVar98 = { __LIB_0__::func_173(vVar98) };
			fVar101 = MISC::ACOS(__LIB_1__::func_95(vVar94, vVar98));
			fVar102 = MISC::TAN((fVar101 * fVar97));
			fVar103 = BUILTIN::SQRT(((fVar102 * fVar102) + (fVar97 * fVar97)));
			fVar104 = 0f;
			if (fVar103 > fParam1)
			{
				fVar103 = fParam1;
			}
			else
			{
				fVar104 = (fParam1 - fVar103);
			}
			vVar1 = { vVar36 + vVar98 * Vector(fVar103, fVar103, fVar103) };
			if (fVar104 > 0f)
			{
				vVar105 = { vVar1 - vVar91 };
				if (__LIB_1__::func_95(vVar105, vVar84) < 0f)
				{
					fVar104 = -fVar104;
				}
				vVar1 = { vVar1 + vVar84 * Vector(fVar104, fVar104, fVar104) };
			}
			vVar1 = { vVar1 + Vector(20f, 0f, 0f) };
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &uVar108, false))
			{
				vVar1.f_2 = uVar108;
			}
			else
			{
				vVar1 = { vVar1 - Vector(20f, 0f, 0f) };
			}
			iVar7 = __LIB_11__::func_489(uParam0, &iVar0);
			if (iVar7 >= 0)
			{
				if (__LIB_11__::func_490(uParam0) > 1)
				{
					if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar7]))
					{
						FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iVar7]);
					}
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar1, 2.5f, -1, 10f, 2048, 40000f);
				uParam0->f_23[iVar7] = 5;
				__LIB_5__::func_107(&(uParam0->f_608));
				return true;
			}
		}
	}
	return false;
}

void func_667(var uParam0)
{
	PED::_0x58F7DB5BD8FA2288(Global_35);
	func_1148(&Local_96, &iLocal_27);
	func_1149(&Local_96);
	if (!MAP::DOES_BLIP_EXIST(iLocal_53))
	{
		iLocal_53 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_27);
	}
	MAP::_BLIP_SET_MODIFIER(iLocal_53, -1034486097);
	if (!MAP::DOES_BLIP_EXIST(iLocal_54))
	{
		iLocal_54 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_28);
	}
	MAP::_BLIP_SET_MODIFIER(iLocal_54, -1034486097);
	if (MAP::DOES_BLIP_EXIST(iLocal_50))
	{
		MAP::REMOVE_BLIP(&iLocal_50);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_43));
	}
	__LIB_1__::func_480(&iLocal_27);
	__LIB_1__::func_480(&iLocal_28);
	__LIB_2__::func_624(&Local_1458, 0, 0, 1, 0);
	__LIB_2__::func_624(&Local_1476, 0, 0, 1, 0);
	__LIB_0__::func_745(4);
	func_668(4);
}

void func_668(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_237("OBJ_CURU_COVER");
			__LIB_2__::func_608(&uLocal_1494);
			fLocal_1497 = __LIB_0__::func_94(Global_35, vLocal_980, 1);
			break;
		case 1:
			func_237("OBJ_CURU_STAY");
			break;
		case 2:
			func_237("OBJ_CURU_FOLLOW");
			fLocal_1497 = __LIB_0__::func_665(Global_35, iLocal_22, 1, 1);
			break;
		case 3:
			func_237("OBJ_CURU_COVROCK");
			__LIB_2__::func_608(&uLocal_1494);
			break;
		case 4:
			func_237("OBJ_CURU_RUSTLERS");
			break;
	}
	__LIB_2__::func_608(&uLocal_1494);
	iLocal_82 = iParam0;
}

bool func_669()
{
	if ((__LIB_1__::func_205(Global_35, iLocal_901, 1, 0) || __LIB_1__::func_205(Global_35, iLocal_902, 1, 0)) || __LIB_1__::func_205(Global_35, iLocal_903, 1, 0))
	{
		if (PED::IS_PED_IN_COVER(Global_35, false, false) || PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			return true;
		}
	}
	return false;
}

bool func_670()
{
	if (__LIB_1__::func_205(Global_35, iLocal_904, 1, 0))
	{
		if (PED::IS_PED_IN_COVER(Global_35, false, false) || PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			return true;
		}
	}
	return false;
}

bool func_671(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (ENTITY::GET_ENTITY_HEALTH(*iParam0) <= 0)
	{
		PHYSICS::SET_DISABLE_BREAKING(*iParam0, false);
		OBJECT::_0xE7E4C198B0185900(*iParam0, 0, false);
		OBJECT::_0xE7E4C198B0185900(*iParam0, 1, false);
		return true;
	}
	if (OBJECT::HAS_OBJECT_BEEN_BROKEN(*iParam0))
	{
		OBJECT::_0xE7E4C198B0185900(*iParam0, 0, false);
		OBJECT::_0xE7E4C198B0185900(*iParam0, 1, false);
		return true;
	}
	return false;
}

bool func_672(int iParam0)
{
	vector3 vVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vLocal_921, true) > 0.75f)
	{
		return true;
	}
	return false;
}

void func_676(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bVar0 = func_1150(uParam0, iParam1);
	if (__LIB_11__::func_491(uParam0) >= 2)
	{
		return;
	}
	if (!bVar0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (uParam0->f_190[iVar1 /*9*/] == -1 && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_190[iVar1 /*9*/].f_2))
			{
				uParam0->f_190[iVar1 /*9*/].f_2 = *iParam1;
				if (!PED::IS_PED_A_PLAYER(*iParam1))
				{
					bVar3 = false;
					iVar2 = 0;
					while (iVar2 < 2)
					{
						if (uParam0->f_190[iVar2 /*9*/] == 0)
						{
							bVar3 = true;
						}
						iVar2++;
					}
					if (bVar3)
					{
						uParam0->f_190[iVar1 /*9*/] = 1;
					}
					else
					{
						uParam0->f_190[iVar1 /*9*/] = 0;
						__LIB_18__::func_345(uParam0, 1);
						__LIB_11__::func_529(&(uParam0->f_190[iVar1 /*9*/]), 1);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_190[iVar1 /*9*/].f_2, 1);
						if (FLOCK::_0x8D913E493BAFE0A3(*uParam0))
						{
							FLOCK::_0xC72CE37081DAE625(*uParam0, uParam0->f_190[iVar1 /*9*/].f_2, (uParam0->f_637 + 5f), 7.5f);
						}
					}
					__LIB_18__::func_358(uParam0, 1);
					uParam0->f_190[iVar1 /*9*/].f_6 = { __LIB_1__::func_344(sParam2) };
					FLOCK::_0xC72CE37081DAE625(*uParam0, uParam0->f_190[iVar1 /*9*/].f_2, (uParam0->f_637 + 5f), 10f);
				}
				else
				{
					uParam0->f_190[iVar1 /*9*/] = 0;
					__LIB_11__::func_529(&(uParam0->f_190[iVar1 /*9*/]), 1);
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
					{
						if (__LIB_0__::func_181())
						{
							StringCopy(&(uParam0->f_190[iVar1 /*9*/].f_6), "JOHN", 24);
						}
						else
						{
							StringCopy(&(uParam0->f_190[iVar1 /*9*/].f_6), "ARTHUR", 24);
						}
					}
					else
					{
						uParam0->f_190[iVar1 /*9*/].f_6 = { __LIB_1__::func_344(sParam2) };
					}
				}
				__LIB_0__::func_928(&(uParam0->f_506), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_190[iVar1 /*9*/].f_2), &(uParam0->f_190[iVar1 /*9*/].f_6), 0);
				return;
			}
			iVar1++;
		}
	}
}

bool func_685()
{
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_921, 7.5f) > 0)
	{
		return true;
	}
	return false;
}

void func_687()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_22) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[1], "Uncle", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[1], "Uncle", iLocal_22, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[1], "ARTHUR", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[1], "ARTHUR", Global_35, 0);
		}
		if (bLocal_1285)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_15[1], "b_altConvo", true, false);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_15[1], "b_altConvo", false, false);
		}
	}
}

bool func_690()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_22))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_25))
		{
			if ((iLocal_73 == 6 && __LIB_0__::func_665(iLocal_22, iLocal_25, 1, 1) <= 100f) && __LIB_0__::func_94(iLocal_25, Local_96.f_613, 1) <= 150f)
			{
				return true;
			}
		}
	}
	return false;
}

void func_694(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_13__::func_943(uParam0))
	{
		return;
	}
	if (__LIB_2__::func_618(&(uParam0->f_491)) && __LIB_5__::func_28(&(uParam0->f_491)) < 7500)
	{
		return;
	}
	if (uParam0->f_209 == -1)
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_190[uParam0->f_209 /*9*/].f_2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar1]))
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_2[iVar1], iVar0, 0, 0))
					{
						if (iVar0 == PLAYER::PLAYER_PED_ID())
						{
							__LIB_11__::func_497(uParam0);
							if (!__LIB_4__::func_156(uParam0, 1))
							{
								__LIB_13__::func_966(uParam0, 4);
								__LIB_13__::func_955(uParam0, 1);
							}
							else
							{
								__LIB_13__::func_966(uParam0, 8);
							}
							__LIB_13__::func_967(uParam0, 2);
							__LIB_5__::func_107(&(uParam0->f_491));
						}
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_2[iVar1], PLAYER::PLAYER_PED_ID(), 0, 0))
					{
						__LIB_11__::func_497(uParam0);
						if (!__LIB_4__::func_156(uParam0, 1))
						{
							__LIB_13__::func_966(uParam0, 4);
							__LIB_13__::func_955(uParam0, 1);
						}
						else
						{
							__LIB_13__::func_966(uParam0, 8);
						}
						__LIB_13__::func_967(uParam0, 2);
						__LIB_5__::func_107(&(uParam0->f_491));
					}
				}
			}
			iVar1++;
		}
	}
}

void func_695(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_13__::func_943(uParam0))
	{
		return;
	}
	if (__LIB_2__::func_618(&(uParam0->f_488)) && __LIB_5__::func_28(&(uParam0->f_488)) < 7500)
	{
		return;
	}
	if (uParam0->f_209 == -1)
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_190[uParam0->f_209 /*9*/].f_2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_ON_MOUNT(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar1]))
			{
				if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_2[iVar1], PED::GET_MOUNT(iVar0), 1, 1) || (PED::IS_PED_RAGDOLL(uParam0->f_2[iVar1]) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_2[iVar1], PED::GET_MOUNT(iVar0)))) || (PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_2[iVar1], joaat("EVENT_DAMAGE")) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_2[iVar1], PED::GET_MOUNT(iVar0))))
				{
					if (iVar0 == PLAYER::PLAYER_PED_ID())
					{
						__LIB_11__::func_497(uParam0);
						__LIB_13__::func_966(uParam0, 2);
						__LIB_5__::func_107(&(uParam0->f_488));
					}
				}
				else if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_2[iVar1], PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), 1, 1) || (PED::IS_PED_RAGDOLL(uParam0->f_2[iVar1]) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_2[iVar1], PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))) || (PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_2[iVar1], joaat("EVENT_DAMAGE")) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_2[iVar1], PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()))))
				{
					__LIB_11__::func_497(uParam0);
					__LIB_13__::func_966(uParam0, 2);
					__LIB_5__::func_107(&(uParam0->f_488));
				}
			}
			iVar1++;
		}
	}
}

void func_696(var uParam0)
{
	__LIB_5__::func_107(&(uParam0->f_352));
}

void func_697(var uParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1[24];
	char* sVar4;
	vector3 vVar5;
	vector3 vVar8;
	if (uParam0->f_209 != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_190[uParam0->f_209 /*9*/].f_2) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_190[uParam0->f_209 /*9*/].f_2) != PLAYER::PLAYER_PED_ID())
		{
			return;
		}
	}
	else if (uParam0->f_209 == -1)
	{
		return;
	}
	if (__LIB_0__::func_86(vParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) || !__LIB_3__::func_572(PLAYER::GET_PLAYER_INDEX(), uParam0->f_350, &(uParam0->f_329)))
	{
		iVar0 = func_1164(uParam0, uParam0->f_190[uParam0->f_209 /*9*/].f_2);
		if (uParam0->f_351 != iVar0 && iVar0 != -1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350))
			{
				__LIB_1__::func_480(&(uParam0->f_350));
				PED::SET_PED_CONFIG_FLAG(uParam0->f_350, 297, false);
			}
			__LIB_17__::func_785(&(uParam0->f_329), &(uParam0->f_311));
			__LIB_13__::func_986(uParam0);
			uParam0->f_351 = iVar0;
			uParam0->f_350 = uParam0->f_2[uParam0->f_351];
			PED::SET_PED_CONFIG_FLAG(uParam0->f_350, 297, true);
		}
		else if (iVar0 == -1)
		{
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) || uParam0->f_351 == -1)
	{
		return;
	}
	if (AUDIO::_0xFE5C6177064BD390(1) || AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		if (__LIB_2__::func_466(&(uParam0->f_311[0 /*17*/]), 0, 0))
		{
			__LIB_3__::func_515(&(uParam0->f_311[0 /*17*/]), 0, 0);
		}
	}
	else if (!__LIB_2__::func_466(&(uParam0->f_311[0 /*17*/]), 0, 0))
	{
		__LIB_3__::func_515(&(uParam0->f_311[0 /*17*/]), 1, 0);
	}
	if (uParam0->f_310 == 1 && __LIB_3__::func_572(PLAYER::GET_PLAYER_INDEX(), uParam0->f_350, &(uParam0->f_329)))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 266, true);
	}
	if (uParam0->f_310 == 1)
	{
		func_636(&(uParam0->f_350), &(uParam0->f_329), 20f, &(uParam0->f_311), 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
	}
	switch (uParam0->f_310)
	{
		case 0:
			if (__LIB_0__::func_94(uParam0->f_350, ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, false, false), 1) <= (20f + 5f))
			{
				uParam0->f_310 = 1;
			}
			break;
		case 1:
			if (__LIB_9__::func_754(&(uParam0->f_329)))
			{
				if (!__LIB_0__::func_481(1) && !__LIB_0__::func_181())
				{
					StringCopy(&cVar1, "HRD_SHOUT", 24);
					sVar4 = "ARTHUR";
					__LIB_0__::func_928(&(uParam0->f_506), PLAYER::PLAYER_PED_ID(), sVar4, 1);
					if (__LIB_1__::func_104(&(uParam0->f_506), cVar1, 0, -1, 0, 0))
					{
						__LIB_1__::func_480(&(uParam0->f_350));
						__LIB_17__::func_785(&(uParam0->f_329), &(uParam0->f_311));
						__LIB_13__::func_986(uParam0);
						vVar5 = { __LIB_11__::func_481(&(uParam0->f_190[uParam0->f_209 /*9*/])) };
						uParam0->f_23[uParam0->f_351] = 1;
						uParam0->f_44[uParam0->f_351] = ((BUILTIN::TO_FLOAT(uParam0->f_351) * 50f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 100f));
						func_1168(uParam0, uParam0->f_351, vVar5, vParam1);
						func_696(uParam0);
						if (uParam0->f_189 == 0)
						{
							uParam0->f_189 = 2;
						}
						uParam0->f_310 = 0;
					}
				}
				else if (__LIB_0__::func_181())
				{
					__LIB_1__::func_480(&(uParam0->f_350));
					__LIB_17__::func_785(&(uParam0->f_329), &(uParam0->f_311));
					__LIB_13__::func_986(uParam0);
					vVar8 = { __LIB_11__::func_481(&(uParam0->f_190[uParam0->f_209 /*9*/])) };
					uParam0->f_23[uParam0->f_351] = 1;
					uParam0->f_44[uParam0->f_351] = ((BUILTIN::TO_FLOAT(uParam0->f_351) * 50f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 100f));
					func_1168(uParam0, uParam0->f_351, vVar8, vParam1);
					func_696(uParam0);
					if (uParam0->f_189 == 0)
					{
						uParam0->f_189 = 2;
					}
					uParam0->f_310 = 0;
				}
			}
			else if (!__LIB_3__::func_572(PLAYER::GET_PLAYER_INDEX(), uParam0->f_350, &(uParam0->f_329)) && __LIB_0__::func_94(uParam0->f_350, ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, false, false), 1) > (20f + 10f))
			{
				uParam0->f_310 = 0;
			}
			break;
	}
}

void func_701(var uParam0)
{
	int iVar0;
	__LIB_1__::func_480(&(uParam0->f_350));
	uParam0->f_350 = 0;
	uParam0->f_351 = -1;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		__LIB_1__::func_480(&(uParam0->f_2[iVar0]));
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_2[iVar0], 297, true))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_2[iVar0], 297, true);
			}
			if (PED::GET_PED_CONFIG_FLAG(uParam0->f_2[iVar0], 315, true))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_2[iVar0], 315, false);
			}
			if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_2[iVar0], 130, true))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_2[iVar0], 130, true);
			}
			if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_2[iVar0], 331, true))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_2[iVar0], 331, true);
			}
			if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_2[iVar0], 330, true))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_2[iVar0], 330, true);
			}
		}
		iVar0++;
	}
	__LIB_17__::func_785(&(uParam0->f_329), &(uParam0->f_311));
	__LIB_2__::func_624(&(uParam0->f_311), 0, 1, 1, 0);
}

char* func_712(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@common@cnv_camp@carust@02@ig@ig1_rustlerslockpickingcov01@ig1_rustlerslockpickingcov";
		case 1:
			return "script@common@cnv_camp@carust@02@ig@ig8_unclewaitgate@ig8_unclewaitgate";
		case 3:
			return "script@common@cnv_camp@carust@02@ig@ig7_rancherconfront@ig7_rancherconfront";
		case 2:
			return "script@common@cnv_camp@carust@02@ig@ig6_ranchercombatwake@ig6_ranchercombatwake";
		case 4:
			return "script@common@cnv_camp@carust@02@ig@IG11_ClayCliveHold@IG11_ClayCliveHold";
		case 5:
			return "script@common@cnv_camp@caunc@leadin@ext@ILO";
	}
	return "";
}

void func_749(var uParam0, int iParam1)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	int iVar15;
	vector3 vVar16;
	if (__LIB_4__::func_156(uParam0, 64))
	{
		__LIB_13__::func_958(uParam0, 64);
		return;
	}
	if (uParam0->f_209 == -1)
	{
		return;
	}
	bVar0 = __LIB_11__::func_482(uParam0, 1);
	if (bVar0)
	{
		if (!__LIB_2__::func_618(&(uParam0->f_352)))
		{
			func_696(uParam0);
		}
	}
	else if (__LIB_2__::func_618(&(uParam0->f_352)))
	{
		__LIB_2__::func_608(&(uParam0->f_352));
	}
	if ((((iParam1 == 1 && !bVar0) && uParam0->f_189 == 5) && !__LIB_11__::func_494(uParam0, 8)) && !__LIB_4__::func_156(uParam0, 32))
	{
		if (__LIB_11__::func_483(uParam0))
		{
			if (!__LIB_2__::func_618(&(uParam0->f_503)))
			{
				__LIB_5__::func_107(&(uParam0->f_503));
			}
			else if (__LIB_5__::func_53(&(uParam0->f_503)) > 20f)
			{
				if (func_1223(uParam0, 2, 35f, 0.1f, 0))
				{
					__LIB_2__::func_608(&(uParam0->f_503));
				}
			}
		}
		else if (__LIB_2__::func_618(&(uParam0->f_503)))
		{
			__LIB_2__::func_608(&(uParam0->f_503));
		}
	}
	vVar1 = { __LIB_13__::func_935(uParam0) };
	vVar7 = { 0f, 0f, 0f };
	func_1224(uParam0);
	iVar10 = 0;
	while (iVar10 < 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar10]))
		{
			switch (uParam0->f_23[iVar10])
			{
				case 3:
					if (__LIB_2__::func_618(&(uParam0->f_65[iVar10 /*3*/])))
					{
						__LIB_2__::func_608(&(uParam0->f_65[iVar10 /*3*/]));
					}
					if (__LIB_0__::func_94(uParam0->f_2[iVar10], vVar1, 1) > uParam0->f_611 && iParam1 == 1)
					{
						if (FLOCK::_0x8D913E493BAFE0A3(*uParam0))
						{
							if (FLOCK::_0x34B9C4D86DF2C2F3(*uParam0) > 1)
							{
								if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar10]))
								{
									FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iVar10]);
								}
								TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iVar10], -1, 0, 1, 1);
								uParam0->f_23[iVar10] = 4;
							}
						}
					}
					break;
				case 5:
					if (!MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]) && !__LIB_4__::func_156(uParam0, 262144))
					{
						uParam0->f_358[iVar10] = MAP::_BLIP_ADD_FOR_ENTITY(-700928964, uParam0->f_2[iVar10]);
					}
					if (!__LIB_2__::func_618(&(uParam0->f_65[iVar10 /*3*/])))
					{
						__LIB_5__::func_107(&(uParam0->f_65[iVar10 /*3*/]));
					}
					vVar4 = { 0f, 0f, 0f };
					iVar11 = 0;
					while (iVar11 < 20)
					{
						if ((iVar11 != iVar10 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar11])) && uParam0->f_23[iVar11] == 3)
						{
							vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar11], true, false) };
						}
						else
						{
							iVar11++;
						}
					}
					if (__LIB_0__::func_86(vVar4))
					{
						vVar4 = { __LIB_13__::func_941(uParam0) };
						if (__LIB_0__::func_86(vVar4))
						{
							vVar4 = { vVar1 };
						}
					}
					if (__LIB_13__::func_965(uParam0, iVar10, &vVar4, &vVar7, 0) && !__LIB_4__::func_156(uParam0, 65536))
					{
						uParam0->f_44[iVar10] = ((BUILTIN::TO_FLOAT(iVar10) * 50f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 50f));
						__LIB_5__::func_107(&(uParam0->f_65[iVar10 /*3*/]));
						PED::_0x463803429297117C(uParam0->f_2[iVar10], vVar7, 3, 1);
						uParam0->f_23[iVar10] = 7;
						if (__LIB_2__::func_618(&(uParam0->f_503)))
						{
							__LIB_5__::func_107(&(uParam0->f_503));
						}
						func_696(uParam0);
					}
					if (__LIB_0__::func_94(uParam0->f_2[iVar10], vVar1, 1) > (20f + 2f))
					{
						uParam0->f_23[iVar10] = 6;
						if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]))
						{
							if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar10], -214162151))
							{
							}
						}
						if (uParam0->f_189 != 1 && uParam0->f_189 != 2)
						{
							__LIB_13__::func_966(uParam0, 1);
						}
					}
					if ((__LIB_11__::func_495(uParam0, iVar10, vVar4, 8f) && __LIB_5__::func_28(&(uParam0->f_65[iVar10 /*3*/])) > 12000) || ((__LIB_11__::func_495(uParam0, iVar10, vVar4, 3f) && __LIB_5__::func_28(&(uParam0->f_65[iVar10 /*3*/])) > 5000) && !__LIB_4__::func_156(uParam0, 65536)))
					{
						if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]))
						{
							if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar10], -700928964))
							{
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) && uParam0->f_350 == uParam0->f_2[iVar10])
						{
							__LIB_1__::func_480(&(uParam0->f_350));
							__LIB_17__::func_785(&(uParam0->f_329), &(uParam0->f_311));
						}
						__LIB_2__::func_608(&(uParam0->f_65[iVar10 /*3*/]));
						func_696(uParam0);
						uParam0->f_23[iVar10] = 3;
					}
					break;
				case 4:
					if (!MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]) && !__LIB_4__::func_156(uParam0, 262144))
					{
						uParam0->f_358[iVar10] = MAP::_BLIP_ADD_FOR_ENTITY(-700928964, uParam0->f_2[iVar10]);
					}
					if (!__LIB_2__::func_618(&(uParam0->f_65[iVar10 /*3*/])))
					{
						__LIB_5__::func_107(&(uParam0->f_65[iVar10 /*3*/]));
					}
					vVar4 = { 0f, 0f, 0f };
					iVar11 = 0;
					while (iVar11 < 20)
					{
						if ((iVar11 != iVar10 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar11])) && uParam0->f_23[iVar11] == 3)
						{
							vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar11], true, false) };
						}
						else
						{
							iVar11++;
						}
					}
					if (__LIB_0__::func_86(vVar4))
					{
						vVar4 = { __LIB_13__::func_941(uParam0) };
						if (__LIB_0__::func_86(vVar4))
						{
							vVar4 = { vVar1 };
						}
					}
					if (__LIB_13__::func_965(uParam0, iVar10, &vVar4, &vVar7, 0) && !__LIB_4__::func_156(uParam0, 65536))
					{
						uParam0->f_44[iVar10] = ((BUILTIN::TO_FLOAT(iVar10) * 50f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 50f));
						__LIB_5__::func_107(&(uParam0->f_65[iVar10 /*3*/]));
						PED::_0x463803429297117C(uParam0->f_2[iVar10], vVar7, 3, 1);
						uParam0->f_23[iVar10] = 7;
						if (__LIB_2__::func_618(&(uParam0->f_503)))
						{
							__LIB_5__::func_107(&(uParam0->f_503));
						}
						func_696(uParam0);
					}
					if (__LIB_0__::func_94(uParam0->f_2[iVar10], vVar1, 1) > (20f + 2f))
					{
						if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]))
						{
							if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar10], -214162151))
							{
							}
						}
						if (uParam0->f_189 != 1 && uParam0->f_189 != 2)
						{
							__LIB_13__::func_966(uParam0, 1);
						}
						uParam0->f_23[iVar10] = 6;
					}
					if ((__LIB_11__::func_495(uParam0, iVar10, vVar4, 8f) && __LIB_5__::func_28(&(uParam0->f_65[iVar10 /*3*/])) > 5000) && !__LIB_4__::func_156(uParam0, 65536))
					{
						if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]))
						{
							if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar10], -700928964))
							{
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) && uParam0->f_350 == uParam0->f_2[iVar10])
						{
							__LIB_1__::func_480(&(uParam0->f_350));
							__LIB_17__::func_785(&(uParam0->f_329), &(uParam0->f_311));
						}
						__LIB_2__::func_608(&(uParam0->f_65[iVar10 /*3*/]));
						func_696(uParam0);
						uParam0->f_23[iVar10] = 3;
					}
					break;
				case 6:
					if (!MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]) && !__LIB_4__::func_156(uParam0, 262144))
					{
						uParam0->f_358[iVar10] = MAP::_BLIP_ADD_FOR_ENTITY(-214162151, uParam0->f_2[iVar10]);
					}
					vVar4 = { 0f, 0f, 0f };
					iVar11 = 0;
					while (iVar11 < 20)
					{
						if ((iVar11 != iVar10 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar11])) && uParam0->f_23[iVar11] == 3)
						{
							vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar11], true, false) };
						}
						else
						{
							iVar11++;
						}
					}
					if (__LIB_0__::func_86(vVar4))
					{
						vVar4 = { __LIB_13__::func_941(uParam0) };
						if (__LIB_0__::func_86(vVar4))
						{
							vVar4 = { vVar1 };
						}
					}
					if (__LIB_13__::func_965(uParam0, iVar10, &vVar4, &vVar7, 0) && !__LIB_4__::func_156(uParam0, 65536))
					{
						uParam0->f_44[iVar10] = ((BUILTIN::TO_FLOAT(iVar10) * 50f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 50f));
						__LIB_5__::func_107(&(uParam0->f_65[iVar10 /*3*/]));
						PED::_0x463803429297117C(uParam0->f_2[iVar10], vVar7, 3, 1);
						uParam0->f_23[iVar10] = 7;
						if (__LIB_2__::func_618(&(uParam0->f_503)))
						{
							__LIB_5__::func_107(&(uParam0->f_503));
						}
						func_696(uParam0);
						return;
					}
					if (__LIB_11__::func_495(uParam0, iVar10, vVar4, 1101004800 /* Float: 20f */) && !__LIB_4__::func_156(uParam0, 65536))
					{
						if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]))
						{
							if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar10], -700928964))
							{
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) && uParam0->f_350 == uParam0->f_2[iVar10])
						{
							__LIB_1__::func_480(&(uParam0->f_350));
							__LIB_17__::func_785(&(uParam0->f_329), &(uParam0->f_311));
						}
						__LIB_2__::func_608(&(uParam0->f_65[iVar10 /*3*/]));
						func_696(uParam0);
						uParam0->f_23[iVar10] = 3;
					}
					break;
				case 7:
					if (!__LIB_2__::func_618(&(uParam0->f_65[iVar10 /*3*/])))
					{
						__LIB_5__::func_107(&(uParam0->f_65[iVar10 /*3*/]));
					}
					else if (IntToFloat(__LIB_5__::func_28(&(uParam0->f_65[iVar10 /*3*/]))) >= uParam0->f_44[iVar10])
					{
						iVar11 = 0;
						while (iVar11 < 20)
						{
							if ((iVar11 != iVar10 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar11])) && uParam0->f_23[iVar11] == 3)
							{
								TASK::_0xE01C8DC8EDD28D31(uParam0->f_2[iVar10], 1);
								if (__LIB_0__::func_665(uParam0->f_2[iVar10], uParam0->f_2[iVar11], 1, 1) > 100f)
								{
									if (!__LIB_0__::func_163(uParam0->f_2[iVar10], 713668775))
									{
										uParam0->f_126[iVar10 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar11], false, false) };
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_2[iVar10], uParam0->f_126[iVar10 /*3*/], 2.5f, -1, 0.1f, 1048580, 40000f);
									}
								}
								else if (!__LIB_0__::func_163(uParam0->f_2[iVar10], 1056466932))
								{
									TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uParam0->f_2[iVar10], uParam0->f_2[iVar11], 0f, 1f, 0f, 2.5f, -1, 0.1f, 1, 0, 1, 0, 1);
									uParam0->f_126[iVar10 /*3*/] = { 0f, 0f, 0f };
								}
								uParam0->f_23[iVar10] = 8;
								__LIB_2__::func_608(&(uParam0->f_65[iVar10 /*3*/]));
								return;
							}
							iVar11++;
						}
						if (uParam0->f_23[iVar10] != 8)
						{
							TASK::_0xE01C8DC8EDD28D31(uParam0->f_2[iVar10], 1);
							if (uParam0->f_189 == 7)
							{
								uParam0->f_126[iVar10 /*3*/] = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_444) };
							}
							else
							{
								uParam0->f_126[iVar10 /*3*/] = { __LIB_13__::func_941(uParam0) };
							}
							if (__LIB_0__::func_86(uParam0->f_126[iVar10 /*3*/]))
							{
								uParam0->f_126[iVar10 /*3*/] = { vVar1 };
							}
							if (__LIB_0__::func_94(uParam0->f_2[iVar10], uParam0->f_126[iVar10 /*3*/], 1) > 100f)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_2[iVar10], uParam0->f_126[iVar10 /*3*/], 2.5f, -1, 0.1f, 1048580, 40000f);
							}
							else
							{
								TASK::TASK_FOLLOW_TO_OFFSET_OF_COORD(uParam0->f_2[iVar10], uParam0->f_126[iVar10 /*3*/], 0f, 0f, 0f, 2.5f, -1, 0.1f, 1, 1, 1, 0, 1);
							}
							uParam0->f_23[iVar10] = 9;
							__LIB_2__::func_608(&(uParam0->f_65[iVar10 /*3*/]));
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) && uParam0->f_350 == uParam0->f_2[iVar10])
							{
								__LIB_1__::func_480(&(uParam0->f_350));
								__LIB_17__::func_785(&(uParam0->f_329), &(uParam0->f_311));
							}
							return;
						}
					}
					break;
				case 8:
					if (__LIB_0__::func_94(uParam0->f_2[iVar10], vVar1, 1) <= 20f || (__LIB_0__::func_94(uParam0->f_2[iVar10], uParam0->f_126[iVar10 /*3*/], 1) <= 10f && !__LIB_0__::func_86(uParam0->f_126[iVar10 /*3*/])))
					{
						if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]))
						{
							if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar10], -700928964))
							{
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) && uParam0->f_350 == uParam0->f_2[iVar10])
						{
							__LIB_1__::func_480(&(uParam0->f_350));
							__LIB_17__::func_785(&(uParam0->f_329), &(uParam0->f_311));
						}
						__LIB_2__::func_608(&(uParam0->f_65[iVar10 /*3*/]));
						uParam0->f_23[iVar10] = 3;
						uParam0->f_126[iVar10 /*3*/] = { 0f, 0f, 0f };
						iVar12 = 0;
						while (iVar12 < 20)
						{
							if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar12]) && uParam0->f_23[iVar12] == 3)
							{
								if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar12]))
								{
									if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar12], -700928964))
									{
									}
								}
							}
							iVar12++;
						}
					}
					else if ((!__LIB_0__::func_163(uParam0->f_2[iVar10], 1056466932) && !__LIB_0__::func_163(uParam0->f_2[iVar10], 713668775)) && !TASK::_0x0C3CB2E600C8977D(uParam0->f_2[iVar10], 1))
					{
						TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iVar10], -1, 0, 1, 1);
						uParam0->f_23[iVar10] = 6;
					}
					else if (((__LIB_0__::func_163(uParam0->f_2[iVar10], 1056466932) || __LIB_0__::func_163(uParam0->f_2[iVar10], 713668775)) && !TASK::_0x0C3CB2E600C8977D(uParam0->f_2[iVar10], 1)) && PED::IS_PED_STOPPED(uParam0->f_2[iVar10]))
					{
						if (!__LIB_2__::func_618(&(uParam0->f_65[iVar10 /*3*/])))
						{
							__LIB_5__::func_107(&(uParam0->f_65[iVar10 /*3*/]));
						}
						else if (__LIB_5__::func_28(&(uParam0->f_65[iVar10 /*3*/])) > 3000)
						{
							iVar11 = 0;
							while (iVar11 < 20)
							{
								if ((iVar11 != iVar10 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar11])) && uParam0->f_23[iVar11] == 3)
								{
									if (__LIB_0__::func_665(uParam0->f_2[iVar10], uParam0->f_2[iVar11], 1, 1) > 100f)
									{
										uParam0->f_126[iVar10 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar11], false, false) };
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_2[iVar10], uParam0->f_126[iVar10 /*3*/], 2.5f, -1, 0.1f, 1048580, 40000f);
									}
									else
									{
										TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uParam0->f_2[iVar10], uParam0->f_2[iVar11], 0f, 1f, 0f, 2.5f, -1, 0.1f, 1, 0, 1, 0, 1);
										uParam0->f_126[iVar10 /*3*/] = { 0f, 0f, 0f };
									}
									uParam0->f_23[iVar10] = 8;
									__LIB_5__::func_107(&(uParam0->f_65[iVar10 /*3*/]));
									return;
								}
								iVar11++;
							}
						}
					}
					else
					{
						if (__LIB_2__::func_618(&(uParam0->f_65[iVar10 /*3*/])))
						{
							__LIB_2__::func_608(&(uParam0->f_65[iVar10 /*3*/]));
						}
						if (__LIB_0__::func_163(uParam0->f_2[iVar10], 713668775))
						{
							if (__LIB_0__::func_94(uParam0->f_2[iVar10], uParam0->f_126[iVar10 /*3*/], 1) < 15f)
							{
								iVar11 = 0;
								while (iVar11 < 20)
								{
									if ((iVar11 != iVar10 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar11])) && uParam0->f_23[iVar11] == 3)
									{
										if (__LIB_0__::func_665(uParam0->f_2[iVar10], uParam0->f_2[iVar11], 1, 1) > 100f)
										{
											uParam0->f_126[iVar10 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar11], false, false) };
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_2[iVar10], uParam0->f_126[iVar10 /*3*/], 2.5f, -1, 0.1f, 1048580, 40000f);
										}
										else
										{
											TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uParam0->f_2[iVar10], uParam0->f_2[iVar11], 0f, 1f, 0f, 2.5f, -1, 0.1f, 1, 0, 1, 0, 1);
											uParam0->f_126[iVar10 /*3*/] = { 0f, 0f, 0f };
										}
										uParam0->f_23[iVar10] = 8;
										__LIB_5__::func_107(&(uParam0->f_65[iVar10 /*3*/]));
										return;
									}
									iVar11++;
								}
							}
						}
						if (!__LIB_4__::func_156(uParam0, 16384))
						{
							__LIB_13__::func_955(uParam0, 16384);
						}
					}
					if (!MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]) && !__LIB_4__::func_156(uParam0, 262144))
					{
						uParam0->f_358[iVar10] = MAP::_BLIP_ADD_FOR_ENTITY(-214162151, uParam0->f_2[iVar10]);
					}
					break;
				case 9:
					if (((!__LIB_0__::func_163(uParam0->f_2[iVar10], -1775383291) && !__LIB_0__::func_163(uParam0->f_2[iVar10], 713668775)) && !TASK::_0x0C3CB2E600C8977D(uParam0->f_2[iVar10], 1)) || __LIB_11__::func_495(uParam0, iVar10, uParam0->f_126[iVar10 /*3*/], 10f))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) && uParam0->f_350 == uParam0->f_2[iVar10])
						{
							__LIB_1__::func_480(&(uParam0->f_350));
							__LIB_17__::func_785(&(uParam0->f_329), &(uParam0->f_311));
						}
						uParam0->f_126[iVar10 /*3*/] = { 0f, 0f, 0f };
						uParam0->f_23[iVar10] = 3;
						iVar13 = 0;
						while (iVar13 < 20)
						{
							if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar13]) && uParam0->f_23[iVar13] == 3)
							{
								if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar13]))
								{
									if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar13], -700928964))
									{
									}
								}
								else
								{
									uParam0->f_358[iVar13] = MAP::_BLIP_ADD_FOR_ENTITY(-700928964, uParam0->f_2[iVar13]);
								}
							}
							iVar13++;
						}
					}
					if (!MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]) && !__LIB_4__::func_156(uParam0, 262144))
					{
						uParam0->f_358[iVar10] = MAP::_BLIP_ADD_FOR_ENTITY(-214162151, uParam0->f_2[iVar10]);
					}
					break;
			}
		}
		iVar10++;
	}
	if (bVar0 || __LIB_11__::func_496(uParam0))
	{
		__LIB_18__::func_726(uParam0, &(uParam0->f_190[uParam0->f_209 /*9*/]), 0);
		if (__LIB_4__::func_156(uParam0, 16384))
		{
			iVar15 = __LIB_13__::func_942(uParam0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar15))
			{
				fVar14 = BUILTIN::VDIST(vVar1, ENTITY::GET_ENTITY_COORDS(iVar15, false, false));
				vVar16 = { ENTITY::GET_ENTITY_COORDS(iVar15, false, false) };
				PATHFIND::_0xCF213A5FC3ABFC08(vVar16.x, vVar16.y, fVar14);
			}
			else
			{
				fVar14 = 40f;
				PATHFIND::_0xCF213A5FC3ABFC08(vVar1.x, vVar1.y, fVar14);
			}
		}
	}
	else if (__LIB_4__::func_156(uParam0, 16384))
	{
		__LIB_13__::func_958(uParam0, 16384);
	}
}

void func_753(var uParam0)
{
	int iVar0;
	vector3 vVar1[24];
	if (__LIB_11__::func_494(uParam0, 8))
	{
		return;
	}
	if (__LIB_0__::func_86(uParam0->f_613))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_440))
		{
			__LIB_1__::func_480(&(uParam0->f_440));
			PED::SET_PED_CONFIG_FLAG(uParam0->f_440, 297, false);
		}
		__LIB_2__::func_624(&(uParam0->f_401), 0, 1, 1, 0);
		__LIB_17__::func_785(&(uParam0->f_419), &(uParam0->f_401));
		return;
	}
	if (uParam0->f_189 >= 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_440))
		{
			__LIB_1__::func_480(&(uParam0->f_440));
			PED::SET_PED_CONFIG_FLAG(uParam0->f_440, 297, false);
		}
		__LIB_2__::func_624(&(uParam0->f_401), 0, 0, 1, 0);
		__LIB_17__::func_785(&(uParam0->f_419), &(uParam0->f_401));
		return;
	}
	if (uParam0->f_209 == -1)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_440) || (!__LIB_3__::func_572(PLAYER::GET_PLAYER_INDEX(), uParam0->f_440, &(uParam0->f_419)) && uParam0->f_400 != 2))
	{
		iVar0 = __LIB_13__::func_968(uParam0, &(uParam0->f_190[uParam0->f_209 /*9*/]), 0);
		if (uParam0->f_440 != iVar0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_440))
			{
				__LIB_1__::func_480(&(uParam0->f_440));
				PED::SET_PED_CONFIG_FLAG(uParam0->f_440, 297, false);
			}
			__LIB_17__::func_785(&(uParam0->f_419), &(uParam0->f_401));
			__LIB_13__::func_985(uParam0);
			uParam0->f_440 = iVar0;
			PED::SET_PED_CONFIG_FLAG(uParam0->f_440, 297, true);
		}
	}
	if ((AUDIO::_0xFE5C6177064BD390(1) || AUDIO::_0xA2CAC9DEF0195E6F(1)) || uParam0->f_400 == 2)
	{
		if (__LIB_2__::func_466(&(uParam0->f_401[0 /*17*/]), 0, 0))
		{
			__LIB_3__::func_515(&(uParam0->f_401[0 /*17*/]), 0, 0);
		}
	}
	else if (uParam0->f_400 != 2)
	{
		if (!__LIB_2__::func_466(&(uParam0->f_401[0 /*17*/]), 0, 0))
		{
			__LIB_3__::func_515(&(uParam0->f_401[0 /*17*/]), 1, 0);
		}
	}
	if (uParam0->f_400 == 1 || uParam0->f_400 == 2)
	{
		func_636(&(uParam0->f_440), &(uParam0->f_419), (uParam0->f_636 + 4f), &(uParam0->f_401), 0f, 3, 0, __LIB_11__::func_504(uParam0), __LIB_2__::func_340(2, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */);
	}
	if (uParam0->f_400 == 1 || (uParam0->f_400 == 2 && __LIB_3__::func_572(PLAYER::GET_PLAYER_INDEX(), uParam0->f_440, &(uParam0->f_419))))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 266, true);
	}
	if (__LIB_11__::func_505(uParam0))
	{
		if (uParam0->f_400 == 0 || uParam0->f_400 == 1)
		{
			__LIB_5__::func_107(&(uParam0->f_441));
			__LIB_3__::func_515(&(uParam0->f_401[0 /*17*/]), 0, 0);
			uParam0->f_637 = (uParam0->f_636 + 20f);
			uParam0->f_400 = 2;
		}
		else if (uParam0->f_400 == 2)
		{
			__LIB_5__::func_107(&(uParam0->f_441));
		}
		if (func_1237(uParam0, 50f, 1065353216 /* Float: 1f */, 0, 5f, 1))
		{
		}
	}
	switch (uParam0->f_400)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, false, false), __LIB_11__::func_467(uParam0, 1), true) <= uParam0->f_636)
			{
				uParam0->f_400 = 1;
			}
			break;
		case 1:
			if (__LIB_9__::func_754(&(uParam0->f_419)))
			{
				if (!__LIB_0__::func_481(1) && !__LIB_0__::func_181())
				{
					StringCopy(&cVar1, "HRD_SHOUT", 24);
					if (__LIB_1__::func_104(&(uParam0->f_506), cVar1, 0, -1, 0, 0))
					{
						func_1238(uParam0);
					}
				}
				else
				{
					func_1238(uParam0);
				}
			}
			else if (!__LIB_3__::func_572(PLAYER::GET_PLAYER_INDEX(), uParam0->f_440, &(uParam0->f_419)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, false, false), __LIB_11__::func_467(uParam0, 1), true) > (uParam0->f_636 + 5f))
			{
				__LIB_1__::func_480(&(uParam0->f_440));
				PED::SET_PED_CONFIG_FLAG(uParam0->f_440, 297, false);
				__LIB_17__::func_785(&(uParam0->f_419), &(uParam0->f_401));
				uParam0->f_440 = 0;
				uParam0->f_400 = 0;
			}
			break;
		case 2:
			if (!__LIB_2__::func_618(&(uParam0->f_441)))
			{
				__LIB_5__::func_107(&(uParam0->f_441));
			}
			else if (__LIB_5__::func_28(&(uParam0->f_441)) >= 10000)
			{
				uParam0->f_637 = uParam0->f_636;
				__LIB_2__::func_608(&(uParam0->f_441));
				__LIB_3__::func_515(&(uParam0->f_401[0 /*17*/]), 1, 0);
				uParam0->f_400 = 0;
			}
			break;
	}
}

void func_756(var uParam0)
{
	int iVar0;
	struct<9> Var1;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	float fVar21;
	vector3 vVar22;
	vector3 vVar25;
	vector3 vVar28;
	vector3 vVar31;
	float fVar34;
	var uVar35;
	float fVar36;
	vector3 vVar37;
	var uVar40;
	if (__LIB_13__::func_943(uParam0))
	{
		Var1 = -1;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (uParam0->f_190[iVar0 /*9*/] == 0)
			{
				Var1 = { uParam0->f_190[iVar0 /*9*/] };
			}
			if ((uParam0->f_190[iVar0 /*9*/] == 1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_190[iVar0 /*9*/].f_2)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_190[iVar0 /*9*/].f_2))
			{
				iVar10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_190[iVar0 /*9*/].f_2);
				if (!PED::GET_PED_CONFIG_FLAG(iVar10, 167, true) && !__LIB_13__::func_969(uParam0))
				{
					PED::SET_PED_CONFIG_FLAG(iVar10, 167, true);
				}
				iVar11 = iVar0;
			}
			iVar0++;
		}
		if (!__LIB_13__::func_969(uParam0) && (__LIB_0__::func_272(iVar10, 0) || __LIB_13__::func_944(uParam0)))
		{
			vVar12 = { __LIB_11__::func_467(uParam0, 1) };
			vVar15 = { __LIB_13__::func_970(uParam0, &Var1) };
			vVar18 = { __LIB_13__::func_941(uParam0) - vVar12 };
			vVar18 = { __LIB_0__::func_173(vVar18) };
			fVar21 = __LIB_1__::func_95(vVar15, vVar18);
			fVar21 = MISC::ABSF(fVar21);
			vVar22 = { vVar12 + vVar18 * Vector(fVar21, fVar21, fVar21) };
			vVar15 = { vVar15 + vVar12 };
			vVar25 = { vVar22 - vVar15 };
			vVar28 = { vVar25 + vVar22 };
			vVar31 = { vVar12 - vVar28 };
			fVar34 = BUILTIN::VMAG(vVar31);
			vVar31 = { __LIB_0__::func_173(vVar31) };
			fVar34 = (fVar34 + __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], vVar12, 1));
			fVar34 = (fVar34 + 12.5f);
			if (fVar34 < uParam0->f_637)
			{
				fVar34 = uParam0->f_637;
			}
			vVar31 = { vVar31 * Vector(fVar34, fVar34, fVar34) };
			vVar31 = { vVar31 + vVar28 };
			vVar31.f_2 = (vVar31.z + 50f);
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar31, &uVar35, false);
			vVar31.f_2 = uVar35;
			uParam0->f_494 = { vVar31 };
			fVar36 = __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], vVar12, 1);
			if (__LIB_13__::func_944(uParam0))
			{
				vVar37 = { ENTITY::GET_ENTITY_COORDS(Var1.f_2, true, false) };
			}
			else
			{
				vVar37 = { ENTITY::GET_ENTITY_COORDS(iVar10, false, false) };
			}
			uParam0->f_494 = { __LIB_13__::func_971(&vVar37, &(uParam0->f_494), &vVar12, (fVar36 + 5f)) };
			uParam0->f_494 = { uParam0->f_494 + Vector(20f, 0f, 0f) };
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_494, &uVar40, false))
			{
				uParam0->f_494.f_2 = uVar40;
			}
			else
			{
				uParam0->f_494 = { uParam0->f_494 - Vector(20f, 0f, 0f) };
			}
		}
		if (__LIB_13__::func_943(uParam0) && (__LIB_0__::func_272(iVar10, 0) || __LIB_13__::func_944(uParam0)))
		{
			__LIB_18__::func_726(uParam0, &(uParam0->f_190[iVar11 /*9*/]), 1);
			if (!__LIB_2__::func_618(&(uParam0->f_660)))
			{
				__LIB_2__::func_620(&(uParam0->f_660), 250f);
			}
			else if (__LIB_5__::func_28(&(uParam0->f_660)) >= 250 || uParam0->f_210 == 2)
			{
				if (__LIB_0__::func_272(iVar10, 0) && !__LIB_13__::func_944(uParam0))
				{
					if (!PED::IS_PED_ON_MOUNT(iVar10))
					{
						return;
					}
				}
				func_1244(uParam0, &Var1, &(uParam0->f_190[iVar11 /*9*/]));
				func_1245(uParam0, &(uParam0->f_190[iVar11 /*9*/]), &Var1);
				switch (uParam0->f_210)
				{
					case 4:
						if (!__LIB_11__::func_500(uParam0))
						{
							if (func_1247(uParam0, &(uParam0->f_190[iVar11 /*9*/])))
							{
								__LIB_11__::func_501(uParam0, uParam0->f_210.f_1);
							}
						}
						else
						{
							__LIB_18__::func_364(uParam0, &(uParam0->f_190[iVar11 /*9*/]), &Var1);
						}
						break;
					case 5:
						if (!__LIB_11__::func_500(uParam0))
						{
							if (func_1247(uParam0, &Var1))
							{
								__LIB_11__::func_501(uParam0, uParam0->f_210.f_1);
							}
						}
						else
						{
							func_1250(uParam0, &Var1);
						}
						break;
					case 6:
						func_1251(uParam0, &Var1);
						break;
					case 0:
						if (!__LIB_11__::func_500(uParam0))
						{
							if (func_1247(uParam0, &(uParam0->f_190[iVar11 /*9*/])))
							{
								__LIB_11__::func_501(uParam0, uParam0->f_210.f_1);
							}
						}
						else
						{
							func_1252(uParam0, &(uParam0->f_190[iVar11 /*9*/]), &Var1);
						}
						break;
					case 1:
						if (!__LIB_11__::func_500(uParam0))
						{
							if (func_1247(uParam0, &(uParam0->f_190[iVar11 /*9*/])))
							{
								__LIB_11__::func_501(uParam0, uParam0->f_210.f_1);
							}
						}
						else
						{
							if (PED::IS_PED_IN_GROUP(iVar10))
							{
								PED::REMOVE_PED_FROM_GROUP(iVar10);
							}
							func_1253(uParam0, &(uParam0->f_190[iVar11 /*9*/]));
						}
						break;
					case 2:
						if (!__LIB_11__::func_500(uParam0))
						{
							if (func_1247(uParam0, &(uParam0->f_190[iVar11 /*9*/])))
							{
								__LIB_11__::func_501(uParam0, uParam0->f_210.f_1);
							}
						}
						else
						{
							if (PED::IS_PED_IN_GROUP(iVar10))
							{
								PED::REMOVE_PED_FROM_GROUP(iVar10);
							}
							func_1254(uParam0, &(uParam0->f_190[iVar11 /*9*/]));
						}
						break;
					case 3:
						if (!__LIB_11__::func_500(uParam0))
						{
							if (func_1247(uParam0, &(uParam0->f_190[iVar11 /*9*/])))
							{
								__LIB_11__::func_501(uParam0, uParam0->f_210.f_1);
							}
						}
						else
						{
							if (PED::IS_PED_IN_GROUP(iVar10))
							{
								PED::REMOVE_PED_FROM_GROUP(iVar10);
							}
							__LIB_18__::func_365(uParam0, &(uParam0->f_190[iVar11 /*9*/]));
						}
						break;
				}
				if (__LIB_11__::func_494(uParam0, 32))
				{
					__LIB_13__::func_963(uParam0, 32);
				}
				__LIB_5__::func_107(&(uParam0->f_660));
			}
		}
	}
}

void func_758(var uParam0)
{
	float fVar0;
	if (uParam0->f_189 >= 7 || uParam0->f_189 < 5)
	{
		return;
	}
	fVar0 = __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], uParam0->f_613, 1);
	switch (uParam0->f_304)
	{
		case 0:
			if (uParam0->f_209 != -1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_190[uParam0->f_209 /*9*/].f_2) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_190[uParam0->f_209 /*9*/].f_2) == PLAYER::PLAYER_PED_ID())
				{
					if (__LIB_0__::func_94(uParam0->f_190[uParam0->f_209 /*9*/].f_2, uParam0->f_613, 1) <= (fVar0 + 2.5f))
					{
						uParam0->f_304.f_4++;
						__LIB_5__::func_107(&(uParam0->f_304.f_1));
						uParam0->f_304 = 1;
					}
				}
			}
			break;
		case 1:
			if (uParam0->f_209 != -1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_190[uParam0->f_209 /*9*/].f_2) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_190[uParam0->f_209 /*9*/].f_2) == PLAYER::PLAYER_PED_ID())
				{
					if (__LIB_0__::func_94(uParam0->f_190[uParam0->f_209 /*9*/].f_2, uParam0->f_613, 1) > ((fVar0 + 2.5f) + 1.25f))
					{
						__LIB_2__::func_608(&(uParam0->f_304.f_1));
						uParam0->f_304 = 0;
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(PED::GET_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_190[uParam0->f_209 /*9*/].f_2))) && !ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_190[uParam0->f_209 /*9*/].f_2))))
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_190[uParam0->f_209 /*9*/].f_2)), 1.25f);
						}
						if (__LIB_2__::func_618(&(uParam0->f_304.f_1)) && __LIB_5__::func_28(&(uParam0->f_304.f_1)) > 3500)
						{
							__LIB_2__::func_608(&(uParam0->f_304.f_1));
							uParam0->f_304 = 2;
						}
					}
				}
			}
			if (uParam0->f_304.f_4 >= 5 && PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_0__::func_45("HERDING_CLOSE", 10000, 0, 0, 0, 1) != 0)
				{
					uParam0->f_304.f_4 = 0;
				}
			}
			break;
		case 2:
			if (uParam0->f_209 != -1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_190[uParam0->f_209 /*9*/].f_2) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_190[uParam0->f_209 /*9*/].f_2) == PLAYER::PLAYER_PED_ID())
				{
					if (__LIB_0__::func_94(uParam0->f_190[uParam0->f_209 /*9*/].f_2, uParam0->f_613, 1) > ((fVar0 + 2.5f) + 1.25f))
					{
						__LIB_2__::func_608(&(uParam0->f_304.f_1));
						uParam0->f_304 = 0;
					}
				}
			}
			break;
	}
}

void func_766(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	if (uParam0->f_395)
	{
		if (!__LIB_2__::func_618(&(uParam0->f_397)))
		{
			if (!__LIB_0__::func_86(uParam0->f_613) && !__LIB_0__::func_86(uParam0->f_616))
			{
				if (__LIB_0__::func_138(uParam0->f_613, uParam0->f_616))
				{
					fVar0 = 0f;
				}
				else
				{
					fVar0 = BUILTIN::VMAG(uParam0->f_613 - uParam0->f_616);
				}
				if (fVar0 != 0f)
				{
					__LIB_5__::func_107(&(uParam0->f_397));
				}
			}
		}
		if (!__LIB_4__::func_156(uParam0, 2))
		{
			vVar1 = { uParam0->f_644 };
		}
		else if (TASK::_0x22CD2C33ED4467A1(uParam0->f_788))
		{
			vVar1 = { TASK::_0x91CB5E431F579BA1(uParam0->f_788) };
		}
		vVar4 = { __LIB_1__::func_367(vVar1, uParam0->f_625, uParam0->f_396) };
		uParam0->f_625 = { vVar4 };
		if (__LIB_2__::func_618(&(uParam0->f_397)) && __LIB_5__::func_28(&(uParam0->f_397)) > 2000)
		{
			uParam0->f_396 = (uParam0->f_396 + 0.05f);
			if (uParam0->f_396 > 1f)
			{
				uParam0->f_395 = 0;
				__LIB_2__::func_608(&(uParam0->f_397));
			}
		}
	}
}

void func_771(var uParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iParam1]))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam2))
		{
			TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iParam1], -1, iParam2, 1, 1);
		}
		else
		{
			TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iParam1], -1, 0, 1, 1);
		}
	}
}

void func_772()
{
	if (__LIB_0__::func_272(iLocal_22, 0))
	{
		if (!__LIB_0__::func_272(iLocal_23, 0))
		{
			if (PED::IS_PED_ON_MOUNT(iLocal_22))
			{
				iLocal_23 = PED::GET_MOUNT(iLocal_22);
			}
			else
			{
				func_595(4, 1, 1, 0, 0, 0, 0, 0);
				iLocal_23 = func_596(4, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_23))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_23, true);
				}
			}
		}
		else
		{
			switch (iLocal_80)
			{
				case 0:
					if (!__LIB_0__::func_163(iLocal_22, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_22, vLocal_1017, 1f, 20000, 0.25f, 0, 40000f);
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_22, vLocal_1017, 2f, 3f, 3f, false, true, 0))
					{
						iLocal_80 = 1;
					}
					break;
				case 1:
					if ((PED::IS_PED_ON_MOUNT(iLocal_22) && !__LIB_0__::func_163(iLocal_22, 501393341)) && !__LIB_0__::func_163(iLocal_22, 1920417248))
					{
						TASK::TASK_DISMOUNT_ANIMAL(iLocal_22, 0, 0, 0, 0, 0);
					}
					else if (!PED::IS_PED_ON_MOUNT(iLocal_22))
					{
						iLocal_80 = 2;
					}
					break;
				case 2:
					if (!__LIB_0__::func_163(iLocal_22, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_22, vLocal_1020, 1.5f, 20000, 0.25f, 0, 40000f);
						Local_1520.f_3 = iLocal_31;
						Local_1520.f_7 = -1;
						Local_1520.f_20 = 4;
						Local_1520.f_19 = 4;
						Local_1520.f_17 = 0;
						Local_1520.f_18 = 0;
						_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_22, &Local_1520);
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_22, vLocal_1020, 2f, 3f, 3f, false, true, 0))
					{
						iLocal_80 = 3;
					}
					break;
				case 3:
					break;
			}
		}
		if (PED::GET_PED_CONFIG_FLAG(iLocal_22, 167, true))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_22, 167, false);
		}
	}
}

bool func_777()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[4]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[4], false))
	{
		if (ANIMSCENE::_0x1F0E401031E20146(iLocal_15[4], "pl_CloseGate") && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_15[4]) > 0.75f)
		{
			return true;
		}
	}
	return false;
}

bool func_778()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[5]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_15[5], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[5], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_31) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[5], "CLAY", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[5], "CLAY", iLocal_31, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[5], "CLIVE", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[5], "CLIVE", iLocal_32, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[5], "ARTHUR", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_15[5], "ARTHUR", Global_35, 0);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[5], "CLAY", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[5], "CLIVE", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_15[5], "ARTHUR", false)))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_15[5]);
			return true;
		}
	}
	else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_15[5]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_15[5], true, false)) && (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_15[5], false) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_15[5], false)))
	{
		return true;
	}
	return false;
}

bool func_783(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4)
{
	int iVar0;
	__LIB_1__::func_534(uParam4, &cParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		func_1292(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_156, false))
				{
					func_1293(uParam4, &cParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
				{
					__LIB_8__::func_898(uParam4, 4);
					return false;
				}
				else if (__LIB_1__::func_503(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_149);
				}
				__LIB_8__::func_898(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_158)) && __LIB_0__::func_84(uParam4, 134217728))
				{
				}
				else
				{
					__LIB_1__::func_739(uParam4);
				}
				__LIB_5__::func_107(&(uParam4->f_1));
				__LIB_8__::func_898(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_1__::func_743(uParam4);
				if (!__LIB_2__::func_618(&(uParam4->f_1)))
				{
					__LIB_8__::func_901(&(uParam4->f_1), 0);
				}
				else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
					}
					__LIB_8__::func_898(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
			{
				if (__LIB_17__::func_759(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
					{
						__LIB_8__::func_898(uParam4, 4);
					}
					else if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam4)) && !__LIB_0__::func_266(Global_35, __LIB_0__::func_85(uParam4), 100f, 1, 1))
					{
						__LIB_0__::func_87(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_85(uParam4), 0f, true, true, true, false);
					}
				}
				else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
					}
					__LIB_8__::func_898(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					__LIB_0__::func_722(1, 0);
					func_1293(uParam4, &cParam0);
					__LIB_8__::func_898(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
				}
				__LIB_8__::func_898(uParam4, 4);
			}
			break;
		case 3:
			func_1300(uParam4);
			if (__LIB_1__::func_503(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_149);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_156, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_1__::func_541(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!__LIB_0__::func_84(uParam4, 512))
				{
					__LIB_5__::func_107(&(uParam4->f_1));
					__LIB_0__::func_88(uParam4, 512);
					__LIB_8__::func_898(uParam4, 4);
				}
				else if (__LIB_0__::func_84(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_1292(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_1__::func_504(uParam4) - __LIB_1__::func_505(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_1__::func_540(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_1__::func_505(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_1__::func_506(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
				}
				__LIB_0__::func_488(uParam4);
				func_1307(uParam4);
				return true;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_156);
						}
						__LIB_5__::func_107(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_1__::func_477(uParam4, 67108864, 1);
						__LIB_8__::func_898(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_1__::func_505(uParam4) <= 5000) && __LIB_1__::func_505(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_6__::func_726(&(uParam4->f_213), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_1__::func_505(uParam4) >= 5000 && __LIB_1__::func_505(uParam4) <= (__LIB_1__::func_504(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_1__::func_506(uParam4))
			{
				__LIB_0__::func_488(uParam4);
				func_1307(uParam4);
				return true;
			}
			break;
		case 4:
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return false;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_156))
					{
						return false;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_1__::func_503(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_150);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, false);
						}
						__LIB_8__::func_898(uParam4, 3);
					}
					else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, false);
						}
						__LIB_8__::func_898(uParam4, 3);
					}
				}
				if (__LIB_0__::func_81(uParam4) == 3)
				{
					if (__LIB_0__::func_84(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			__LIB_8__::func_898(uParam4, 4);
			break;
	}
	return false;
}

int func_799()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_22))
	{
		__LIB_6__::func_767();
		__LIB_1__::func_290(4, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_22, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_22, PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
		__LIB_0__::func_904(4, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_22, 297, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_22, 315, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_22, 130, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_22, 331, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_22, 330, true);
		__LIB_1__::func_288(4, -922193456, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_22, 83, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_22, 297, false);
		return 1;
	}
	if (!__LIB_0__::func_903(4))
	{
		iLocal_22 = func_317(4, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	}
	iLocal_22 = func_317(4, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	return 0;
}

int func_800(int iParam0)
{
	vector3 vVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_24))
	{
		return 1;
	}
	vVar0 = { func_610(iParam0) };
	iLocal_24 = func_1332(1, 1, 0, vVar0.x, vVar0.y, vVar0.z, func_1331(iParam0));
	return 0;
}

int func_801(int iParam0)
{
	float fVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_23))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_23, true);
		return 1;
	}
	func_595(4, 1, 1, 0, 0, 0, 0, 0);
	iLocal_23 = func_596(4, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_23))
	{
		switch (iParam0)
		{
			case 0:
				fVar0 = 256.3022f;
				func_652(iLocal_23, func_1333(iParam0), fVar0, 2, 1073741824 /* Float: 2f */);
				break;
			case 1:
				func_652(iLocal_23, func_1333(iParam0), 69.9616f, 4, 1073741824 /* Float: 2f */);
				break;
			case 2:
			case 3:
				func_652(iLocal_23, func_1333(iParam0), 75.8358f, 4, 1073741824 /* Float: 2f */);
				break;
			case 4:
				func_652(iLocal_23, func_1333(iParam0), 75.8358f, 4, 1073741824 /* Float: 2f */);
				break;
			case 5:
				func_652(iLocal_23, func_1333(iParam0), 80.1176f, 4, 1073741824 /* Float: 2f */);
				break;
			default:
				func_652(iLocal_23, func_1333(iParam0), 256.3022f, 2, 1073741824 /* Float: 2f */);
				break;
		}
	}
	return 0;
}

int func_802()
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1517))
	{
		sLocal_1517 = func_1334();
	}
	HUD::_TEXT_DATABASE_REQUEST("CURU");
	HUD::_TEXT_DATABASE_REQUEST("CURUAUD");
	STREAMING::REQUEST_MODEL(joaat("P_RUSSLINGGATELOCK02X"), false);
	STREAMING::REQUEST_MODEL(iLocal_40, false);
	STREAMING::REQUEST_MODEL(iLocal_41, false);
	STREAMING::REQUEST_MODEL(iLocal_42, false);
	STREAMING::REQUEST_MODEL(iLocal_43, false);
	STREAMING::REQUEST_MODEL(iLocal_44, false);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1517);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1518);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1519);
	if ((((((((((HUD::_TEXT_DATABASE_HAS_LOADED("CURU") && HUD::_TEXT_DATABASE_HAS_LOADED("CURUAUD")) && STREAMING::HAS_MODEL_LOADED(joaat("P_RUSSLINGGATELOCK02X"))) && STREAMING::HAS_MODEL_LOADED(iLocal_40)) && STREAMING::HAS_MODEL_LOADED(iLocal_41)) && STREAMING::HAS_MODEL_LOADED(iLocal_42)) && STREAMING::HAS_MODEL_LOADED(iLocal_43)) && STREAMING::HAS_MODEL_LOADED(iLocal_44)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1517)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1518)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1519))
	{
		return 1;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("CURU"))
	{
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("CURUAUD"))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_RUSSLINGGATELOCK02X")))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_40))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_41))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_42))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_43))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_44))
	{
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1517))
	{
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1518))
	{
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1519))
	{
	}
	return 0;
}

int func_803()
{
	if (PED::ADD_RELATIONSHIP_GROUP("Rustlers", &iLocal_1168) && PED::ADD_RELATIONSHIP_GROUP("Rancher", &iLocal_1169))
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1168, iLocal_1169);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1169, iLocal_1168);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1169, PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35), iLocal_1169);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1168, PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35), iLocal_1168);
		return 1;
	}
	return 0;
}

int func_804()
{
	if (!PATHFIND::_0xDE0EA444735C1368(iLocal_918))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_918))
		{
			iLocal_918 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1860.362f, -1837.96f, 42.12231f, 0f, 0f, -17.14052f, 1.871081f, 1.209762f, 1.398278f, "Initial scene box blocker");
		}
		else if (PATHFIND::_0x19C7567D2F2287D6(iLocal_918, 7))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_820()
{
	__LIB_8__::func_91(756);
	__LIB_0__::func_123(756, 32);
	if (__LIB_8__::func_783(756))
	{
	}
	__LIB_0__::func_123(757, 32);
	if (__LIB_8__::func_783(757))
	{
	}
	__LIB_0__::func_123(758, 32);
	if (__LIB_8__::func_783(758))
	{
	}
	__LIB_0__::func_123(762, 32);
	if (__LIB_8__::func_783(762))
	{
	}
	__LIB_0__::func_123(759, 32);
	if (__LIB_8__::func_783(759))
	{
	}
	__LIB_0__::func_123(761, 32);
	if (__LIB_8__::func_783(761))
	{
	}
	__LIB_0__::func_123(922, 32);
	if (__LIB_8__::func_783(922))
	{
	}
	__LIB_0__::func_123(923, 32);
	if (__LIB_8__::func_783(923))
	{
	}
	__LIB_0__::func_123(936, 32);
	if (__LIB_8__::func_783(936))
	{
	}
	__LIB_0__::func_123(937, 32);
	if (__LIB_8__::func_783(937))
	{
	}
}

bool func_823(var uParam0)
{
	int iVar0;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (uParam0->f_7)
	{
		case 0:
			if (((func_799() && func_1340(0, 1)) && func_1341(0, 1)) && func_802())
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_43));
				}
				func_236(16);
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_START");
				func_1342(1);
				return true;
			}
			break;
		case 1:
			if (((((func_799() && func_1340(1, 1)) && func_1341(1, 1)) && func_802()) && func_249()) && func_248())
			{
				func_231(64);
				func_236(8);
				func_236(1);
				func_236(16);
				__LIB_0__::func_900(4);
				func_237("OBJ_CURU_TRAVEL");
				if (CLOCK::GET_CLOCK_HOURS() <= 23)
				{
					__LIB_1__::func_159(&iVar0, 0, 0, 4, __LIB_0__::func_40(__LIB_0__::func_23()), __LIB_0__::func_39(__LIB_0__::func_23()), __LIB_0__::func_710(__LIB_0__::func_23()));
					__LIB_1__::func_446(&iVar0, 0, 0, 0, 1, 0, 0, 0);
				}
				else
				{
					__LIB_1__::func_159(&iVar0, 0, 0, 4, __LIB_0__::func_40(__LIB_0__::func_23()), __LIB_0__::func_39(__LIB_0__::func_23()), __LIB_0__::func_710(__LIB_0__::func_23()));
				}
				__LIB_3__::func_98(iVar0);
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_RESTART_2");
				bLocal_47 = true;
				Local_96.f_188 = joaat("A_C_COW");
				__LIB_11__::func_487(&Local_96);
				__LIB_19__::func_119(uParam0, func_241(1), func_241(2), 1, 2);
				func_1342(1);
				return true;
			}
			break;
		case 2:
			if ((((((((((((((func_799() && func_1340(2, 0)) && func_1341(2, 0)) && func_802()) && func_249()) && func_248()) && func_251()) && func_252()) && func_253()) && func_254()) && func_255()) && func_250(1)) && func_1344()) && func_1345()) && func_1346())
			{
				if (func_303(0, 0, "pl_Idle_base"))
				{
					if (func_634())
					{
						func_231(64);
						func_231(16777216);
						func_236(8);
						func_236(1);
						func_236(512);
						__LIB_1__::func_948(iLocal_1158, 1, 0.024039f, 0, 0, 0, 1, 0);
						__LIB_1__::func_948(iLocal_1159, 1, 0f, 0, 0, 0, 1, 0);
						func_260();
						if (CLOCK::GET_CLOCK_HOURS() <= 23)
						{
							__LIB_1__::func_159(&iVar0, 0, 0, 4, __LIB_0__::func_40(__LIB_0__::func_23()), __LIB_0__::func_39(__LIB_0__::func_23()), __LIB_0__::func_710(__LIB_0__::func_23()));
							__LIB_1__::func_446(&iVar0, 0, 0, 0, 1, 0, 0, 0);
						}
						else
						{
							__LIB_1__::func_159(&iVar0, 0, 0, 4, __LIB_0__::func_40(__LIB_0__::func_23()), __LIB_0__::func_39(__LIB_0__::func_23()), __LIB_0__::func_710(__LIB_0__::func_23()));
						}
						__LIB_3__::func_98(iVar0);
						func_237("OBJ_CURU_RUSTLERS");
						__LIB_0__::func_63(&(uParam0->f_9), 256, 1);
						iLocal_14 = 6;
						AUDIO::TRIGGER_MUSIC_EVENT("RUST02_RESTART_3");
						bLocal_47 = true;
						__LIB_19__::func_119(uParam0, func_241(2), func_241(3), 2, 3);
						__LIB_1__::func_462(4);
						if (PED::IS_PED_IN_GROUP(iLocal_22))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_22);
						}
						func_1347();
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_22, joaat("GROUP_RIFLE"), true, 0, false, false);
						iLocal_53 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_27);
						MAP::_BLIP_SET_MODIFIER(iLocal_53, -662251075);
						iLocal_54 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_28);
						MAP::_BLIP_SET_MODIFIER(iLocal_54, -662251075);
						iLocal_76 = 4;
						iLocal_58 = 3;
						func_668(4);
						func_1342(1);
						return true;
					}
				}
			}
			break;
		case 3:
			if ((((((((((func_799() && func_1340(3, 0)) && func_1341(3, 0)) && func_802()) && func_249()) && func_248()) && func_252()) && func_251()) && func_250(1)) && func_277()) && __LIB_1__::func_220(100))
			{
				func_231(64);
				func_236(8);
				func_236(1);
				func_231(134217728);
				__LIB_1__::func_948(iLocal_1158, 1, 0.024039f, 0, 0, 0, 1, 0);
				__LIB_1__::func_948(iLocal_1159, 1, 0f, 0, 0, 0, 1, 0);
				func_260();
				if (CLOCK::GET_CLOCK_HOURS() <= 23)
				{
					__LIB_1__::func_159(&iVar0, 0, 0, 4, __LIB_0__::func_40(__LIB_0__::func_23()), __LIB_0__::func_39(__LIB_0__::func_23()), __LIB_0__::func_710(__LIB_0__::func_23()));
					__LIB_1__::func_446(&iVar0, 0, 0, 0, 1, 0, 0, 0);
				}
				else
				{
					__LIB_1__::func_159(&iVar0, 0, 0, 4, __LIB_0__::func_40(__LIB_0__::func_23()), __LIB_0__::func_39(__LIB_0__::func_23()), __LIB_0__::func_710(__LIB_0__::func_23()));
				}
				__LIB_3__::func_98(iVar0);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_995, fLocal_998, true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_22, vLocal_999, fLocal_998, true, false, true);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33))
				{
					iLocal_33 = OBJECT::CREATE_OBJECT(iLocal_44, vLocal_955, true, true, false, false, true);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_33, 160);
					ENTITY::SET_ENTITY_PROOFS(iLocal_33, 9, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_33, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34))
				{
					iLocal_34 = OBJECT::CREATE_OBJECT(iLocal_44, vLocal_958, true, true, false, false, true);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_34, 160);
					ENTITY::SET_ENTITY_PROOFS(iLocal_34, 9, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_34, true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_920))
				{
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_920, true, 7.5f);
					OBJECT::SET_OBJECT_TARGETTABLE(iLocal_920, true);
				}
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_22, false, 0f);
				func_820();
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_RESTART_4");
				bLocal_47 = true;
				__LIB_19__::func_119(uParam0, func_241(3), func_241(4), 3, 4);
				if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_43));
				}
				iLocal_65 = 9;
				__LIB_0__::func_63(&(uParam0->f_9), 256, 1);
				iLocal_14 = 8;
				func_237("OBJ_CURU_BREAKLOCK");
				func_1342(1);
				return true;
			}
			break;
		case 4:
			if ((((((((func_799() && func_1340(4, 1)) && func_1341(4, 1)) && func_802()) && func_249()) && func_248()) && func_251()) && func_1348()) && func_277())
			{
				func_231(64);
				func_236(8);
				func_236(1);
				func_231(2);
				func_231(4);
				func_231(256);
				func_231(32);
				func_231(134217728);
				func_236(32);
				func_260();
				if (CLOCK::GET_CLOCK_HOURS() <= 23)
				{
					__LIB_1__::func_159(&iVar0, 0, 0, 4, __LIB_0__::func_40(__LIB_0__::func_23()), __LIB_0__::func_39(__LIB_0__::func_23()), __LIB_0__::func_710(__LIB_0__::func_23()));
					__LIB_1__::func_446(&iVar0, 0, 0, 0, 1, 0, 0, 0);
				}
				else
				{
					__LIB_1__::func_159(&iVar0, 0, 0, 4, __LIB_0__::func_40(__LIB_0__::func_23()), __LIB_0__::func_39(__LIB_0__::func_23()), __LIB_0__::func_710(__LIB_0__::func_23()));
				}
				__LIB_3__::func_98(iVar0);
				func_237("OBJ_CURU_HERD");
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_RESTART_5");
				bLocal_47 = true;
				__LIB_19__::func_119(uParam0, func_241(4), func_241(5), 4, 5);
				if (__LIB_0__::func_30(iLocal_1158))
				{
					__LIB_3__::func_124(iLocal_1158, 1);
				}
				if (__LIB_0__::func_30(iLocal_1159))
				{
					__LIB_3__::func_124(iLocal_1159, 1);
				}
				if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_43));
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33))
				{
					iLocal_33 = OBJECT::CREATE_OBJECT(iLocal_44, vLocal_955, true, true, false, false, true);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_33, 160);
					ENTITY::SET_ENTITY_PROOFS(iLocal_33, 9, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_33, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34))
				{
					iLocal_34 = OBJECT::CREATE_OBJECT(iLocal_44, vLocal_958, true, true, false, false, true);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_34, 160);
					ENTITY::SET_ENTITY_PROOFS(iLocal_34, 9, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_34, true);
				}
				iLocal_65 = 9;
				iLocal_79 = 4;
				__LIB_0__::func_63(&(uParam0->f_9), 256, 1);
				iLocal_14 = 10;
				PHYSICS::SET_DISABLE_BREAKING(iLocal_920, false);
				OBJECT::_0xE7E4C198B0185900(iLocal_920, 0, false);
				OBJECT::_0xE7E4C198B0185900(iLocal_920, 1, false);
				__LIB_11__::func_228(iLocal_1158, -1f, 1);
				__LIB_11__::func_228(iLocal_1159, -1f, 1);
				func_297(&Local_96, 1);
				func_237("OBJ_CURU_HERD");
				func_1342(1);
				return true;
			}
			break;
		case 5:
			if (((((func_799() && func_1340(5, 1)) && func_1341(5, 1)) && func_802()) && func_1349()) && func_277())
			{
				iLocal_73 = 8;
				func_236(8);
				func_236(1);
				func_231(2);
				func_231(4);
				func_231(256);
				func_231(32);
				func_231(8);
				if (CLOCK::GET_CLOCK_HOURS() <= 23)
				{
					__LIB_1__::func_159(&iVar0, 0, 0, 4, __LIB_0__::func_40(__LIB_0__::func_23()), __LIB_0__::func_39(__LIB_0__::func_23()), __LIB_0__::func_710(__LIB_0__::func_23()));
					__LIB_1__::func_446(&iVar0, 0, 0, 0, 1, 0, 0, 0);
				}
				else
				{
					__LIB_1__::func_159(&iVar0, 0, 0, 4, __LIB_0__::func_40(__LIB_0__::func_23()), __LIB_0__::func_39(__LIB_0__::func_23()), __LIB_0__::func_710(__LIB_0__::func_23()));
				}
				__LIB_3__::func_98(iVar0);
				func_237("OBJ_CURU_HERD");
				AUDIO::TRIGGER_MUSIC_EVENT("RUST02_HERD");
				bLocal_47 = true;
				__LIB_19__::func_119(uParam0, func_241(5), func_241(6), 5, 6);
				if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_43));
				}
				iLocal_65 = 9;
				iLocal_79 = 4;
				__LIB_0__::func_63(&(uParam0->f_9), 256, 1);
				iLocal_14 = 10;
				func_1342(1);
				return true;
			}
			break;
		case 6:
			if (((((func_799() && func_1340(6, 0)) && func_1341(6, 0)) && func_802()) && func_302()) && func_1350())
			{
				switch (iLocal_83)
				{
					case 0:
						STREAMING::REQUEST_MODEL(iLocal_45, false);
						STREAMING::REQUEST_MODEL(iLocal_46, false);
						if (STREAMING::HAS_MODEL_LOADED(iLocal_45) && STREAMING::HAS_MODEL_LOADED(iLocal_46))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1787))
							{
								iLocal_1787 = OBJECT::CREATE_OBJECT(iLocal_45, vLocal_1789, true, true, false, false, true);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_1787, true);
							}
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
							{
								iLocal_1788 = OBJECT::CREATE_OBJECT(iLocal_46, vLocal_1792, true, true, false, false, true);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_1788, false);
							}
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1795))
							{
								iLocal_1795 = __LIB_3__::func_136(iLocal_1161, 1);
							}
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1796))
							{
								iLocal_1796 = __LIB_3__::func_136(iLocal_1160, 1);
							}
							if (((ENTITY::DOES_ENTITY_EXIST(iLocal_1787) && ENTITY::DOES_ENTITY_EXIST(iLocal_1788)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1795)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1796))
							{
								__LIB_1__::func_772(&uLocal_1545, Global_35, 0, 0, 0, 0);
								__LIB_1__::func_772(&uLocal_1545, iLocal_22, 0, 0, 0, 0);
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_31))
								{
									__LIB_1__::func_772(&uLocal_1545, iLocal_31, "CLAY", 0, 0, 0);
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_32))
								{
									__LIB_1__::func_772(&uLocal_1545, iLocal_32, "CLIVE", 0, 0, 0);
								}
								func_311(&Local_96, Local_96.f_444);
								if (CLOCK::GET_CLOCK_HOURS() <= 23)
								{
									__LIB_1__::func_159(&iVar0, 0, 0, 4, __LIB_0__::func_40(__LIB_0__::func_23()), __LIB_0__::func_39(__LIB_0__::func_23()), __LIB_0__::func_710(__LIB_0__::func_23()));
									__LIB_1__::func_446(&iVar0, 0, 0, 0, 1, 0, 0, 0);
								}
								else
								{
									__LIB_1__::func_159(&iVar0, 0, 0, 4, __LIB_0__::func_40(__LIB_0__::func_23()), __LIB_0__::func_39(__LIB_0__::func_23()), __LIB_0__::func_710(__LIB_0__::func_23()));
								}
								__LIB_3__::func_98(iVar0);
								if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
								{
									MAP::REMOVE_BLIP(&(uParam0->f_43));
								}
								__LIB_1__::func_620(&uLocal_1545, iLocal_1787, "p_moneyStack01x", 0, 0, 0);
								__LIB_1__::func_620(&uLocal_1545, iLocal_1788, "p_cs_billSingle01x", 0, 0, 0);
								__LIB_1__::func_620(&uLocal_1545, iLocal_1795, "p_door_clemens01", 0, 0, 0);
								__LIB_1__::func_620(&uLocal_1545, iLocal_1796, "p_door_clemens02x", 0, 0, 0);
								__LIB_1__::func_739(&uLocal_1545);
								iLocal_83 = 1;
							}
						}
						break;
					case 1:
						if (__LIB_17__::func_759(&uLocal_1545, "CAUNC_RUST2_EXT", 1, 1))
						{
							__LIB_0__::func_325(&iLocal_50);
							__LIB_13__::func_937(&Local_96);
							PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "CAUNC_CONV");
							iLocal_81 = 6;
							iLocal_83 = 2;
						}
						break;
					case 2:
						if (__LIB_17__::func_759(&uLocal_1545, "CAUNC_RUST2_EXT", 1, 1))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("RUST02_END");
							__LIB_0__::func_63(&(uParam0->f_9), 256, 1);
							iLocal_14 = 12;
							func_1342(0);
							return true;
						}
						break;
				}
			}
	}
	return false;
}

int func_830(int iParam0, int iParam1)
{
	var uVar0;
	return func_1353(&uVar0, iParam0, iParam1);
}

void func_991(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_146(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_146(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_146(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1474(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_149(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_525(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1480(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		__LIB_1__::func_178(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (__LIB_0__::func_809(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				__LIB_0__::func_810(iVar6, iVar7);
				__LIB_0__::func_811(iVar6, iVar8);
				__LIB_0__::func_812(iVar6, iVar9);
				__LIB_0__::func_813(iVar6, 0);
				if (__LIB_1__::func_127(iVar6))
				{
					__LIB_1__::func_608(iVar6);
				}
				iVar10 = __LIB_0__::func_553(iVar8);
				__LIB_1__::func_820(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

void func_994(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_146(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_146(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_146(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_146(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_146(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_146(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_146(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_146(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_146(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_146(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_146(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_525(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_525(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_525(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_525(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_525(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_525(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_525(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_525(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_525(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_525(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_525(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		__LIB_1__::func_178(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (__LIB_0__::func_809(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				__LIB_0__::func_810(iVar0, iVar1);
				__LIB_0__::func_811(iVar0, iVar2);
				__LIB_0__::func_812(iVar0, iVar3);
				__LIB_0__::func_813(iVar0, 0);
				if (__LIB_1__::func_127(iVar0))
				{
					__LIB_1__::func_608(iVar0);
				}
				iVar4 = __LIB_0__::func_553(iVar2);
				__LIB_1__::func_820(iVar0, iVar4);
			}
			iVar0++;
		}
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

int func_1040(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	if (__LIB_0__::func_192(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar49 = (iVar49 + Var0[iVar32 /*2*/].f_1);
					Jump @229; //curOff = 201
				}
				else if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = __LIB_0__::func_372(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = __LIB_0__::func_374(iVar62, iVar61);
					if (__LIB_0__::func_144(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1040(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1040(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

int func_1055()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1517(8);
		}
	}
	return 0;
}

bool func_1056(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1518(iParam0));
}

char* func_1063(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "musicData/triggers/trigger(%i)";
		case 1:
			return ":EVENT_INDEX";
			Jump @256; //curOff = 123
			return ":EVENT_TYPE";
			Jump @256; //curOff = 133
			return ":EVENT_LABEL";
			Jump @256; //curOff = 143
			return ":EVENT_FLAGS";
			Jump @256; //curOff = 153
			return ":EVENT_START";
			Jump @256; //curOff = 163
			return ":EVENT_START_INT";
			Jump @256; //curOff = 173
			return ":EVENT_START_INT2";
			Jump @256; //curOff = 183
			return ":EVENT_END";
			Jump @256; //curOff = 193
			return ":EVENT_END_INT";
			Jump @256; //curOff = 203
			return ":EVENT_END_INT2";
			Jump @256; //curOff = 213
			return ":EVENT_PED_USEAGE";
			Jump @256; //curOff = 223
			return "musicData/entities/entity(%i)";
			Jump @256; //curOff = 233
			return ":INDEX";
			Jump @256; //curOff = 243
			return ":MODEL_NAME";
			return "";
		}
void func_1064(int iParam0)
{
	struct<16> Var0;
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1934603[iParam0 /*16*/] = { Var0 };
	Global_1934603.f_161 = (Global_1934603.f_161 - 1);
	if (Global_1934603.f_161 < 0)
	{
		Global_1934603.f_161 = 0;
	}
}

int func_1071(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam1))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_177(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !__LIB_0__::func_272(iVar0, 0)) || (bParam3 && !__LIB_0__::func_212(iParam1)))
	{
		if (bParam2)
		{
			if (__LIB_0__::func_725(iParam1, 1) != 0)
			{
				iVar0 = func_1546(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_272(iVar0, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		__LIB_0__::func_834(iParam1, iVar0);
		__LIB_1__::func_434(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

void func_1105(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13)
{
	if (__LIB_0__::func_51(&(uParam1->f_3), 1))
	{
		__LIB_19__::func_588(uParam1);
		if (__LIB_1__::func_872(iParam0, fParam7, fParam11, bParam12, bParam13, 1084227584 /* Float: 5f */))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_2__::func_524(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_ENTITY_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10, 0);
		func_1563(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

bool func_1130(int iParam0)
{
	float fVar0;
	if (iLocal_65 == 5)
	{
		return false;
	}
	if (PED::_0x7F9B9791D4CB71F6(*iParam0, Global_35, 1, 0) == 1)
	{
		if ((((!__LIB_1__::func_205(Global_35, iLocal_901, 1, 0) && !__LIB_1__::func_205(Global_35, iLocal_902, 1, 0)) && !__LIB_1__::func_205(Global_35, iLocal_903, 1, 0)) && !__LIB_1__::func_205(Global_35, iLocal_904, 1, 0)) && !__LIB_1__::func_205(Global_35, iLocal_905, 1, 0))
		{
			return true;
		}
		else if (__LIB_0__::func_665(Global_35, *iParam0, 1, 1) <= 30f)
		{
			if (!PED::IS_PED_IN_COVER(Global_35, false, false) && !PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
			{
				return true;
			}
		}
	}
	else
	{
		if (__LIB_1__::func_205(Global_35, iLocal_906, 1, 0))
		{
			return true;
		}
		fVar0 = __LIB_0__::func_665(*iParam0, Global_35, 1, 1);
		if (fVar0 <= 19f)
		{
			if (!PED::_GET_PED_CROUCH_MOVEMENT(Global_35) || (TASK::IS_PED_RUNNING(Global_35) || (TASK::IS_PED_SPRINTING(Global_35) && !PED::IS_PED_GOING_INTO_COVER(Global_35))))
			{
				return true;
			}
		}
		if (fVar0 < 45f && PED::IS_PED_ON_MOUNT(Global_35))
		{
			return true;
		}
		else if (fVar0 < 32f && (TASK::IS_PED_RUNNING(Global_35) || (TASK::IS_PED_SPRINTING(Global_35) && !PED::IS_PED_GOING_INTO_COVER(Global_35))))
		{
			return true;
		}
	}
	return false;
}

void func_1148(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if ((uParam0->f_190[iVar0 /*9*/] != -1 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_190[iVar0 /*9*/].f_2)) && ENTITY::IS_ENTITY_A_PED(uParam0->f_190[iVar0 /*9*/].f_2))
		{
			if (__LIB_13__::func_943(uParam0))
			{
				__LIB_18__::func_358(uParam0, 0);
			}
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_190[iVar0 /*9*/].f_2) == *iParam1)
			{
				uParam0->f_190[iVar0 /*9*/].f_2 = 0;
				uParam0->f_190[iVar0 /*9*/] = -1;
			}
			uParam0->f_209 = -1;
		}
		iVar0++;
	}
}

void func_1149(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_2[iVar0], true, false);
			if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar0]))
			{
				FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iVar0]);
			}
		}
		iVar0++;
	}
}

int func_1150(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if ((uParam0->f_190[iVar0 /*9*/] != -1 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_190[iVar0 /*9*/].f_2)) && ENTITY::IS_ENTITY_A_PED(uParam0->f_190[iVar0 /*9*/].f_2))
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_190[iVar0 /*9*/].f_2) == *iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1164(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	fVar1 = 100000f;
	fVar2 = 100000f;
	iVar3 = -1;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar4 = __LIB_11__::func_506(uParam0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar4))
			{
				if (__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4), 0))
				{
					fVar2 = __LIB_0__::func_232(iVar4, iParam1, 1);
					if (fVar2 < fVar1)
					{
						fVar1 = fVar2;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

void func_1168(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	fVar1 = 100000f;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iParam1]))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar2 = __LIB_11__::func_506(uParam0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				if (__LIB_0__::func_272(iVar2, 0))
				{
					fVar1 = __LIB_0__::func_665(iVar2, uParam0->f_2[iParam1], 1, 1);
					if (__LIB_4__::func_156(uParam0, 32768))
					{
						fVar3 = 1.5f;
					}
					else
					{
						fVar3 = 5f;
					}
					if (fVar1 <= fVar3)
					{
						uParam0->f_23[iVar0] = 1;
						uParam0->f_44[iVar0] = ((BUILTIN::TO_FLOAT(iVar0) * 50f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 100f));
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_1223(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam1 - __LIB_13__::func_975(uParam0));
	if (iVar0 <= 0)
	{
		return true;
	}
	fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fParam2 - 10f), (fParam2 + 10f));
	iVar1 = 0;
	while (iVar1 < iParam1)
	{
		func_1237(uParam0, fParam2, fParam3, iParam4, -1082130432 /* Float: -1f */, 0);
		iVar1++;
	}
	if (__LIB_13__::func_975(uParam0) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_1224(var uParam0)
{
	int iVar0;
	vector3 vVar1[24];
	char* sVar4;
	if (__LIB_11__::func_494(uParam0, 8))
	{
		return;
	}
	if (uParam0->f_209 == -1)
	{
		return;
	}
	if (__LIB_4__::func_156(uParam0, 65536))
	{
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) || !__LIB_3__::func_572(PLAYER::GET_PLAYER_INDEX(), uParam0->f_350, &(uParam0->f_329))) && __LIB_11__::func_482(uParam0, 1))
	{
		iVar0 = __LIB_13__::func_976(uParam0, uParam0->f_190[uParam0->f_209 /*9*/].f_2);
		if (uParam0->f_351 != iVar0 && iVar0 != -1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350))
			{
				__LIB_1__::func_480(&(uParam0->f_350));
				PED::SET_PED_CONFIG_FLAG(uParam0->f_350, 297, false);
			}
			__LIB_17__::func_785(&(uParam0->f_329), &(uParam0->f_311));
			__LIB_13__::func_986(uParam0);
			uParam0->f_351 = iVar0;
			uParam0->f_350 = uParam0->f_2[uParam0->f_351];
			PED::SET_PED_CONFIG_FLAG(uParam0->f_350, 297, true);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) && uParam0->f_351 != -1)
	{
		if (!__LIB_11__::func_476(uParam0, uParam0->f_351))
		{
			__LIB_1__::func_480(&(uParam0->f_350));
			PED::SET_PED_CONFIG_FLAG(uParam0->f_350, 297, false);
			uParam0->f_350 = 0;
			uParam0->f_351 = -1;
			__LIB_17__::func_785(&(uParam0->f_329), &(uParam0->f_311));
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) || uParam0->f_351 == -1)
	{
		return;
	}
	if (AUDIO::_0xFE5C6177064BD390(1) || AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		if (__LIB_2__::func_466(&(uParam0->f_311[0 /*17*/]), 0, 0))
		{
			__LIB_3__::func_515(&(uParam0->f_311[0 /*17*/]), 0, 0);
		}
	}
	else if (!__LIB_2__::func_466(&(uParam0->f_311[0 /*17*/]), 0, 0))
	{
		__LIB_3__::func_515(&(uParam0->f_311[0 /*17*/]), 1, 0);
	}
	if (uParam0->f_310 == 1 && __LIB_3__::func_572(PLAYER::GET_PLAYER_INDEX(), uParam0->f_350, &(uParam0->f_329)))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 266, true);
	}
	if (uParam0->f_310 == 1)
	{
		func_636(&(uParam0->f_350), &(uParam0->f_329), 20f, &(uParam0->f_311), 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
	}
	switch (uParam0->f_310)
	{
		case 0:
			if (__LIB_0__::func_94(uParam0->f_350, ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, false, false), 1) <= (20f + 5f))
			{
				uParam0->f_310 = 1;
			}
			break;
		case 1:
			if (__LIB_9__::func_754(&(uParam0->f_329)))
			{
				if (!__LIB_0__::func_481(1) && !__LIB_0__::func_181())
				{
					StringCopy(&cVar1, "HRD_SHOUT", 24);
					sVar4 = "ARTHUR";
					__LIB_0__::func_928(&(uParam0->f_506), PLAYER::PLAYER_PED_ID(), sVar4, 1);
					if (__LIB_1__::func_104(&(uParam0->f_506), cVar1, 0, -1, 0, 0))
					{
						func_1616(uParam0);
						uParam0->f_310 = 0;
					}
				}
				else
				{
					func_1616(uParam0);
					uParam0->f_310 = 0;
				}
			}
			else if (!__LIB_3__::func_572(PLAYER::GET_PLAYER_INDEX(), uParam0->f_350, &(uParam0->f_329)) && __LIB_0__::func_94(uParam0->f_350, ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, false, false), 1) > (20f + 10f))
			{
				uParam0->f_310 = 0;
			}
			else if (uParam0->f_351 != -1 && !__LIB_11__::func_476(uParam0, uParam0->f_351))
			{
				uParam0->f_310 = 0;
			}
			break;
	}
}

bool func_1237(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	if (fParam4 != -1f)
	{
		if (!__LIB_2__::func_618(&(uParam0->f_608)))
		{
			__LIB_5__::func_107(&(uParam0->f_608));
		}
		else if (__LIB_5__::func_53(&(uParam0->f_608)) < fParam4)
		{
			return false;
		}
	}
	if (!FLOCK::_0x8D913E493BAFE0A3(*uParam0))
	{
		return true;
	}
	vVar1 = { __LIB_11__::func_467(uParam0, 0) };
	if (!__LIB_0__::func_86(vVar1))
	{
	}
	else
	{
		return false;
	}
	iVar0 = __LIB_13__::func_977(uParam0);
	iVar4 = __LIB_11__::func_489(uParam0, &iVar0);
	if (iVar4 == -1)
	{
		return false;
	}
	else if (func_659(uParam0, fParam1, iVar4, iParam3, bParam5, 0))
	{
		__LIB_5__::func_107(&(uParam0->f_608));
		return true;
	}
	return false;
}

void func_1238(var uParam0)
{
	if (__LIB_1__::func_985())
	{
		PED::_SET_PED_BLACKBOARD_BOOL(PLAYER::PLAYER_PED_ID(), "DoHerdSmack", true, 50);
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_BOOL(PLAYER::PLAYER_PED_ID(), "DoHerdWhip", true, 50);
	}
	__LIB_5__::func_107(&(uParam0->f_441));
	__LIB_3__::func_515(&(uParam0->f_401[0 /*17*/]), 0, 0);
	uParam0->f_637 = (uParam0->f_636 + 20f);
	uParam0->f_400 = 2;
}

void func_1244(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_189 == 1 && __LIB_11__::func_482(uParam0, 1))
	{
		if (__LIB_11__::func_511(uParam0) != 2)
		{
			__LIB_11__::func_512(uParam0, 2);
		}
	}
	else if (uParam0->f_189 == 1)
	{
		if (__LIB_11__::func_511(uParam0) != 0)
		{
			__LIB_11__::func_512(uParam0, 0);
		}
	}
	switch (uParam0->f_210)
	{
		case 4:
			if (uParam0->f_189 >= 5)
			{
				__LIB_11__::func_512(uParam0, 0);
			}
			break;
		case 5:
			if (__LIB_11__::func_494(uParam0, 64) && __LIB_13__::func_975(uParam0) > 1)
			{
				__LIB_11__::func_512(uParam0, 2);
			}
			else if (__LIB_18__::func_350(uParam0))
			{
				__LIB_11__::func_512(uParam0, 6);
			}
			break;
		case 0:
			if (!__LIB_11__::func_500(uParam0))
			{
				if ((((func_1626(uParam0, uParam1) && !__LIB_11__::func_482(uParam0, 1)) && __LIB_18__::func_351(uParam0, uParam1)) && !__LIB_13__::func_944(uParam0)) && uParam0->f_189 >= 5)
				{
					__LIB_11__::func_512(uParam0, 0);
				}
			}
			else if (__LIB_13__::func_944(uParam0))
			{
				__LIB_11__::func_512(uParam0, 5);
			}
			else if (func_1628(uParam0, uParam1, uParam2))
			{
				__LIB_11__::func_512(uParam0, 2);
			}
			else if (__LIB_18__::func_739(uParam0, uParam1))
			{
				__LIB_11__::func_512(uParam0, 3);
			}
			else if (__LIB_19__::func_317(uParam0, uParam1))
			{
				__LIB_11__::func_512(uParam0, 1);
			}
			break;
		case 1:
			if (!__LIB_11__::func_500(uParam0))
			{
				if (__LIB_19__::func_317(uParam0, uParam1))
				{
					__LIB_11__::func_512(uParam0, 1);
				}
			}
			else if (__LIB_13__::func_944(uParam0))
			{
				__LIB_11__::func_512(uParam0, 5);
			}
			else if (func_1626(uParam0, uParam1))
			{
				if (func_1628(uParam0, uParam1, uParam2))
				{
					__LIB_11__::func_512(uParam0, 2);
				}
				else
				{
					__LIB_11__::func_512(uParam0, 0);
				}
			}
			else if (__LIB_18__::func_739(uParam0, uParam1))
			{
				__LIB_11__::func_512(uParam0, 3);
			}
			break;
		case 2:
			if (!__LIB_11__::func_500(uParam0))
			{
				if (func_1628(uParam0, uParam1, uParam2))
				{
					__LIB_11__::func_512(uParam0, 2);
				}
			}
			else if (uParam0->f_210.f_2 == 7)
			{
				if (__LIB_13__::func_944(uParam0))
				{
					__LIB_11__::func_512(uParam0, 5);
				}
				else if (__LIB_19__::func_317(uParam0, uParam1))
				{
					__LIB_11__::func_512(uParam0, 1);
				}
				else if (__LIB_18__::func_739(uParam0, uParam1))
				{
					__LIB_11__::func_512(uParam0, 3);
				}
				else
				{
					__LIB_11__::func_512(uParam0, 0);
				}
			}
			break;
		case 3:
			if (!__LIB_11__::func_500(uParam0))
			{
				if (__LIB_18__::func_739(uParam0, uParam1))
				{
					__LIB_11__::func_512(uParam0, 3);
				}
			}
			else if (__LIB_18__::func_351(uParam0, uParam1))
			{
				if (__LIB_13__::func_944(uParam0))
				{
					__LIB_11__::func_512(uParam0, 5);
				}
				else if (func_1628(uParam0, uParam1, uParam2))
				{
					__LIB_11__::func_512(uParam0, 2);
				}
				else if (__LIB_19__::func_317(uParam0, uParam1))
				{
					__LIB_11__::func_512(uParam0, 1);
				}
				else
				{
					__LIB_11__::func_512(uParam0, 0);
				}
			}
			break;
	}
}

void func_1245(var uParam0, var uParam1, var uParam2)
{
	if (__LIB_11__::func_494(uParam0, 32))
	{
		__LIB_2__::func_608(&(uParam0->f_210.f_58));
		__LIB_2__::func_608(&(uParam0->f_210.f_66));
		__LIB_2__::func_608(&(uParam0->f_210.f_69));
		__LIB_2__::func_608(&(uParam0->f_210.f_72));
		__LIB_2__::func_608(&(uParam0->f_210.f_77));
		__LIB_2__::func_608(&(uParam0->f_210.f_85));
		__LIB_2__::func_608(&(uParam0->f_210.f_88));
		if (AUDIO::IS_ANY_SPEECH_PLAYING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)))
		{
			return;
		}
	}
	if ((__LIB_11__::func_471(uParam0, 1) && !__LIB_11__::func_494(uParam0, 32)) && (uParam0->f_210.f_57 < uParam0->f_210.f_56 || uParam0->f_210.f_56 == -1))
	{
		if (!__LIB_11__::func_482(uParam0, 1))
		{
			__LIB_13__::func_967(uParam0, 1);
			__LIB_2__::func_608(&(uParam0->f_210.f_37));
			return;
		}
		if (__LIB_11__::func_494(uParam0, 64))
		{
			__LIB_13__::func_967(uParam0, 1);
			__LIB_2__::func_608(&(uParam0->f_210.f_37));
			return;
		}
		if (__LIB_2__::func_618(&(uParam0->f_210.f_40)))
		{
			if (__LIB_18__::func_398(&(uParam0->f_210.f_40)) < 5000)
			{
				__LIB_13__::func_967(uParam0, 1);
				__LIB_2__::func_608(&(uParam0->f_210.f_37));
				return;
			}
		}
		if (!__LIB_2__::func_618(&(uParam0->f_210.f_37)))
		{
			__LIB_5__::func_107(&(uParam0->f_210.f_37));
		}
		else if (__LIB_5__::func_28(&(uParam0->f_210.f_37)) > 2000)
		{
			if (__LIB_13__::func_978(uParam0, uParam1, 3))
			{
				uParam0->f_210.f_57++;
				__LIB_13__::func_967(uParam0, 1);
				__LIB_13__::func_966(uParam0, 16);
				__LIB_5__::func_107(&(uParam0->f_210.f_40));
				__LIB_2__::func_608(&(uParam0->f_210.f_37));
			}
		}
	}
	else if (!__LIB_11__::func_471(uParam0, 1))
	{
		if (__LIB_2__::func_618(&(uParam0->f_210.f_37)))
		{
			__LIB_2__::func_608(&(uParam0->f_210.f_37));
		}
	}
	if (__LIB_11__::func_471(uParam0, 2) && (uParam0->f_210.f_53 < uParam0->f_210.f_52 || uParam0->f_210.f_52 == -1))
	{
		if (__LIB_2__::func_618(&(uParam0->f_488)) && __LIB_5__::func_28(&(uParam0->f_488)) > 3000)
		{
			__LIB_13__::func_967(uParam0, 2);
		}
		if (__LIB_13__::func_978(uParam0, uParam1, 4))
		{
			uParam0->f_210.f_53++;
			__LIB_13__::func_967(uParam0, 2);
			__LIB_13__::func_966(uParam0, 16);
		}
	}
	if (__LIB_11__::func_471(uParam0, 4))
	{
		if (__LIB_2__::func_618(&(uParam0->f_491)) && __LIB_5__::func_28(&(uParam0->f_491)) > 3000)
		{
			__LIB_13__::func_967(uParam0, 4);
		}
		if (__LIB_13__::func_978(uParam0, uParam1, 6))
		{
			__LIB_13__::func_967(uParam0, 4);
			__LIB_13__::func_967(uParam0, 2);
			__LIB_13__::func_966(uParam0, 16);
		}
	}
	if (__LIB_11__::func_471(uParam0, 8) && (uParam0->f_210.f_55 < uParam0->f_210.f_54 || uParam0->f_210.f_54 == -1))
	{
		if (__LIB_13__::func_978(uParam0, uParam1, 7))
		{
			uParam0->f_210.f_55++;
			__LIB_13__::func_967(uParam0, 8);
			__LIB_13__::func_967(uParam0, 2);
			__LIB_13__::func_966(uParam0, 16);
		}
	}
	if ((__LIB_11__::func_494(uParam0, 2) && !__LIB_11__::func_494(uParam0, 32)) && uParam0->f_210 == 0)
	{
		if (func_1632(uParam0, uParam2))
		{
			if (__LIB_13__::func_978(uParam0, uParam1, 8))
			{
				uParam0->f_210.f_76++;
				__LIB_5__::func_107(&(uParam0->f_210.f_69));
				__LIB_5__::func_107(&(uParam0->f_210.f_66));
			}
		}
		if (func_1633(uParam0))
		{
			if (__LIB_13__::func_978(uParam0, uParam1, 9))
			{
				__LIB_13__::func_958(uParam0, 16);
				uParam0->f_210.f_84++;
				__LIB_13__::func_966(uParam0, 16);
				__LIB_5__::func_107(&(uParam0->f_210.f_77));
				if (__LIB_2__::func_618(&(uParam0->f_210.f_58)))
				{
					__LIB_5__::func_107(&(uParam0->f_210.f_58));
				}
			}
		}
		if (func_1634(uParam0, uParam2, 1) && (uParam0->f_210.f_65 < uParam0->f_210.f_64 || uParam0->f_210.f_64 == -1))
		{
			if (!__LIB_2__::func_618(&(uParam0->f_210.f_58)))
			{
				if (uParam0->f_210.f_65 == 0)
				{
					__LIB_2__::func_620(&(uParam0->f_210.f_58), (20000f / 1.2f));
				}
				else
				{
					__LIB_5__::func_107(&(uParam0->f_210.f_58));
				}
			}
			else if (__LIB_5__::func_28(&(uParam0->f_210.f_58)) > 20000)
			{
				if (__LIB_13__::func_978(uParam0, uParam1, 1))
				{
					uParam0->f_210.f_65++;
					__LIB_13__::func_966(uParam0, 16);
					__LIB_5__::func_107(&(uParam0->f_210.f_58));
				}
			}
		}
	}
	if (__LIB_11__::func_471(uParam0, 16))
	{
		if (__LIB_18__::func_352(uParam0, uParam1))
		{
			__LIB_13__::func_967(uParam0, 16);
		}
	}
	if (func_1636(uParam0, uParam2) && !__LIB_11__::func_494(uParam0, 32))
	{
		if (__LIB_13__::func_978(uParam0, uParam1, 11))
		{
			uParam0->f_210.f_92++;
			__LIB_5__::func_107(&(uParam0->f_210.f_88));
			__LIB_5__::func_107(&(uParam0->f_210.f_85));
		}
	}
}

bool func_1247(var uParam0, var uParam1)
{
	if (__LIB_11__::func_500(uParam0))
	{
		__LIB_2__::func_608(&(uParam0->f_210.f_31));
		return true;
	}
	switch (uParam0->f_210)
	{
		case 4:
			__LIB_2__::func_608(&(uParam0->f_210.f_31));
			return true;
		case 5:
			__LIB_2__::func_608(&(uParam0->f_210.f_31));
			return true;
		case 0:
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_2))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 1f);
			}
			if (func_1637(uParam0))
			{
				if (__LIB_13__::func_978(uParam0, uParam1, __LIB_11__::func_513(uParam0->f_210.f_1)))
				{
					__LIB_2__::func_608(&(uParam0->f_210.f_31));
					uParam0->f_210.f_4 = 0;
					if (__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0))
					{
						if (PED::IS_PED_IN_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)))
						{
							PED::REMOVE_PED_FROM_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
						}
						PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, false);
					}
					return true;
				}
			}
			break;
		case 1:
			if ((!ENTITY::IS_ENTITY_DEAD(uParam1->f_2) && !__LIB_0__::func_163(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 1464580341)) && !__LIB_0__::func_86(uParam0->f_613))
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_613, -1);
			}
			if (func_1637(uParam0))
			{
				if (__LIB_13__::func_978(uParam0, uParam1, __LIB_11__::func_513(uParam0->f_210.f_1)) && (uParam0->f_210.f_65 < uParam0->f_210.f_64 || uParam0->f_210.f_64 == -1))
				{
					__LIB_2__::func_608(&(uParam0->f_210.f_31));
					TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
					return true;
				}
				else if (uParam0->f_210.f_65 >= uParam0->f_210.f_64)
				{
					__LIB_2__::func_608(&(uParam0->f_210.f_31));
					TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
					return true;
				}
			}
			break;
		case 2:
			if ((!ENTITY::IS_ENTITY_DEAD(uParam1->f_2) && !__LIB_0__::func_163(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 1464580341)) && !__LIB_0__::func_86(uParam0->f_613))
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_613, -1);
			}
			if (func_1637(uParam0))
			{
				if (__LIB_13__::func_978(uParam0, uParam1, __LIB_11__::func_513(uParam0->f_210.f_1)))
				{
					__LIB_2__::func_608(&(uParam0->f_210.f_31));
					uParam0->f_210.f_2 = 0;
					TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
					return true;
				}
			}
			break;
		case 3:
			if (func_1637(uParam0))
			{
				if (__LIB_13__::func_978(uParam0, uParam1, __LIB_11__::func_513(uParam0->f_210.f_1)))
				{
					__LIB_2__::func_608(&(uParam0->f_210.f_31));
					uParam0->f_210.f_3 = 0;
					TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
					return true;
				}
			}
			break;
	}
	return false;
}

void func_1250(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (PED::IS_PED_IN_GROUP(iVar0))
		{
			PED::REMOVE_PED_FROM_GROUP(iVar0);
		}
		func_1640(uParam0, &iVar0);
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(iVar0, 0.55f);
		WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, true, 0, false);
		if ((iVar1 != joaat("WEAPON_UNARMED") && !__LIB_0__::func_163(iVar0, 716706914)) && TASK::GET_SCRIPT_TASK_STATUS(iVar0, 716706914, true) != 6)
		{
			WEAPON::_HIDE_PED_WEAPONS(iVar0, 2, false);
			TASK::TASK_SWAP_WEAPON(iVar0, 0, 1, 0, 0);
		}
		if (!__LIB_11__::func_494(uParam0, 256))
		{
			if (__LIB_0__::func_163(iVar0, -1775383291))
			{
				if ((PED::IS_PED_ON_MOUNT(iVar0) && !uParam0->f_693) || uParam0->f_693)
				{
					TASK::_0x3FFCD7BBA074CC80(iVar0, uParam0->f_494, 0f, 0f, 0f, 1.25f, 0.1f);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
				}
			}
			if ((BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), uParam0->f_494) > (5f * 5f) && !__LIB_0__::func_163(iVar0, -1775383291)) && ((PED::IS_PED_ON_MOUNT(iVar0) && !uParam0->f_693) || uParam0->f_693))
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_COORD(iVar0, uParam0->f_494, 0f, 0f, 0f, 1.25f, -1, 0.1f, 1, 1, 1, 0, 1);
			}
		}
	}
}

void func_1251(var uParam0, var uParam1)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	WEAPON::GET_CURRENT_PED_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &iVar10, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar11, false, 0, false);
	if (iVar11 != joaat("WEAPON_UNARMED"))
	{
		if (iVar10 == joaat("WEAPON_UNARMED") && !__LIB_0__::func_163(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 716706914))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), WEAPON::GET_BEST_PED_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), false, false), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 1, 0, 0, 0);
		}
	}
	else if (iVar10 != joaat("WEAPON_UNARMED") && !__LIB_0__::func_163(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 716706914))
	{
		WEAPON::_HIDE_PED_WEAPONS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 2, false);
		WEAPON::SET_CURRENT_PED_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), joaat("WEAPON_UNARMED"), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0, 0, 0, 0);
	}
	switch (uParam0->f_210.f_4)
	{
		case 0:
			fVar0 = __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], uParam0->f_613, 1);
			vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_2, false, false) };
			vVar4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
			vVar7 = { __LIB_13__::func_971(&vVar1, &vVar4, &(uParam0->f_613), (fVar0 + 5f)) };
			if (__LIB_0__::func_665(uParam1->f_2, PLAYER::PLAYER_PED_ID(), 1, 1) > 15f)
			{
				if (!__LIB_4__::func_301(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291, true) != 0)
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_COORD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), vVar7, 0f, 0f, 0f, 1.75f, -1, 3f, 1, 1, 1, 0, 1);
						uParam0->f_210.f_6.f_3 = __LIB_13__::func_957(uParam0, uParam1->f_2);
						uParam0->f_210.f_6.f_4 = 21030;
						uParam0->f_210.f_6.f_7 = -1;
						uParam0->f_210.f_6.f_17 = 4;
						uParam0->f_210.f_6.f_18 = 4;
						uParam0->f_210.f_6.f_19 = 4;
						uParam0->f_210.f_6.f_21 = 4;
						_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
					}
				}
				else
				{
					TASK::_0x3FFCD7BBA074CC80(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), vVar7, 0f, 0f, 0f, 1.75f, 3f);
				}
			}
			else
			{
				PED::REMOVE_PED_FROM_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
				if (__LIB_0__::func_94(uParam1->f_2, uParam0->f_613, 1) > fVar0)
				{
					if (PED::DOES_GROUP_EXIST(uParam0->f_379))
					{
						PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
						PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -2f, 0f, 0);
						PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
						PED::_0x8AFCCC0F18D70018(uParam0->f_379, 1);
					}
					TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
					uParam0->f_210.f_4 = 1;
				}
				else
				{
					if (PED::DOES_GROUP_EXIST(uParam0->f_379))
					{
						PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
						PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -5f, 0f, 0);
						PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
						PED::_0x8AFCCC0F18D70018(uParam0->f_379, 1);
					}
					TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
					uParam0->f_210.f_4 = 2;
				}
			}
			break;
		case 1:
			fVar0 = __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], uParam0->f_613, 1);
			if (!PED::DOES_GROUP_EXIST(uParam0->f_379))
			{
				uParam0->f_379 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
				if (!PED::DOES_GROUP_EXIST(uParam0->f_379))
				{
					uParam0->f_379 = PED::CREATE_GROUP(0);
				}
				if (!PED::_0x878B68960C1C2A35(PLAYER::PLAYER_PED_ID(), uParam0->f_379))
				{
					if (!PED::IS_PED_GROUP_MEMBER(PLAYER::PLAYER_PED_ID(), uParam0->f_379, 0))
					{
						PED::REMOVE_PED_FROM_GROUP(PLAYER::PLAYER_PED_ID());
					}
					PED::SET_PED_AS_GROUP_LEADER(PLAYER::PLAYER_PED_ID(), uParam0->f_379, true);
				}
				if (PED::IS_PED_IN_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)))
				{
					PED::REMOVE_PED_FROM_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
				}
				PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
				PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -2f, 0f, 0);
				PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
				PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, true);
				PED::_0x8AFCCC0F18D70018(uParam0->f_379, 1);
			}
			if (__LIB_0__::func_665(uParam1->f_2, PLAYER::PLAYER_PED_ID(), 1, 1) > 20f)
			{
				if (__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0) && PED::IS_PED_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379, 0))
				{
					PED::REMOVE_PED_FROM_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
				}
				uParam0->f_210.f_4 = 0;
			}
			else
			{
				if ((__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0) && PED::DOES_GROUP_EXIST(uParam0->f_379)) && !PED::IS_PED_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379, 0))
				{
					PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
					PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -2f, 0f, 0);
					PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
					PED::SET_PED_AS_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379);
					PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, true);
					TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
					uParam0->f_210.f_6.f_3 = __LIB_13__::func_957(uParam0, uParam1->f_2);
					uParam0->f_210.f_6.f_4 = 21030;
					uParam0->f_210.f_6.f_7 = -1;
					uParam0->f_210.f_6.f_17 = 4;
					uParam0->f_210.f_6.f_18 = 4;
					uParam0->f_210.f_6.f_19 = 4;
					uParam0->f_210.f_6.f_21 = 4;
					_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
				}
				else if (PED::DOES_GROUP_EXIST(uParam0->f_379) && PED::IS_PED_IN_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)))
				{
					iVar12 = __LIB_13__::func_957(uParam0, uParam1->f_2);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12) && !TASK::_0x508F5053E3F6F0C4(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), ENTITY::GET_ENTITY_COORDS(__LIB_13__::func_957(uParam0, uParam1->f_2), false, false), 75f))
					{
						uParam0->f_210.f_6.f_3 = iVar12;
						uParam0->f_210.f_6.f_4 = 21030;
						uParam0->f_210.f_6.f_7 = -1;
						uParam0->f_210.f_6.f_17 = 4;
						uParam0->f_210.f_6.f_18 = 4;
						uParam0->f_210.f_6.f_19 = 4;
						uParam0->f_210.f_6.f_21 = 4;
						_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
					}
					if (!__LIB_2__::func_618(&(uParam0->f_210.f_34)))
					{
						__LIB_5__::func_107(&(uParam0->f_210.f_34));
					}
					else if (__LIB_18__::func_398(&(uParam0->f_210.f_34)) > 3000)
					{
						if (__LIB_0__::func_94(uParam1->f_2, uParam0->f_613, 1) < fVar0 && uParam0->f_210.f_4 == 1)
						{
							PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -5f, 0f, 0);
							__LIB_5__::func_107(&(uParam0->f_210.f_34));
							uParam0->f_210.f_4 = 2;
						}
					}
				}
				Jump @2429; //curOff = 1586
				fVar0 = __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], uParam0->f_613, 1);
				if (!PED::DOES_GROUP_EXIST(uParam0->f_379))
				{
					uParam0->f_379 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
					if (!PED::DOES_GROUP_EXIST(uParam0->f_379))
					{
						uParam0->f_379 = PED::CREATE_GROUP(0);
					}
					if (!PED::_0x878B68960C1C2A35(PLAYER::PLAYER_PED_ID(), uParam0->f_379))
					{
						if (!PED::IS_PED_GROUP_MEMBER(PLAYER::PLAYER_PED_ID(), uParam0->f_379, 0))
						{
							PED::REMOVE_PED_FROM_GROUP(PLAYER::PLAYER_PED_ID());
						}
						PED::SET_PED_AS_GROUP_LEADER(PLAYER::PLAYER_PED_ID(), uParam0->f_379, true);
					}
					if (PED::IS_PED_IN_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)))
					{
						PED::REMOVE_PED_FROM_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
					}
					PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
					PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -5f, 0f, 0);
					PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
					PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, true);
					PED::_0x8AFCCC0F18D70018(uParam0->f_379, 1);
				}
				if (__LIB_0__::func_665(uParam1->f_2, PLAYER::PLAYER_PED_ID(), 1, 1) > 30f)
				{
					if (__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0) && PED::IS_PED_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379, 0))
					{
						PED::REMOVE_PED_FROM_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
					}
					uParam0->f_210.f_4 = 0;
				}
				else
				{
					if ((__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0) && PED::DOES_GROUP_EXIST(uParam0->f_379)) && !PED::IS_PED_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379, 0))
					{
						PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
						PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -5f, 0f, 0);
						PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
						PED::SET_PED_AS_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379);
						PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, true);
						TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
						uParam0->f_210.f_6.f_3 = __LIB_13__::func_957(uParam0, uParam1->f_2);
						uParam0->f_210.f_6.f_4 = 21030;
						uParam0->f_210.f_6.f_7 = -1;
						uParam0->f_210.f_6.f_17 = 4;
						uParam0->f_210.f_6.f_18 = 4;
						uParam0->f_210.f_6.f_19 = 4;
						uParam0->f_210.f_6.f_21 = 4;
						_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
					}
					else if (PED::DOES_GROUP_EXIST(uParam0->f_379) && PED::IS_PED_IN_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)))
					{
						iVar13 = __LIB_13__::func_957(uParam0, uParam1->f_2);
						if (ENTITY::DOES_ENTITY_EXIST(iVar13) && !TASK::_0x508F5053E3F6F0C4(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), ENTITY::GET_ENTITY_COORDS(__LIB_13__::func_957(uParam0, uParam1->f_2), false, false), 75f))
						{
							uParam0->f_210.f_6.f_3 = iVar13;
							uParam0->f_210.f_6.f_4 = 21030;
							uParam0->f_210.f_6.f_7 = -1;
							uParam0->f_210.f_6.f_17 = 4;
							uParam0->f_210.f_6.f_18 = 4;
							uParam0->f_210.f_6.f_19 = 4;
							uParam0->f_210.f_6.f_21 = 4;
							_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
						}
						if (!__LIB_2__::func_618(&(uParam0->f_210.f_34)))
						{
							__LIB_5__::func_107(&(uParam0->f_210.f_34));
						}
						else if (__LIB_18__::func_398(&(uParam0->f_210.f_34)) > 3000)
						{
							if (__LIB_0__::func_94(uParam1->f_2, uParam0->f_613, 1) > fVar0 && uParam0->f_210.f_4 == 2)
							{
								PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -2f, 0f, 0);
								__LIB_5__::func_107(&(uParam0->f_210.f_34));
								uParam0->f_210.f_4 = 1;
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_1252(var uParam0, var uParam1, var uParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	WEAPON::GET_CURRENT_PED_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &iVar10, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar11, false, 0, false);
	if (iVar11 != joaat("WEAPON_UNARMED"))
	{
		if (iVar10 == joaat("WEAPON_UNARMED") && !__LIB_0__::func_163(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 716706914))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), WEAPON::GET_BEST_PED_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), false, false), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 1, 0, 0, 0);
		}
	}
	else if (iVar10 != joaat("WEAPON_UNARMED") && !__LIB_0__::func_163(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 716706914))
	{
		WEAPON::_HIDE_PED_WEAPONS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 2, false);
		WEAPON::SET_CURRENT_PED_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), joaat("WEAPON_UNARMED"), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0, 0, 0, 0);
	}
	switch (uParam0->f_210.f_4)
	{
		case 0:
			fVar0 = __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], uParam0->f_613, 1);
			vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_2, false, false) };
			vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam2->f_2, false, false) };
			vVar7 = { __LIB_13__::func_971(&vVar1, &vVar4, &(uParam0->f_613), (fVar0 + 5f)) };
			if (__LIB_0__::func_665(uParam1->f_2, uParam2->f_2, 1, 1) > 15f)
			{
				if (!__LIB_4__::func_301(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291, true) != 0)
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_COORD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), vVar7, 0f, 0f, 0f, 1.75f, -1, 3f, 1, 1, 1, 0, 1);
						uParam0->f_210.f_6.f_3 = __LIB_13__::func_957(uParam0, uParam1->f_2);
						uParam0->f_210.f_6.f_4 = 21030;
						uParam0->f_210.f_6.f_7 = -1;
						uParam0->f_210.f_6.f_17 = 4;
						uParam0->f_210.f_6.f_18 = 4;
						uParam0->f_210.f_6.f_19 = 4;
						uParam0->f_210.f_6.f_21 = 4;
						_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
					}
				}
				else
				{
					TASK::_0x3FFCD7BBA074CC80(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), vVar7, 0f, 0f, 0f, 1.75f, 3f);
				}
			}
			else if (__LIB_0__::func_94(uParam1->f_2, uParam0->f_613, 1) > fVar0)
			{
				if (PED::DOES_GROUP_EXIST(uParam0->f_379))
				{
					PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
					PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -2f, 0f, 0);
					PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
					PED::_0x8AFCCC0F18D70018(uParam0->f_379, 1);
				}
				TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
				PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, true);
				uParam0->f_210.f_4 = 1;
			}
			else
			{
				if (PED::DOES_GROUP_EXIST(uParam0->f_379))
				{
					PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
					PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -5f, 0f, 0);
					PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
					PED::_0x8AFCCC0F18D70018(uParam0->f_379, 1);
				}
				TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
				PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, true);
				uParam0->f_210.f_4 = 2;
			}
			break;
		case 1:
			fVar0 = __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], uParam0->f_613, 1);
			if (!PED::DOES_GROUP_EXIST(uParam0->f_379))
			{
				uParam0->f_379 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
				if (!PED::DOES_GROUP_EXIST(uParam0->f_379))
				{
					uParam0->f_379 = PED::CREATE_GROUP(0);
				}
				if (!PED::_0x878B68960C1C2A35(PLAYER::PLAYER_PED_ID(), uParam0->f_379))
				{
					if (!PED::IS_PED_GROUP_MEMBER(PLAYER::PLAYER_PED_ID(), uParam0->f_379, 0))
					{
						PED::REMOVE_PED_FROM_GROUP(PLAYER::PLAYER_PED_ID());
					}
					PED::SET_PED_AS_GROUP_LEADER(PLAYER::PLAYER_PED_ID(), uParam0->f_379, true);
				}
				PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
				PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -2f, 0f, 0);
				PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
				PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, true);
				PED::_0x8AFCCC0F18D70018(uParam0->f_379, 1);
			}
			if (__LIB_0__::func_665(uParam1->f_2, uParam2->f_2, 1, 1) > 20f)
			{
				if (__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0) && PED::IS_PED_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379, 0))
				{
					PED::REMOVE_PED_FROM_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
				}
				uParam0->f_210.f_4 = 0;
			}
			else
			{
				if ((__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0) && PED::DOES_GROUP_EXIST(uParam0->f_379)) && !PED::IS_PED_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379, 0))
				{
					PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
					PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -2f, 0f, 0);
					PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
					PED::SET_PED_AS_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379);
					PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, true);
					TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
					uParam0->f_210.f_6.f_3 = __LIB_13__::func_957(uParam0, uParam1->f_2);
					uParam0->f_210.f_6.f_4 = 21030;
					uParam0->f_210.f_6.f_7 = -1;
					uParam0->f_210.f_6.f_17 = 4;
					uParam0->f_210.f_6.f_18 = 4;
					uParam0->f_210.f_6.f_19 = 4;
					uParam0->f_210.f_6.f_21 = 4;
					_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
				}
				else if (PED::DOES_GROUP_EXIST(uParam0->f_379) && PED::IS_PED_IN_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)))
				{
					iVar12 = __LIB_13__::func_957(uParam0, uParam1->f_2);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12) && !TASK::_0x508F5053E3F6F0C4(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), ENTITY::GET_ENTITY_COORDS(__LIB_13__::func_957(uParam0, uParam1->f_2), false, false), 75f))
					{
						uParam0->f_210.f_6.f_3 = iVar12;
						uParam0->f_210.f_6.f_4 = 21030;
						uParam0->f_210.f_6.f_7 = -1;
						uParam0->f_210.f_6.f_17 = 4;
						uParam0->f_210.f_6.f_18 = 4;
						uParam0->f_210.f_6.f_19 = 4;
						uParam0->f_210.f_6.f_21 = 4;
						_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
					}
					if (!__LIB_2__::func_618(&(uParam0->f_210.f_34)))
					{
						__LIB_5__::func_107(&(uParam0->f_210.f_34));
					}
					else if (__LIB_18__::func_398(&(uParam0->f_210.f_34)) > 3000)
					{
						if (__LIB_0__::func_94(uParam1->f_2, uParam0->f_613, 1) < fVar0 && uParam0->f_210.f_4 == 1)
						{
							PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -5f, 0f, 0);
							__LIB_5__::func_107(&(uParam0->f_210.f_34));
							uParam0->f_210.f_4 = 2;
						}
					}
				}
				Jump @2395; //curOff = 1579
				fVar0 = __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], uParam0->f_613, 1);
				if (!PED::DOES_GROUP_EXIST(uParam0->f_379))
				{
					uParam0->f_379 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
					if (!PED::DOES_GROUP_EXIST(uParam0->f_379))
					{
						uParam0->f_379 = PED::CREATE_GROUP(0);
					}
					if (!PED::_0x878B68960C1C2A35(PLAYER::PLAYER_PED_ID(), uParam0->f_379))
					{
						if (!PED::IS_PED_GROUP_MEMBER(PLAYER::PLAYER_PED_ID(), uParam0->f_379, 0))
						{
							PED::REMOVE_PED_FROM_GROUP(PLAYER::PLAYER_PED_ID());
						}
						PED::SET_PED_AS_GROUP_LEADER(PLAYER::PLAYER_PED_ID(), uParam0->f_379, true);
					}
					PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
					PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -5f, 0f, 0);
					PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
					PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, true);
					PED::_0x8AFCCC0F18D70018(uParam0->f_379, 1);
				}
				if (__LIB_0__::func_665(uParam1->f_2, uParam2->f_2, 1, 1) > 30f)
				{
					if (__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0) && PED::IS_PED_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379, 0))
					{
						PED::REMOVE_PED_FROM_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
					}
					uParam0->f_210.f_4 = 0;
				}
				else
				{
					if ((__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0) && PED::DOES_GROUP_EXIST(uParam0->f_379)) && !PED::IS_PED_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379, 0))
					{
						PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
						PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -5f, 0f, 0);
						PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
						PED::SET_PED_AS_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379);
						PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, true);
						TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
						uParam0->f_210.f_6.f_3 = __LIB_13__::func_957(uParam0, uParam1->f_2);
						uParam0->f_210.f_6.f_4 = 21030;
						uParam0->f_210.f_6.f_7 = -1;
						uParam0->f_210.f_6.f_17 = 4;
						uParam0->f_210.f_6.f_18 = 4;
						uParam0->f_210.f_6.f_19 = 4;
						uParam0->f_210.f_6.f_21 = 4;
						_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
					}
					else if (PED::DOES_GROUP_EXIST(uParam0->f_379) && PED::IS_PED_IN_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)))
					{
						iVar13 = __LIB_13__::func_957(uParam0, uParam1->f_2);
						if (ENTITY::DOES_ENTITY_EXIST(iVar13) && !TASK::_0x508F5053E3F6F0C4(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), ENTITY::GET_ENTITY_COORDS(__LIB_13__::func_957(uParam0, uParam1->f_2), false, false), 75f))
						{
							uParam0->f_210.f_6.f_3 = iVar13;
							uParam0->f_210.f_6.f_4 = 21030;
							uParam0->f_210.f_6.f_7 = -1;
							uParam0->f_210.f_6.f_17 = 4;
							uParam0->f_210.f_6.f_18 = 4;
							uParam0->f_210.f_6.f_19 = 4;
							uParam0->f_210.f_6.f_21 = 4;
							_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
						}
						if (!__LIB_2__::func_618(&(uParam0->f_210.f_34)))
						{
							__LIB_5__::func_107(&(uParam0->f_210.f_34));
						}
						else if (__LIB_18__::func_398(&(uParam0->f_210.f_34)) > 3000)
						{
							if (__LIB_0__::func_94(uParam1->f_2, uParam0->f_613, 1) > fVar0 && uParam0->f_210.f_4 == 2)
							{
								PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -2f, 0f, 0);
								__LIB_5__::func_107(&(uParam0->f_210.f_34));
								uParam0->f_210.f_4 = 1;
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_1253(var uParam0, var uParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)) && !ENTITY::IS_ENTITY_DEAD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2);
		if (!__LIB_2__::func_618(&(uParam0->f_210.f_43)) || __LIB_0__::func_94(iVar0, uParam0->f_494, 1) < 5f)
		{
			__LIB_5__::func_107(&(uParam0->f_210.f_43));
		}
		func_1640(uParam0, &iVar0);
		if (__LIB_4__::func_301(iVar0, -1775383291))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291, true) != 0)
			{
				if ((PED::IS_PED_ON_MOUNT(iVar0) && !uParam0->f_693) || uParam0->f_693)
				{
					TASK::_0x3FFCD7BBA074CC80(iVar0, uParam0->f_494, 0f, 0f, 0f, 1.25f, 2f);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
				}
			}
		}
		if ((BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), uParam0->f_494) > (5f * 5f) && !__LIB_0__::func_163(iVar0, -1775383291)) && ((PED::IS_PED_ON_MOUNT(iVar0) && !uParam0->f_693) || uParam0->f_693))
		{
			TASK::TASK_FOLLOW_TO_OFFSET_OF_COORD(iVar0, uParam0->f_494, 0f, 0f, 0f, 1.25f, -1, 2f, 1, 1, 1, 0, 1);
		}
	}
}

void func_1254(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	float fVar17;
	float fVar18;
	vector3 vVar19;
	vector3 vVar22;
	vector3 vVar25;
	switch (uParam0->f_210.f_2)
	{
		case 0:
			uParam0->f_498 = __LIB_18__::func_353(uParam0, uParam1);
			if (uParam0->f_498 == -1)
			{
				uParam0->f_210.f_2 = 7;
			}
			else if (uParam0->f_498 == -2)
			{
			}
			else
			{
				uParam0->f_210.f_2 = 1;
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[uParam0->f_498]) && __LIB_11__::func_474(uParam0, uParam0->f_498))
			{
				if (__LIB_0__::func_665(uParam1->f_2, uParam0->f_2[uParam0->f_498], 1, 1) > 15f)
				{
					fVar7 = __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], uParam0->f_613, 1);
					vVar8 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_2, false, false) };
					vVar11 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[uParam0->f_498], false, false) };
					vVar14 = { __LIB_13__::func_971(&vVar8, &vVar11, &(uParam0->f_613), (fVar7 + 5f)) };
					if (!__LIB_4__::func_301(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291, true) != 0)
						{
							TASK::TASK_FOLLOW_TO_OFFSET_OF_COORD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), vVar14, 0f, 0f, 0f, 2.5f, -1, 5f, 1, 1, 1, 0, 1);
							uParam0->f_210.f_6.f_3 = uParam0->f_2[uParam0->f_498];
							uParam0->f_210.f_6.f_4 = 21030;
							uParam0->f_210.f_6.f_7 = -1;
							uParam0->f_210.f_6.f_17 = 4;
							uParam0->f_210.f_6.f_18 = 4;
							uParam0->f_210.f_6.f_19 = 4;
							uParam0->f_210.f_6.f_21 = 4;
							_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
						}
						else
						{
							fVar17 = BUILTIN::VDIST(vVar14, ENTITY::GET_ENTITY_COORDS(uParam1->f_2, true, false));
							PATHFIND::_0xCF213A5FC3ABFC08(vVar14.x, vVar14.y, (fVar17 + 5f));
						}
					}
					else
					{
						fVar18 = BUILTIN::VDIST(vVar14, ENTITY::GET_ENTITY_COORDS(uParam1->f_2, true, false));
						PATHFIND::_0xCF213A5FC3ABFC08(vVar14.x, vVar14.y, (fVar18 + 5f));
						TASK::_0x3FFCD7BBA074CC80(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), vVar14, 0f, 0f, 0f, 2.5f, 5f);
					}
				}
				else
				{
					uParam0->f_210.f_2 = 2;
					if (__LIB_1__::func_985())
					{
						PED::_SET_PED_BLACKBOARD_BOOL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), "DoHerdSmack", true, 75);
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), "DoHerdWhip", true, 75);
					}
				}
			}
			else
			{
				uParam0->f_210.f_2 = 5;
				TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
			}
			iVar0 = __LIB_18__::func_353(uParam0, uParam1);
			if (iVar0 != uParam0->f_498 && uParam0->f_210.f_2 == 1)
			{
				uParam0->f_210.f_2 = 5;
				TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[uParam0->f_498]) && __LIB_11__::func_474(uParam0, uParam0->f_498))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)), 1.25f);
				vVar22 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_2, true, false) };
				vVar25 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[uParam0->f_498], true, false) };
				vVar19 = { __LIB_13__::func_971(&vVar22, &vVar25, &vVar25, (10.5f - 2.5f)) };
				if (!__LIB_4__::func_301(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291, true) != 0)
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_COORD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), vVar19, 0f, 0f, 0f, 1.25f, -1, 0.1f, 1, 1, 1, 0, 1);
						if (__LIB_1__::func_985())
						{
							PED::_SET_PED_BLACKBOARD_BOOL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), "DoHerdSmack", true, 75);
						}
						else
						{
							PED::_SET_PED_BLACKBOARD_BOOL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), "DoHerdWhip", true, 75);
						}
					}
				}
				else
				{
					TASK::_0x3FFCD7BBA074CC80(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), vVar19, 0f, 0f, 0f, 1.25f, 0.1f);
				}
			}
			else
			{
				uParam0->f_210.f_2 = 4;
			}
			if (uParam0->f_210.f_2 != 4)
			{
				iVar0 = __LIB_18__::func_353(uParam0, uParam1);
				if (iVar0 != uParam0->f_498 && uParam0->f_210.f_2 == 2)
				{
					uParam0->f_210.f_2 = 5;
					TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
				}
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[uParam0->f_498]) && __LIB_11__::func_474(uParam0, uParam0->f_498))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)), 1.25f);
				vVar4 = { uParam0->f_613 - ENTITY::GET_ENTITY_COORDS(uParam0->f_2[uParam0->f_498], true, false) };
				vVar4 = { __LIB_0__::func_173(vVar4) };
				vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[uParam0->f_498], true, false) - vVar4 * FtoV((10.5f - 2.5f)) };
				if (!__LIB_4__::func_301(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291, true) != 0)
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_COORD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), vVar1, 0f, 0f, 0f, 1.25f, -1, 0.1f, 1, 1, 1, 0, 1);
					}
				}
				else
				{
					TASK::_0x3FFCD7BBA074CC80(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), vVar1, 0f, 0f, 0f, 1.25f, 0.1f);
				}
				if (__LIB_0__::func_94(uParam1->f_2, vVar1, 1) <= (10.5f - 2.5f))
				{
					uParam0->f_210.f_2 = 2;
				}
			}
			else
			{
				uParam0->f_210.f_2 = 4;
				TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
			}
			break;
		case 4:
			vVar4 = { uParam0->f_613 - ENTITY::GET_ENTITY_COORDS(uParam0->f_2[uParam0->f_498], true, false) };
			vVar4 = { __LIB_0__::func_173(vVar4) };
			vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[uParam0->f_498], true, false) - vVar4 * FtoV((10.5f - 2.5f)) };
			if (!__LIB_4__::func_301(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291, true) != 0)
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_COORD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), vVar1, 0f, 0f, 0f, 1.25f, -1, 0.1f, 1, 1, 1, 0, 1);
				}
			}
			else
			{
				TASK::_0x3FFCD7BBA074CC80(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), vVar1, 0f, 0f, 0f, 1.25f, 0.1f);
			}
			if (!__LIB_2__::func_618(&(uParam0->f_210.f_46)))
			{
				__LIB_5__::func_107(&(uParam0->f_210.f_46));
			}
			else if (__LIB_5__::func_53(&(uParam0->f_210.f_46)) > 5f)
			{
				uParam0->f_210.f_2 = 5;
				TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
				__LIB_2__::func_608(&(uParam0->f_210.f_46));
			}
			else if (((uParam0->f_23[uParam0->f_498] == 3 || uParam0->f_23[uParam0->f_498] == 11) || uParam0->f_23[uParam0->f_498] == 12) || !__LIB_0__::func_272(uParam0->f_2[uParam0->f_498], 0))
			{
				uParam0->f_210.f_2 = 5;
				TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
				__LIB_2__::func_608(&(uParam0->f_210.f_46));
			}
			break;
		case 5:
			if (!__LIB_11__::func_482(uParam0, 1) || __LIB_13__::func_975(uParam0) <= 1)
			{
				iVar0 = __LIB_18__::func_353(uParam0, uParam1);
				if (iVar0 == -1)
				{
					uParam0->f_210.f_2 = 7;
				}
				else if (iVar0 == -2)
				{
					uParam0->f_210.f_2 = 7;
				}
				else
				{
					TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
					uParam0->f_210.f_6.f_3 = uParam0->f_2[uParam0->f_498];
					uParam0->f_210.f_6.f_4 = 21030;
					uParam0->f_210.f_6.f_7 = -1;
					uParam0->f_210.f_6.f_17 = 4;
					uParam0->f_210.f_6.f_18 = 4;
					uParam0->f_210.f_6.f_19 = 4;
					uParam0->f_210.f_6.f_21 = 4;
					_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
					uParam0->f_210.f_2 = 6;
				}
			}
			else
			{
				uParam0->f_498 = -1;
				uParam0->f_210.f_2 = 0;
			}
			break;
		case 6:
			vVar4 = { uParam0->f_613 - ENTITY::GET_ENTITY_COORDS(uParam0->f_2[uParam0->f_498], true, false) };
			vVar4 = { __LIB_0__::func_173(vVar4) };
			vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[uParam0->f_498], true, false) - vVar4 * FtoV((10.5f - 2.5f)) };
			if (!__LIB_4__::func_301(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291, true) != 0)
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_COORD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), vVar1, 0f, 0f, 0f, 1.25f, -1, 0.1f, 1, 1, 1, 0, 1);
				}
			}
			else
			{
				TASK::_0x3FFCD7BBA074CC80(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), vVar1, 0f, 0f, 0f, 1.25f, 0.1f);
			}
			if (((uParam0->f_23[uParam0->f_498] == 3 || uParam0->f_23[uParam0->f_498] == 11) || uParam0->f_23[uParam0->f_498] == 12) || !__LIB_0__::func_272(uParam0->f_2[uParam0->f_498], 0))
			{
				uParam0->f_210.f_2 = 7;
				TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
			}
			if (__LIB_11__::func_482(uParam0, 1) && __LIB_13__::func_975(uParam0) > 1)
			{
				uParam0->f_210.f_2 = 5;
				TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
			}
			break;
		case 7:
			iVar0 = __LIB_18__::func_353(uParam0, uParam1);
			if (iVar0 >= 0)
			{
				uParam0->f_210.f_2 = 5;
			}
			break;
	}
}

void func_1292(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_156, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_156)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_213, 128))
		{
			__LIB_1__::func_625();
		}
		return;
	}
	if ((__LIB_1__::func_540(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_156, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_156))
	{
		if (!__LIB_0__::func_1(uParam0->f_213, 128))
		{
			__LIB_1__::func_625();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_269(iVar1))
		{
			if (__LIB_0__::func_572(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (__LIB_0__::func_1(uParam0->f_213, 512))
	{
		bVar2 = true;
	}
	if (__LIB_5__::func_579(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_156);
		__LIB_1__::func_625();
	}
}

void func_1293(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];
	if (__LIB_0__::func_81(uParam0) == 2 && (__LIB_0__::func_1(uParam0->f_212, 16384) || __LIB_0__::func_84(uParam0, 268435456)))
	{
		Var0 = { __LIB_1__::func_589(uParam0) };
		__LIB_1__::func_590(uParam0, &Var0);
	}
	__LIB_6__::func_722(uParam0, sParam1);
	if (__LIB_0__::func_84(uParam0, 131072))
	{
		__LIB_0__::func_99(uParam0, 0);
	}
	if (__LIB_0__::func_100())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		__LIB_0__::func_101();
	}
	if (__LIB_0__::func_102())
	{
		func_224(1);
	}
	__LIB_1__::func_414(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	__LIB_1__::func_517(uParam0, cVar8);
	__LIB_0__::func_722(1, 0);
	__LIB_1__::func_476(uParam0);
	if (__LIB_0__::func_103() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, __LIB_0__::func_731(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_1__::func_503(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_148);
	}
	__LIB_1__::func_740(uParam0);
	__LIB_1__::func_591(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_156);
	Global_43800 = uParam0->f_156;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_1300(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_212, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_1__::func_518(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_212, 524288))
		{
			__LIB_4__::func_717(&(uParam0->f_224));
		}
		func_1671(&(uParam0->f_212), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_1__::func_519(uParam0, 0f, 0f, 0f);
		func_1673(uParam0);
		func_1674(uParam0);
		__LIB_1__::func_577(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_1__::func_596(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_225)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_225));
		}
	}
}

void func_1307(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_6__::func_726(&(uParam0->f_213), uParam0->f_224);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_1__::func_597(uParam0);
	__LIB_8__::func_898(uParam0, 1);
	__LIB_1__::func_594(uParam0);
	__LIB_1__::func_520(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_1__::func_521(uParam0, 4);
	__LIB_1__::func_595(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_1__::func_476(uParam0);
	__LIB_2__::func_608(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_156))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
	}
	__LIB_4__::func_716(!__LIB_0__::func_1(uParam0->f_213, 128));
	if (!__LIB_0__::func_1(uParam0->f_213, 128))
	{
		__LIB_1__::func_625();
	}
}

float func_1331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 78.0127f;
		case 1:
			return 58.5875f;
		case 2:
		case 3:
			return 59.0111f;
		case 4:
			return 59.0111f;
		case 5:
			return 91.9353f;
		case 6:
			return 60.2491f;
	}
	return 78.0127f;
}

int func_1332(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	var uVar0;
	struct<11> Var1;
	Var1.f_10 = 7;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	Var1.f_2 = iParam2;
	Var1.f_3 = 1;
	Var1.f_4 = 1;
	Var1.f_6 = { uParam3, uParam4, uParam5 };
	Var1.f_9 = fParam6;
	return __LIB_1__::func_854(&uVar0, &Var1);
}

Vector3 func_1333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1859.19f, -1839.17f, 41.44f;
		case 1:
			return 1448.43f, -950.88f, 56.02f;
		case 2:
		case 3:
			return vLocal_935;
		case 4:
			return 1371.027f, -856.4229f, 68.746f;
		case 5:
			return 907.67f, -811.68f, 68.39f;
		case 6:
			return 724.0866f, -813.081f, 51.0488f;
	}
	return 1859.19f, -1839.17f, 41.44f;
}

char* func_1334()
{
	return "rust_uncle_travel";
}

int func_1340(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_1703(iParam0))
		{
			if (!__LIB_0__::func_394(Global_35, iLocal_24, 1))
			{
				PED::_SET_PED_ON_MOUNT(Global_35, iLocal_24, -1, true);
			}
			else
			{
				return 1;
			}
		}
	}
	else if (func_1704(iParam0))
	{
		func_652(Global_35, func_610(iParam0), 0f, 2, 1073741824 /* Float: 2f */);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && __LIB_0__::func_266(Global_35, func_610(iParam0), 5f, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1341(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_801(iParam0) && func_799())
		{
			if (!__LIB_0__::func_394(iLocal_22, iLocal_23, 1))
			{
				PED::_SET_PED_ON_MOUNT(iLocal_22, iLocal_23, -1, true);
			}
			else
			{
				return 1;
			}
		}
	}
	else if (iParam0 != 2)
	{
		func_652(iLocal_22, func_1333(iParam0), 0f, 2, 1073741824 /* Float: 2f */);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_22) && __LIB_0__::func_266(iLocal_22, func_1333(iParam0), 5f, 1, 1))
		{
			return 1;
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_22))
	{
		return 1;
	}
	return 0;
}

void func_1342(bool bParam0)
{
	HUD::DISPLAY_HUD(true);
	MAP::DISPLAY_RADAR(true);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_24))
	{
		if (ENTITY::_IS_ENTITY_FROZEN(iLocal_24))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_24, false);
		}
	}
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
	}
}

bool func_1344()
{
	if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_1264))
	{
		iLocal_1264 = TASK::ADD_COVER_POINT(vLocal_1265, fLocal_1268, 2, 0, 2, false);
	}
	else
	{
		return true;
	}
	return false;
}

bool func_1345()
{
	if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_1263))
	{
		iLocal_1263 = TASK::ADD_COVER_POINT(vLocal_983, fLocal_1268, 3, 1, 1, false);
	}
	else
	{
		return true;
	}
	return false;
}

bool func_1346()
{
	vector3 vVar0;
	if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_22, vLocal_1269, 1.5f, 1.5f, 2.5f, false, true, 0))
	{
		__LIB_1__::func_462(4);
		if (PED::IS_PED_IN_GROUP(iLocal_22))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_22);
		}
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_22, true, false) };
		func_652(iLocal_22, vLocal_1269, fLocal_1268, 2, 1073741824 /* Float: 2f */);
		PED::_SET_PED_CROUCH_MOVEMENT(iLocal_22, true, 0, false);
	}
	else
	{
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_22, vLocal_1265, -1, 1, 0f, 0, 0, iLocal_1264, 0, 1, 0);
		return true;
	}
	return false;
}

void func_1347()
{
	ENTITY::SET_ENTITY_COORDS(Global_35, vLocal_983, true, false, true, true);
	PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Global_35, vLocal_983, -1, 1, 0f, 0, 0, iLocal_1263, 0, 1, 0);
}

bool func_1348()
{
	if (__LIB_19__::func_189(&Local_96, vLocal_1008, 20, vLocal_971, vLocal_974, vLocal_977, joaat("A_C_COW"), joaat("VOLBOX"), iLocal_897, 0, 0, 0, 1, 0))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_96.f_694))
		{
			Local_96.f_694 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(659.9146f, -491.0696f, 87.56485f, 0f, 0f, 40.93697f, 341.5773f, 151.8329f, 116.7063f, "volLimitMovement");
		}
		__LIB_11__::func_466(&Local_96);
		func_297(&Local_96, 1);
		return true;
	}
	return false;
}

int func_1349()
{
	if (__LIB_19__::func_189(&Local_96, vLocal_1011, 20, vLocal_971, vLocal_974, vLocal_977, joaat("A_C_COW"), joaat("VOLBOX"), 0, 0, 0, 0, 1, 0))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_96.f_694))
		{
			Local_96.f_694 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(659.9146f, -491.0696f, 87.56485f, 0f, 0f, 40.93697f, 341.5773f, 151.8329f, 116.7063f, "volLimitMovement");
		}
		__LIB_11__::func_466(&Local_96);
		func_297(&Local_96, 1);
		return 1;
	}
	return 0;
}

bool func_1350()
{
	if (__LIB_19__::func_189(&Local_96, vLocal_971, 20, vLocal_971, vLocal_974, vLocal_977, joaat("A_C_COW"), joaat("VOLBOX"), 0, 0, 0, 0, 1, 0))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_96.f_694))
		{
			Local_96.f_694 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(659.9146f, -491.0696f, 87.56485f, 0f, 0f, 40.93697f, 341.5773f, 151.8329f, 116.7063f, "volLimitMovement");
		}
		__LIB_11__::func_466(&Local_96);
		return true;
	}
	return false;
}

int func_1353(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = __LIB_0__::func_27(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!__LIB_0__::func_27(iParam1, 512) && __LIB_1__::func_280(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_IS_WEAPON_ONE_HANDED(Var4.f_4) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 32))) && (!WEAPON::_IS_WEAPON_PISTOL(Var4.f_4) || !__LIB_0__::func_27(iParam1, 16777216))) && (!WEAPON::_IS_WEAPON_REVOLVER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 33554432)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	if (__LIB_0__::func_154(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1353(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1474(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;
	func_525(iParam0, 1, 1, -142743235, 1);
	iVar34 = __LIB_1__::func_415(iParam0, &uVar18);
	__LIB_1__::func_82(iParam0, &uVar18, &iVar34, 1);
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	__LIB_0__::func_827(iParam0, &(Global_26796.f_627.f_121.f_20));
	__LIB_1__::func_798(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_525(uVar18[iVar36], 1, 1, -142743235, 1);
		switch (__LIB_0__::func_357(uVar18[iVar36]))
		{
			case -2061583405:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		__LIB_1__::func_798(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(__LIB_1__::func_710(uVar18[iVar36]), 1);
		iVar36++;
	}
	__LIB_0__::func_608(&(Global_1946804.f_1616));
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == __LIB_0__::func_780(iVar0[iVar36], iVar35))
			{
				__LIB_1__::func_798(__LIB_0__::func_998(iVar35), 1, 1);
				__LIB_0__::func_999(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!__LIB_0__::func_65(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
							Global_1946804.f_1497.f_1[iVar37 /*3*/] = { Global_1946804.f_1616.f_1[iVar37 /*3*/] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_1946804.f_1497.f_1[iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
	{
		if (!__LIB_0__::func_609(8))
		{
			if (__LIB_0__::func_241() == -2125499975)
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					__LIB_0__::func_828(Global_40.f_7729, 4096);
					__LIB_0__::func_806(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					__LIB_1__::func_811(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_26796.f_627.f_1.f_1.f_1[iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	Global_1946804.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] };
	Global_1946804.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] };
	Global_1946804.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] };
	Global_1946804.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] };
	Global_1946804.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] };
	Global_1946804.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] };
	Global_1946804.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] };
	Global_1946804.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] };
	Global_1946804.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] };
	Global_26796.f_627 = Global_1946804.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804.f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar36 /*3*/] = { Global_1946804.f_1616.f_1[iVar36 /*3*/] };
		iVar36++;
	}
}

void func_1480(struct<6> Param0)
{
	if (!func_1777(Param0.f_4, 1))
	{
	}
	if (!func_1777(Param0, 1))
	{
	}
	if (!func_1777(Param0.f_2, 1))
	{
	}
	if (!func_1777(Param0.f_5, 1))
	{
	}
	if (!func_1777(Param0.f_3, 1))
	{
	}
	if (!func_1777(Param0.f_1, 1))
	{
	}
}

int func_1517(int iParam0)
{
	int iVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952[iParam0 /*2*/].f_1))
	{
		return Global_1897952[iParam0 /*2*/].f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_0x39816F6F94F385AD(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_0x39816F6F94F385AD(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
		case 5:
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952[6 /*2*/].f_1) && VOLUME::_DOES_VOLUME_EXIST(Global_1897952[7 /*2*/].f_1))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_0x6E0D3C3F828DA773(iVar0, Global_1897952[6 /*2*/].f_1);
				VOLUME::_0x6E0D3C3F828DA773(iVar0, Global_1897952[7 /*2*/].f_1);
			}
			else
			{
				return 0;
			}
			break;
		case 8:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_0x39816F6F94F385AD(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			break;
		case 10:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			break;
		case 11:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			Jump @9444; //curOff = 6714
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			Jump @9444; //curOff = 7286
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			Jump @9444; //curOff = 7858
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9444; //curOff = 8172
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_0x39816F6F94F385AD(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			Jump @9444; //curOff = 8873
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			Global_1897952[iParam0 /*2*/].f_1 = iVar0;
			return iVar0;
		}
bool func_1518(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !__LIB_0__::func_181())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

int func_1546(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = __LIB_1__::func_179(iParam0, 1);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x31C70A716CAE1FEE(iVar3);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			else
			{
				if (!__LIB_0__::func_851(iParam0) && __LIB_0__::func_852(iParam0, &uVar4))
				{
					PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_725(iParam0, 1), &uVar4);
				}
				__LIB_0__::func_213(iParam0, 256, 0);
				__LIB_0__::func_234(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return __LIB_0__::func_749();
				}
				if (bParam2 && !__LIB_0__::func_86(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!__LIB_3__::func_119(iParam0, vVar0, iParam6, iParam10))
				{
					return __LIB_0__::func_749();
				}
				if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					if (PERSCHAR::_0x31C70A716CAE1FEE(iVar3) != Global_1360165[iParam0 /*1157*/].f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					__LIB_0__::func_234(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (!bParam9 || PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/].f_124))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (bParam7)
			{
				if (!__LIB_1__::func_411(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return __LIB_0__::func_749();
				}
			}
			if ((bParam2 && !__LIB_0__::func_86(vVar0)) && !__LIB_0__::func_175(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_652(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					if (__LIB_0__::func_287(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				__LIB_0__::func_288(iParam0, 39, 1);
				__LIB_0__::func_213(iParam0, 8, 1);
				__LIB_0__::func_213(iParam0, 64, 0);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			__LIB_1__::func_547(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/].f_124, 1);
			}
			sVar12 = __LIB_0__::func_853(iParam0, __LIB_0__::func_181());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(__LIB_0__::func_725(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			__LIB_0__::func_290(iParam0, 40, 0);
			__LIB_0__::func_213(iParam0, 32, 0);
			__LIB_0__::func_234(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}
	return __LIB_0__::func_749();
}

void func_1563(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return;
	}
	CAM::SET_GAMEPLAY_HINT_FOV(fParam4);
	fVar0 = __LIB_1__::func_874(vParam1, 1);
	if (!__LIB_0__::func_51(&(uParam0->f_3), 32))
	{
		if (fVar0 > 60f)
		{
			iVar1 = 4000;
			iVar2 = 3500;
		}
		else if (fVar0 > 40f)
		{
			iVar1 = 3750;
			iVar2 = 3250;
		}
		else if (fVar0 > 20f)
		{
			iVar1 = 3500;
			iVar2 = 3000;
		}
		else if (fVar0 > 10f)
		{
			iVar1 = 3250;
			iVar2 = 2750;
		}
		else
		{
			iVar1 = 3000;
			iVar2 = 2500;
		}
		if (iParam5 > iVar1)
		{
			uParam0->f_4 = iVar1;
		}
		else if (iParam5 < iVar2)
		{
			uParam0->f_4 = iVar2;
		}
		else
		{
			uParam0->f_4 = iParam5;
		}
		CAM::_0x1F6EBD94680252CE(iVar1, -1082130432 /* Float: -1f */);
		CAM::_0xF48664E9C83825E3(iVar2, -1082130432 /* Float: -1f */);
	}
	else
	{
		uParam0->f_4 = iParam5;
	}
	__LIB_5__::func_107(uParam0);
	__LIB_0__::func_7(&(uParam0->f_3), 1);
}

void func_1616(var uParam0)
{
	vector3 vVar0;
	__LIB_1__::func_480(&(uParam0->f_350));
	__LIB_17__::func_785(&(uParam0->f_329), &(uParam0->f_311));
	__LIB_13__::func_986(uParam0);
	uParam0->f_44[uParam0->f_351] = ((BUILTIN::TO_FLOAT(uParam0->f_351) * 50f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 50f));
	__LIB_5__::func_107(&(uParam0->f_65[uParam0->f_351 /*3*/]));
	vVar0 = { __LIB_11__::func_481(&(uParam0->f_190[uParam0->f_209 /*9*/])) };
	PED::_0x463803429297117C(uParam0->f_2[uParam0->f_351], vVar0, 3, 1);
	if (__LIB_1__::func_985())
	{
		PED::_SET_PED_BLACKBOARD_BOOL(PLAYER::PLAYER_PED_ID(), "DoHerdSmack", true, 50);
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_BOOL(PLAYER::PLAYER_PED_ID(), "DoHerdWhip", true, 50);
	}
	uParam0->f_23[uParam0->f_351] = 7;
	if (__LIB_2__::func_618(&(uParam0->f_503)))
	{
		__LIB_5__::func_107(&(uParam0->f_503));
	}
	func_1856(uParam0, uParam0->f_351, vVar0);
	func_696(uParam0);
}

bool func_1626(var uParam0, var uParam1)
{
	float fVar0;
	fVar0 = __LIB_18__::func_740(uParam0, uParam1, 1);
	if (fVar0 < (uParam0->f_656 - 5f) || __LIB_13__::func_969(uParam0))
	{
		__LIB_2__::func_608(&(uParam0->f_210.f_43));
		return true;
	}
	return false;
}

bool func_1628(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	if (!__LIB_13__::func_948(uParam0))
	{
		return false;
	}
	if (__LIB_11__::func_482(uParam0, 1))
	{
		if (__LIB_11__::func_494(uParam0, 64))
		{
			return true;
		}
		iVar0 = __LIB_13__::func_979(uParam0, &(uParam1->f_2));
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			fVar1 = __LIB_0__::func_665(iVar0, uParam1->f_2, 1, 1);
		}
		else
		{
			return false;
		}
		if (uParam0->f_499 == 10000f)
		{
			uParam0->f_499 = fVar1;
		}
		if (__LIB_13__::func_975(uParam0) <= 1)
		{
			uParam0->f_498 = __LIB_18__::func_353(uParam0, uParam2);
			if (uParam0->f_498 == -1)
			{
				return false;
			}
		}
		if (fVar1 >= uParam0->f_499)
		{
			if (!__LIB_2__::func_618(&(uParam0->f_500)))
			{
				__LIB_5__::func_107(&(uParam0->f_500));
			}
			else if (__LIB_5__::func_28(&(uParam0->f_500)) > 7500)
			{
				uParam0->f_499 = 10000f;
				__LIB_2__::func_608(&(uParam0->f_500));
				return true;
			}
		}
		else
		{
			if (__LIB_2__::func_618(&(uParam0->f_500)))
			{
				__LIB_2__::func_608(&(uParam0->f_500));
			}
			uParam0->f_499 = fVar1;
		}
	}
	else
	{
		if (__LIB_2__::func_618(&(uParam0->f_500)))
		{
			__LIB_2__::func_608(&(uParam0->f_500));
		}
		if (uParam0->f_499 != 10000f)
		{
			uParam0->f_499 = 10000f;
		}
	}
	return false;
}

bool func_1632(var uParam0, var uParam1)
{
	if (__LIB_13__::func_969(uParam0))
	{
		return false;
	}
	if (uParam0->f_210.f_76 >= uParam0->f_210.f_75 && uParam0->f_210.f_75 != -1)
	{
		return false;
	}
	if (!__LIB_11__::func_494(uParam0, 16))
	{
		if (__LIB_2__::func_618(&(uParam0->f_210.f_66)))
		{
			__LIB_2__::func_608(&(uParam0->f_210.f_66));
		}
		if (__LIB_2__::func_618(&(uParam0->f_210.f_72)))
		{
			__LIB_2__::func_608(&(uParam0->f_210.f_72));
		}
		return false;
	}
	if (!__LIB_2__::func_618(&(uParam0->f_210.f_66)))
	{
		if (uParam0->f_210.f_76 == 0)
		{
			__LIB_2__::func_620(&(uParam0->f_210.f_66), ((90000f / 1.1f) / 1000f));
		}
		else
		{
			__LIB_5__::func_107(&(uParam0->f_210.f_66));
		}
	}
	if (!__LIB_2__::func_618(&(uParam0->f_210.f_69)))
	{
		__LIB_5__::func_107(&(uParam0->f_210.f_69));
	}
	else
	{
		if (__LIB_19__::func_188(uParam0, uParam1, 1))
		{
			if (!__LIB_2__::func_618(&(uParam0->f_210.f_72)))
			{
				__LIB_5__::func_107(&(uParam0->f_210.f_72));
			}
			else if (__LIB_5__::func_28(&(uParam0->f_210.f_72)) > 5000)
			{
				__LIB_5__::func_107(&(uParam0->f_210.f_69));
			}
		}
		else if (__LIB_2__::func_618(&(uParam0->f_210.f_72)))
		{
			__LIB_2__::func_608(&(uParam0->f_210.f_72));
		}
		if (__LIB_11__::func_483(uParam0))
		{
			__LIB_5__::func_107(&(uParam0->f_210.f_69));
		}
		if (AUDIO::_0xA2CAC9DEF0195E6F(1))
		{
			if (__LIB_2__::func_618(&(uParam0->f_210.f_66)) && IntToFloat(__LIB_5__::func_28(&(uParam0->f_210.f_66))) > (90000f / 1.1f))
			{
				__LIB_2__::func_620(&(uParam0->f_210.f_66), ((90000f / 1.1f) / 1000f));
			}
		}
		if (__LIB_5__::func_28(&(uParam0->f_210.f_69)) > 10000 && __LIB_5__::func_28(&(uParam0->f_210.f_66)) > 90000)
		{
			return true;
		}
	}
	return false;
}

bool func_1633(var uParam0)
{
	if (__LIB_13__::func_969(uParam0))
	{
		return false;
	}
	if (uParam0->f_210.f_84 >= uParam0->f_210.f_83 && uParam0->f_210.f_83 != -1)
	{
		__LIB_13__::func_958(uParam0, 16);
		return false;
	}
	if (__LIB_4__::func_156(uParam0, 16))
	{
		if (!__LIB_2__::func_618(&(uParam0->f_210.f_80)))
		{
			__LIB_5__::func_107(&(uParam0->f_210.f_80));
		}
		if (!__LIB_2__::func_618(&(uParam0->f_210.f_77)))
		{
			if (uParam0->f_210.f_84 == 0)
			{
				__LIB_2__::func_620(&(uParam0->f_210.f_77), 22f);
			}
			else
			{
				__LIB_5__::func_107(&(uParam0->f_210.f_77));
			}
		}
		else if (__LIB_5__::func_28(&(uParam0->f_210.f_77)) >= 45000 && __LIB_5__::func_28(&(uParam0->f_210.f_80)) >= 5000)
		{
			return true;
		}
		else
		{
			__LIB_13__::func_958(uParam0, 16);
		}
	}
	else if (__LIB_2__::func_618(&(uParam0->f_210.f_80)))
	{
		__LIB_2__::func_608(&(uParam0->f_210.f_80));
	}
	return false;
}

bool func_1634(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	fVar0 = __LIB_18__::func_740(uParam0, uParam1, iParam2);
	fVar1 = BUILTIN::VMAG(uParam0->f_613 - uParam0->f_616);
	vVar2 = { __LIB_13__::func_941(uParam0) - __LIB_13__::func_950(uParam0) };
	vVar2 = { __LIB_0__::func_173(vVar2) };
	vVar5 = { uParam0->f_613 - uParam0->f_616 };
	vVar5 = { __LIB_0__::func_173(vVar5) };
	fVar8 = MISC::ACOS(__LIB_1__::func_95(vVar2, vVar5));
	if (fVar1 > 0.3f && fVar8 > 145f)
	{
		if (!__LIB_2__::func_618(&(uParam0->f_210.f_61)))
		{
			__LIB_5__::func_107(&(uParam0->f_210.f_61));
		}
	}
	else if (fVar1 > 0.3f && fVar8 < 70f)
	{
		if (__LIB_2__::func_618(&(uParam0->f_210.f_61)))
		{
			__LIB_2__::func_608(&(uParam0->f_210.f_61));
		}
	}
	if (((fVar0 >= uParam0->f_656 || __LIB_18__::func_398(&(uParam0->f_210.f_61)) > 3000) && !__LIB_13__::func_969(uParam0)) && fVar1 != 0f)
	{
		if (__LIB_2__::func_618(&(uParam0->f_210.f_61)))
		{
			__LIB_2__::func_608(&(uParam0->f_210.f_61));
		}
		if (fVar0 >= uParam0->f_656)
		{
		}
		if (__LIB_18__::func_398(&(uParam0->f_210.f_61)) > 3000)
		{
		}
		return true;
	}
	return false;
}

bool func_1636(var uParam0, var uParam1)
{
	float fVar0;
	if (uParam0->f_210.f_92 >= uParam0->f_210.f_91 && uParam0->f_210.f_91 != -1)
	{
		return false;
	}
	if (!__LIB_2__::func_618(&(uParam0->f_210.f_88)))
	{
		if (uParam0->f_210.f_92 == 0)
		{
			__LIB_2__::func_620(&(uParam0->f_210.f_88), 30f);
		}
		else
		{
			__LIB_5__::func_107(&(uParam0->f_210.f_88));
		}
	}
	if (!__LIB_2__::func_618(&(uParam0->f_210.f_85)))
	{
		__LIB_5__::func_107(&(uParam0->f_210.f_85));
	}
	else
	{
		fVar0 = BUILTIN::VMAG(__LIB_11__::func_509(uParam1));
		if (fVar0 == 0f)
		{
			if (!__LIB_2__::func_618(&(uParam0->f_210.f_85)))
			{
				__LIB_5__::func_107(&(uParam0->f_210.f_85));
			}
		}
		else if (__LIB_2__::func_618(&(uParam0->f_210.f_85)))
		{
			__LIB_2__::func_608(&(uParam0->f_210.f_85));
		}
		if ((__LIB_2__::func_618(&(uParam0->f_210.f_85)) && __LIB_5__::func_28(&(uParam0->f_210.f_85)) > 10000) && (__LIB_2__::func_618(&(uParam0->f_210.f_88)) && __LIB_5__::func_28(&(uParam0->f_210.f_88)) > 30000))
		{
			return true;
		}
	}
	return false;
}

bool func_1637(var uParam0)
{
	if (uParam0->f_210.f_1 == 3 || uParam0->f_210.f_1 == 5)
	{
		return true;
	}
	if (!__LIB_2__::func_618(&(uParam0->f_210.f_31)))
	{
		__LIB_5__::func_107(&(uParam0->f_210.f_31));
	}
	else if (__LIB_5__::func_28(&(uParam0->f_210.f_31)) >= 1500)
	{
		return true;
	}
	return false;
}

void func_1640(var uParam0, int iParam1)
{
	if (uParam0->f_497 == 0)
	{
		if (__LIB_0__::func_94(*iParam1, uParam0->f_494, 1) < (35f - 5f))
		{
			uParam0->f_497 = 1;
		}
		if (!__LIB_2__::func_618(&(uParam0->f_210.f_43)))
		{
			__LIB_5__::func_107(&(uParam0->f_210.f_43));
		}
		else if (__LIB_5__::func_28(&(uParam0->f_210.f_43)) < 1500)
		{
			uParam0->f_497 = 1;
		}
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(*iParam1, 1.25f);
		}
		if (PED::IS_PED_ON_MOUNT(*iParam1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(*iParam1), 1.25f);
		}
		if (__LIB_2__::func_618(&(uParam0->f_210.f_43)))
		{
			if (__LIB_5__::func_28(&(uParam0->f_210.f_43)) > 1500 && __LIB_0__::func_94(*iParam1, uParam0->f_494, 1) >= 35f)
			{
				uParam0->f_497 = 0;
			}
		}
		else
		{
			__LIB_5__::func_107(&(uParam0->f_210.f_43));
		}
	}
}

void func_1671(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	if (Global_1935630.f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_0__::func_145(0, 0);
		__LIB_0__::func_146(-1);
	}
	__LIB_0__::func_87(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!__LIB_0__::func_1(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!__LIB_0__::func_1(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!__LIB_0__::func_1(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (__LIB_0__::func_1(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!__LIB_0__::func_1(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!__LIB_0__::func_1(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!__LIB_0__::func_1(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!__LIB_0__::func_1(*uParam0, 4) && !__LIB_0__::func_1(*uParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*uParam0, 2048))
	{
		__LIB_0__::func_713(0, 0);
	}
	if (__LIB_0__::func_1(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_0__::func_1(*uParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (__LIB_0__::func_1(*uParam0, 8192))
	{
		func_1879();
	}
	if (!__LIB_0__::func_1(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!__LIB_0__::func_1(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!__LIB_0__::func_1(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!__LIB_0__::func_1(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (__LIB_0__::func_147() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (__LIB_0__::func_86(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						__LIB_0__::func_634(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						__LIB_0__::func_148(2);
						__LIB_0__::func_149(-1);
						__LIB_0__::func_150(vVar3);
						__LIB_0__::func_151(__LIB_0__::func_23());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, true, false);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!__LIB_0__::func_1(*uParam0, 4096))
	{
		__LIB_0__::func_142(Global_35);
	}
	if (!__LIB_0__::func_1(*uParam0, 1048576))
	{
		UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!__LIB_0__::func_1(*uParam0, 2097152))
	{
		if (__LIB_0__::func_704() || PED::_0x50F124E6EF188B22(Global_35))
		{
			__LIB_1__::func_716(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_1673(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_1__::func_524(uParam0)))
	{
		bVar0 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4);
		iVar1 = PED::_GET_LAST_MOUNT(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(iVar1))
			{
				iVar2 |= 32;
			}
			func_652(iVar1, __LIB_1__::func_524(uParam0), __LIB_1__::func_525(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_652(iVar3, __LIB_1__::func_524(uParam0), __LIB_1__::func_525(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1674(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_1__::func_524(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_1__::func_524(uParam0) };
			func_652(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1703(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_610(iParam0) };
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_24) && __LIB_0__::func_266(iLocal_24, vVar0, 5f, 1, 1))
	{
		return true;
	}
	iLocal_24 = func_1332(1, 1, 1, vVar0.x, vVar0.y, vVar0.z, func_1331(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_24))
	{
		switch (iParam0)
		{
			case 0:
				func_652(iLocal_24, vVar0, func_1331(iParam0), 2, 1073741824 /* Float: 2f */);
				break;
			case 1:
				func_652(iLocal_24, vVar0, func_1331(iParam0), 2, 1073741824 /* Float: 2f */);
				break;
			case 3:
				func_652(iLocal_24, vVar0, func_1331(iParam0), 2, 1073741824 /* Float: 2f */);
				break;
			case 4:
				func_652(iLocal_24, vVar0, func_1331(iParam0), 2, 1073741824 /* Float: 2f */);
				break;
			case 5:
				func_652(iLocal_24, vVar0, func_1331(iParam0), 2, 1073741824 /* Float: 2f */);
				break;
			default:
				func_652(iLocal_24, vVar0, func_1331(iParam0), 2, 1073741824 /* Float: 2f */);
				break;
		}
	}
	return false;
}

bool func_1704(int iParam0)
{
	vector3 vVar0;
	vVar0 = { func_1914(iParam0) };
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_24) && __LIB_0__::func_266(iLocal_24, vVar0, 5f, 1, 1))
	{
		return true;
	}
	iLocal_24 = func_1332(1, 1, 1, vVar0.x, vVar0.y, vVar0.z, func_1331(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_24))
	{
		switch (iParam0)
		{
			case 0:
				func_652(iLocal_24, vVar0, func_1331(iParam0), 2, 1073741824 /* Float: 2f */);
				break;
			case 1:
				func_652(iLocal_24, vVar0, func_1331(iParam0), 2, 1073741824 /* Float: 2f */);
				break;
			case 3:
				func_652(iLocal_24, vVar0, func_1331(iParam0), 2, 1073741824 /* Float: 2f */);
				break;
			case 4:
				func_652(iLocal_24, vVar0, func_1331(iParam0), 2, 1073741824 /* Float: 2f */);
				break;
			case 5:
				func_652(iLocal_24, vVar0, func_1331(iParam0), 2, 1073741824 /* Float: 2f */);
				break;
			default:
				func_652(iLocal_24, vVar0, func_1331(iParam0), 2, 1073741824 /* Float: 2f */);
				break;
		}
	}
	return false;
}

bool func_1777(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_703(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { __LIB_1__::func_124() };
	Var14 = { __LIB_0__::func_429(iParam0, Var10, iVar9, 0) };
	if (__LIB_1__::func_556(Var14, iParam1))
	{
		if (__LIB_0__::func_847(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_1777(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1777(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1777(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1777(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

void func_1856(var uParam0, int iParam1, vector3 vParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	fVar1 = 100000f;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iParam1]))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar2 = __LIB_11__::func_506(uParam0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				if (__LIB_0__::func_272(iVar2, 0) && __LIB_11__::func_474(uParam0, iVar0))
				{
					fVar1 = __LIB_0__::func_665(iVar2, uParam0->f_2[iParam1], 1, 1);
					if (fVar1 <= 20f)
					{
						uParam0->f_44[iVar0] = ((BUILTIN::TO_FLOAT(iVar0) * 50f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 50f));
						__LIB_5__::func_107(&(uParam0->f_65[iVar0 /*3*/]));
						PED::_0x463803429297117C(uParam0->f_2[iVar0], vParam2, 3, 1);
						uParam0->f_23[iVar0] = 7;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1879()
{
	int iVar0;
	iVar0 = __LIB_0__::func_153(Global_35, 9, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 7, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = __LIB_0__::func_153(Global_35, 0, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 1, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 18, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_664();
	if (__LIB_0__::func_154(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_1__::func_766(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1999(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_1__::func_766(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

Vector3 func_1914(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1860.806f, -1830.052f, 42.1351f;
		case 1:
			return 1449.461f, -947.4047f, 55.861f;
		case 2:
		case 3:
			return 1404.36f, -908.96f, 63.71f;
		case 4:
			return 1371.239f, -864.5988f, 68.305f;
		case 5:
			return 907.7f, -802.6f, 68.48f;
		case 6:
			return 720.3777f, -816.9917f, 49.8127f;
	}
	return 1885.04f, -1857.22f, 41.71f;
}

int func_1999(int iParam0, int iParam1)
{
	var uVar0;
	return func_2069(&uVar0, iParam0, iParam1);
}

int func_2069(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = __LIB_0__::func_27(iParam1, 128);
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4) && !WEAPON::_IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!__LIB_0__::func_27(iParam1, 512) && __LIB_1__::func_280(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if ((((((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) || __LIB_0__::func_237(Var4.f_4)) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || __LIB_0__::func_27(iParam1, 4))) && (!__LIB_0__::func_237(Var4.f_4) || __LIB_0__::func_27(iParam1, 8))) && (!WEAPON::_IS_WEAPON_REPEATER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 8388608))) && (!WEAPON::_IS_WEAPON_RIFLE(Var4.f_4) || !__LIB_0__::func_27(iParam1, 1048576)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512) && !__LIB_0__::func_27(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_2069(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

