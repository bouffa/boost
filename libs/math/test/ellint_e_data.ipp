//  Copyright (c) 2006 John Maddock
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Each row of test data contains in order:
//
// k, E(k)
//
   static const boost::array<boost::array<T, 2>, 100> ellint_e_data = {{
      {{ SC_(-0.990433037281036376953125e0), SC_(0.10274527688571687030049782227296053357094496206279e1) }}, 
      {{ SC_(-0.936334311962127685546875e0), SC_(0.11232874555917022066938321555637623562213676975972e1) }}, 
      {{ SC_(-0.931107819080352783203125e0), SC_(0.1130760221755419903369153157619439589360779303926e1) }}, 
      {{ SC_(-0.928576648235321044921875e0), SC_(0.11343097282371636644057123410674810478126636794066e1) }}, 
      {{ SC_(-0.92711746692657470703125e0), SC_(0.11363362574688624051162518398981635242155496915255e1) }}, 
      {{ SC_(-0.907657206058502197265625e0), SC_(0.11621185270599645325148449388373607697900140479452e1) }}, 
      {{ SC_(-0.89756715297698974609375e0), SC_(0.11746803765109846934010357339330910078574216811115e1) }}, 
      {{ SC_(-0.80573642253875732421875e0), SC_(0.12711544492641534140326897830960020400731161482408e1) }}, 
      {{ SC_(-0.804919183254241943359375e0), SC_(0.1271899578518333585916968732627512791380932403316e1) }}, 
      {{ SC_(-0.780276477336883544921875e0), SC_(0.12936183519259955902237796585053994588791953787341e1) }}, 
      {{ SC_(-0.775070965290069580078125e0), SC_(0.12980290901572191577411456044089492043970943779076e1) }}, 
      {{ SC_(-0.7496345043182373046875e0), SC_(0.13187607273206970520631617642065752154074679201729e1) }}, 
      {{ SC_(-0.74820673465728759765625e0), SC_(0.13198856849340247002745787630036800286336929689325e1) }}, 
      {{ SC_(-0.74602639675140380859375e0), SC_(0.13215959480936459650266993732312887701493706168114e1) }}, 
      {{ SC_(-0.72904598712921142578125e0), SC_(0.1334606672267782799453143920126631207219848911468e1) }}, 
      {{ SC_(-0.7162272930145263671875e0), SC_(0.13440793050791416705713681443513787752467694981452e1) }}, 
      {{ SC_(-0.701772034168243408203125e0), SC_(0.13544180205342472921449637366285993011101451511219e1) }}, 
      {{ SC_(-0.68477380275726318359375e0), SC_(0.13661308406125643621284019270477708148951227020526e1) }}, 
      {{ SC_(-0.657626628875732421875e0), SC_(0.13838947645626975911149829417421592164301145093627e1) }}, 
      {{ SC_(-0.652269661426544189453125e0), SC_(0.13872692599655636614951215534059306447757898114989e1) }}, 
      {{ SC_(-0.6262547969818115234375e0), SC_(0.14030728449607783731169275509403934977874920947839e1) }}, 
      {{ SC_(-0.62323606014251708984375e0), SC_(0.14048456682760981684618618684460963872624120364616e1) }}, 
      {{ SC_(-0.57958185672760009765625e0), SC_(0.14291386904685383227954283815576245068501134204508e1) }}, 
      {{ SC_(-0.576151371002197265625e0), SC_(0.14309448152636963724388781094697116200713399276732e1) }}, 
      {{ SC_(-0.5579319000244140625e0), SC_(0.14402965087704791609397947280292073414645780530405e1) }}, 
      {{ SC_(-0.446154057979583740234375e0), SC_(0.14894386503626442042107428737827539093660806612699e1) }}, 
      {{ SC_(-0.44300353527069091796875e0), SC_(0.14906320545924202935802686800501318065294882015735e1) }}, 
      {{ SC_(-0.40594112873077392578125e0), SC_(0.15039335802932226988591218103108193186540888213994e1) }}, 
      {{ SC_(-0.396173775196075439453125e0), SC_(0.15072169743011592499372913974729141564215181659934e1) }}, 
      {{ SC_(-0.38366591930389404296875e0), SC_(0.15112892448422190697630083347423467639448624581727e1) }}, 
      {{ SC_(-0.36689913272857666015625e0), SC_(0.15165180033802033267632053479981021035471425681416e1) }}, 
      {{ SC_(-0.365801036357879638671875e0), SC_(0.15168513413633160947387236074965552423019640205414e1) }}, 
      {{ SC_(-0.277411997318267822265625e0), SC_(0.15401245425176709136660196900048700278424091275112e1) }}, 
      {{ SC_(-0.236883103847503662109375e0), SC_(0.15485231276601733576918931368003657825692622988276e1) }}, 
      {{ SC_(-0.215545952320098876953125e0), SC_(0.15523894121876553934587790103948024781080753117537e1) }}, 
      {{ SC_(-0.202522933483123779296875e0), SC_(0.15545635291592032109785456524323662491832287557881e1) }}, 
      {{ SC_(-0.18253767490386962890625e0), SC_(0.15576286893796261035306290689920363346745725969978e1) }}, 
      {{ SC_(-0.156477451324462890625e0), SC_(0.15611364139446355493431072334668884516455428910749e1) }}, 
      {{ SC_(-0.1558246612548828125e0), SC_(0.15612172160025555618286865486857507482242942668515e1) }}, 
      {{ SC_(-0.12251126766204833984375e0), SC_(0.15648856105816674567926606395168937481071020785374e1) }}, 
      {{ SC_(-0.1088275909423828125e0), SC_(0.15661350376732836367309274463594953937245200605844e1) }}, 
      {{ SC_(-0.8402168750762939453125e-1), SC_(0.15680203305860144668144643526811660961420870159842e1) }}, 
      {{ SC_(-0.5048263072967529296875e-1), SC_(0.15697950560238758069422088665702687900822920595852e1) }}, 
      {{ SC_(-0.29248714447021484375e-1), SC_(0.15704603238122883636275639829068215175843565484093e1) }}, 
      {{ SC_(-0.2486217021942138671875e-1), SC_(0.1570553560549795220596952208506368318845323442966e1) }}, 
      {{ SC_(-0.2047121524810791015625e-1), SC_(0.15706317452006442392207295085961102343692070947481e1) }}, 
      {{ SC_(-0.18821895122528076171875e-1), SC_(0.15706571985088185541190068658162634466459956376283e1) }}, 
      {{ SC_(0.73254108428955078125e-2), SC_(0.15707752537045378829148682574129984681356739471373e1) }}, 
      {{ SC_(0.9376299381256103515625e-1), SC_(0.15673382012803800695565201533706558176677595081402e1) }}, 
      {{ SC_(0.944411754608154296875e-1), SC_(0.15672879111272468454088900653008917791981439593238e1) }}, 
      {{ SC_(0.264718532562255859375e0), SC_(0.15429050287765040115345161487328955754762740575513e1) }}, 
      {{ SC_(0.27952671051025390625e0), SC_(0.15396478942459482760618960796407428547408640525839e1) }}, 
      {{ SC_(0.29262602329254150390625e0), SC_(0.15366093920760526747388381843200711024138982306603e1) }}, 
      {{ SC_(0.3109557628631591796875e0), SC_(0.15321071618558340305908384979951601020818799999842e1) }}, 
      {{ SC_(0.31148135662078857421875e0), SC_(0.15319737203884180398267043979026904916868658518393e1) }}, 
      {{ SC_(0.32721102237701416015625e0), SC_(0.1527867114331003738198228458599913043176805971218e1) }}, 
      {{ SC_(0.3574702739715576171875e0), SC_(0.15193440688380299383044814920714973708033404406654e1) }}, 
      {{ SC_(0.362719058990478515625e0), SC_(0.15177809660808721467844113827968123756890771957761e1) }}, 
      {{ SC_(0.3896572589874267578125e0), SC_(0.15093570468318824817504413386396057198219992161732e1) }}, 
      {{ SC_(0.4120922088623046875e0), SC_(0.15018188427341099768691902236893549315641407909401e1) }}, 
      {{ SC_(0.41872966289520263671875e0), SC_(0.14994958178213154496366968552961386017760898588045e1) }}, 
      {{ SC_(0.45167791843414306640625e0), SC_(0.1487322085908655313535535255202869925685698085035e1) }}, 
      {{ SC_(0.48129451274871826171875e0), SC_(0.14754407459744073247384176419011374260929941397226e1) }}, 
      {{ SC_(0.4862649440765380859375e0), SC_(0.14733570928853164419583523432188100088746641413847e1) }}, 
      {{ SC_(0.50937330722808837890625e0), SC_(0.14633222267462579060234013375472616462719440305596e1) }}, 
      {{ SC_(0.5154802799224853515625e0), SC_(0.14605730543776299802897695844262830217129367088168e1) }}, 
      {{ SC_(0.52750003337860107421875e0), SC_(0.1455040905739579018637680781037806414611373457245e1) }}, 
      {{ SC_(0.53103363513946533203125e0), SC_(0.14533836180900849164859243315111429017381139244939e1) }}, 
      {{ SC_(0.58441460132598876953125e0), SC_(0.14265695055008370758871995090190851074198707889523e1) }}, 
      {{ SC_(0.5879499912261962890625e0), SC_(0.14246715204117826383644822612160764733188324494824e1) }}, 
      {{ SC_(0.59039986133575439453125e0), SC_(0.14233470653300894642788935610227647487095507501819e1) }}, 
      {{ SC_(0.59455978870391845703125e0), SC_(0.14210806804871026734537311084007732025147240364441e1) }}, 
      {{ SC_(0.59585726261138916015625e0), SC_(0.14203692855345104085630580991694310940176283484347e1) }}, 
      {{ SC_(0.5962116718292236328125e0), SC_(0.14201745910377376893163001298577620388569425640087e1) }}, 
      {{ SC_(0.6005609035491943359375e0), SC_(0.14177721978271857966949913233824083454479033587509e1) }}, 
      {{ SC_(0.6150619983673095703125e0), SC_(0.1409584186264459097822607166118300162769330850531e1) }}, 
      {{ SC_(0.62944734096527099609375e0), SC_(0.14011843899700989964492170135501929645905818746914e1) }}, 
      {{ SC_(0.64380657672882080078125e0), SC_(0.13925155171987190379716348493447778489398983557681e1) }}, 
      {{ SC_(0.6469156742095947265625e0), SC_(0.13906001623565653310360026300062173208737677732474e1) }}, 
      {{ SC_(0.67001712322235107421875e0), SC_(0.13759265375091920908763740804480465836032745124162e1) }}, 
      {{ SC_(0.6982586383819580078125e0), SC_(0.13568776608794218001220481427238400798591422244367e1) }}, 
      {{ SC_(0.74485766887664794921875e0), SC_(0.13225089163569380724816605958889295619432742743828e1) }}, 
      {{ SC_(0.75686132907867431640625e0), SC_(0.13130049536402767623871717650724612640189448665164e1) }}, 
      {{ SC_(0.81158387660980224609375e0), SC_(0.1265774005474254141411822958784348996686269275959e1) }}, 
      {{ SC_(0.826751708984375e0), SC_(0.1251401815196169298547115798872087290243528044558e1) }}, 
      {{ SC_(0.83147108554840087890625e0), SC_(0.12468018231406093242228210016848902253352539970597e1) }}, 
      {{ SC_(0.84174954891204833984375e0), SC_(0.12365605223473625325793146444569526624443067779814e1) }}, 
      {{ SC_(0.8679864406585693359375e0), SC_(0.12089081947735379320176271312129936213684657310011e1) }}, 
      {{ SC_(0.90044414997100830078125e0), SC_(0.11711493603723543295821235205304820794673798105369e1) }}, 
      {{ SC_(0.91433393955230712890625e0), SC_(0.11535184098186861192678956506006329721663192849427e1) }}, 
      {{ SC_(0.91501367092132568359375e0), SC_(0.11526291690338582866360141839353650400854743647163e1) }}, 
      {{ SC_(0.918984889984130859375e0), SC_(0.11473810486945145917917969281137061723789053926309e1) }}, 
      {{ SC_(0.92977702617645263671875e0), SC_(0.11326318918571500732674050143237850082646730427556e1) }}, 
      {{ SC_(0.93538987636566162109375e0), SC_(0.11246526120138518224375085002257139975074424198895e1) }}, 
      {{ SC_(0.93773555755615234375e0), SC_(0.11212495302257932905970525402254900901444230096575e1) }}, 
      {{ SC_(0.94118559360504150390625e0), SC_(0.11161664223439311396943776225269812587817500317889e1) }}, 
      {{ SC_(0.96221935749053955078125e0), SC_(0.10828018699366994143027254777963854661530573064246e1) }}, 
      {{ SC_(0.98576259613037109375e0), SC_(0.10380503716235214587344268369403753352254592216066e1) }}, 
      {{ SC_(0.9881370067596435546875e0), SC_(0.10327762472475272053177375153237179387280796303267e1) }}, 
      {{ SC_(0.99292266368865966796875e0), SC_(0.10213677605130466359178501196768639821158116338631e1) }}
   }};

