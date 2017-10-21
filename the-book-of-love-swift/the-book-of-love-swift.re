= はじめに

どーも！Swift愛好会を主催しているjollyjoesterです。
Swift愛好会は来月（2017年11月）２周年を迎えるコミュニティですが、いろいろなチャレンジやトラブルを乗り越えながらちょっとずつSwift愛好会の「文化」が形になってきました。
本書は現段階のSwift愛好会の「文化」を書き留めておきたいという動機から始まりました。

筆者らの経験が技術コミュニティを運営している/これから作ろうとしている方の何かしらの参考になれば幸いです。

//image[love-swift][]{
//}

= Swift愛好会とは？

@<href>{https://love-swift.connpass.com/, Swift愛好会}は「Swift好きが集まってわいわい『楽しむ』会」です。

とにかく『楽しむ』というのがポイントです。
そのため、Swiftのレベルやプログラミングの経験がどれだけあるかなどは一切不問。まだSwiftに一切触ったことがなくても触ってみたいという興味があればOKです。

//image[about][][scale=0.8]{
//}

== どんなことをしているの？

いわゆる勉強会をしています。平日開催と休日開催でスタイルがちょっと変わり

 * 平日: 談義＋懇親会（19:30頃からこの談義を行い、適当なタイミングで懇親会に移る）
 * 休日: もくもく会＋談義＋懇親会（13:00頃から開始し、3-4時間もくもくした後に談義、懇親会を行う）

というスタイルでやっています。

談義というのはライトニングトーク（LT）のような学んだ内容を発表する形式ですが、「形式自由、制限時間なし」で行う発表です。
テーマはかなり自由で「Swiftの言語そのものについて」のようなものから、iOSのこと、サーバーサイドSwiftのこと、IoTやWebRTCを絡めてなどSwiftがちょっとでも絡んでいればなんでもありです。

談義についてはSwift愛好会でこだわっているポイントなので詳しく後述します。

== どんな人が参加しているの？

多くはiPhoneアプリ開発者が集まっていますが、

 * プログラミング自体初めてでSwiftから初めてみたい！
 * 普段はRuby使ってWebアプリ作ってるけどSwiftにも興味がある
 * Kotlinと比べられることが多いけどどんなもん？というAndroidアプリ開発者

などなど様々な背景の方が参加してくれています。

運営メンバー自体も筆者はモバイルアプリエンジニアですが、他にフロントエンドエンジニア、IoTエンジニア、広報などバラエティに富んだメンバーで運営しています。

== 毎回どのくらいの人数が集まっているの？

20名くらいから多いときは100名くらい集まることもあります（日程や会場に依る）。
だいたい50名前後の場合が多いです。

== いつ開催しているの？

2015年11月に第１回を開催して以降、最低月１回、主に渋谷近辺で開催をしています。

== どこで募集しているの？

いつもconnpassでイベントページを作成しています。

@<href>{https://love-swift.connpass.com/}

== どんなコミュニティにしたいの？

Swift愛好会を企画する際の打ち合わせで

//quote{
いろんな勉強会あるけどとりあえずSwift愛好会行っとけばいいよねという安心のコミュニティにしたいよね
//}

という議論をしていました。
これがベースとなり、どういう会であれば安心のコミュニティにできるかという点についてSwift愛好会なりに立てた仮説が下記です。

 * 「楽しく」「仲良く」「アウトプットを出しやすい」コミュニティ
 * 定期的に開催され、継続する（なくならない）コミュニティ

現在はこれらを体現するコミュニティにしたいと思って、毎回試行錯誤しながら運営しています。

= Swift愛好会の特徴

さて、前章で

 * 「楽しく」「仲良く」「アウトプットを出しやすい」コミュニティ
 * 定期的に開催され、継続する（なくならない）コミュニティ

にしたいとお話ししましたが、本章ではSwift愛好会で具体的にどのようなことをしてきたかということをお話ししたいと思います。

 1. 「楽しく」するための『乾杯！』
 2. 「アウトプットを出しやすい」ようにするための『談義』
 3. 「仲良く」するための『もくもく会』
 4. 「定期的に開催され、継続する」ための『辛くない運営』

== 乾杯！

Swift愛好会は下記のスライドから始まります。

//image[nomimono][][scale=0.8]{
//}

//image[kampai][][scale=0.8]{
//}

Swift愛好会についての説明などは置いといてまず 『乾杯！』 です。
もちろん、必ずお酒を飲む必要はなく、ソフトドリンクなどなんらかの飲み物を持って乾杯していただきます。

ここで大事なのはお酒を飲むというというより

 * 最初にみんなで一緒に大きな声を出す
 * 自分の周りにいる人と少しでもコミュニケーションを取る

ことです。

勉強会は基本的には見ず知らずの人たちが集まる場なので、最初はみんな緊張しています。
このまま固い空気で会を進めてしまうと場が盛り上がらないんですね・・・。
なので最初に『乾杯！』をすることで場を作り、一体感を醸し出すことを意図しています。
一体感を感じるとリラックスしてより「楽しめる」のではないかと考えています。

このように最大限楽しんでもらうためのきっかけとなりうるので「乾杯！」をとても重要視しています。
ちなみに『乾杯！』もただ乾杯するのではなく、言い方、声量、間の取り方などを相当気にしています。
絶妙な『乾杯！』は場の空気を支配してその後の会の流れを決定づけますので、乾杯の仕方に力を入れるというのはアリなんではないかと思っています。

===[column] かんぱいやーという称号

Swift愛好会でずっと『乾杯！』を続けていたら、別の勉強会の主催者の方から「うちの勉強会でも乾杯してください！」と依頼をもらったりするようになりました。
その後いくつかの勉強会で乾杯させていただき、iOS界の「かんぱいやー」と呼んでいただけるようになりました。
また「うちの勉強会も乾杯から始めることにしました」などの声もいくつかいただきました。
大事だと考えていた乾杯の力が認められたようでとても嬉しかったです。

===[column] カレーで乾杯

乾杯も最初はほとんどビールでしたが、最近は液体ならばなんでもありということでカレーで乾杯したり、プロテインで乾杯したりとなんでもありになってきました。

== 談義

勉強会には発表やLTがつきものですが、Swift愛好会では発表形式のものを 『談義』 と呼んでいます。
なんで特殊な呼び方にしたかというと、いわゆるLTなどと違って「制限時間なし」にしたかったからです。

=== 時間制限なしのメリット

時間制限なしにすると下記のようなメリットがあると考えています。

 * チーンのプレッシャーがないのでのびのび発表できる（過去最長1時間20分発表した例があり）
 * 内容を時間に合わせる必要がないので準備のハードルが下がる（30秒程度の短い内容でも良い）
 * 発表してたら伝えたいことがもっと出てきた！ってときも伝えたいだけ伝えられる
 * 発表を聞いている最中に疑問が出てきたら気軽に質問できる
 * いい質問からみんなが気づきを得てさらに盛り上がる！

発表の入門者には時間気にして発表内容がおそろかになるよりは、発表そのものに集中して内容を良くしてもらいたいですし、熟練者は伝えたいことをいっぱい持っているのでそれをどんどん伝えてもらった方が参加者には得なはずです。

=== 制限時間なしのデメリット

制限時間なしのデメリットというのは

 * 運営の時間コントロールの難易度が上がる

があります。

過去すごく盛り上がった回で、談義者のうちのお二人が1時間20分ずつ談義したときがあって、会場の最終撤収が残り15分になっても談義が続いていたため冷や汗をかきました。
それでも会場のみんながその方々の話をもっと聞きたいという熱気があったため、懇親会というバッファも食いつぶしながらぎりぎりまで粘りました。
幸い最終撤収の10分前に談義が終わったため、5分で全力で懇親会＆参加者全員で片付けをしてなんとか撤収できました。
ほんとにぎりぎりでしたが肌感でもっとも参加者の満足度が高かった回だったので無茶をして良かったです。

一方で、時間が足りなくなってしまってせっかく準備してもらったのに登壇予定者に談義を諦めてもらうという失敗もありました。
この辺りは運営という現実とアウトプットの最大化の間でいつもせめぎ合いが発生する問題です。

=== 談義の形式

Swift愛好会では談義の形式も自由です。

勉強会で発表というと基本はスライドをきちんと作って発表するというイメージだと思いますが、スライドをちゃんと作るというのはなかなか大変なものだと思います。
Swift愛好会では談義の形式を自由にすること準備する負荷を軽減して思いついたらすぐアウトプットできるようにしたいと思っています。
例えば

 * Webサイトの記事をスライドに移しながら
 * デモだけ作ってそれを見せながら
 * ライブコーディングしながら

などスライドを作らなくてもアウトプットできることはいくらでもあります。
形式を取っ払うことで気軽にアウトプットできるようにしていきたいです。
ちなみに過去、歌って踊る発表もありましたしミニ四駆が走る発表などもありました。
とにかく時間も形式もゆるくして、変な緊張とかせずに楽しくアウトプットをどんどん出しやすい空気にしていきたいと思っています。

=== 飛び入り談義

Swift愛好会では談義を聞いて自分も喋りたくなった人が談義する『飛び入り談義』という文化も自然に発生してきました。
通常、登壇枠と一般枠のように勉強会に参加する際は発表するかしないか決めてから参加すると思いますが、飛び入り談義では思い立ったらその場で談義できます。
誰かの発表を聞いてアイデアが思いついて発表したいというようなときにぴったりです。

以上、談義についてでしたが、最近はイベントページを公開すると「談義枠」から埋まっていくということもあって良い感じに受け入れられているのかなと思っています。

== もくもく会

談義とともに定着しているのが 『耐久もくもく会』 です。

『耐久もくもく会』は休日の午前もしくは午後一番に集まって、ずっともくもくわいわい各自のやりたい勉強や開発をやる会です。
もちろん『乾杯！』で始まるのは変わらず、午前10時から乾杯し、昼ごはんを挟んで午後1時に乾杯し、談義が始まるタイミングでも乾杯、懇親会で乾杯となかなかハードな回もありました。
これも最初は「朝から晩まで酒飲みながらずっともくもくするの面白くね？」といった思いつきで始まったのですが、思いつきで始まった割にはすごく良い効果があった気がします。
それは参加者同士の横のつながりを強くする＝仲良くなる効果です。

基本的に、平日開催の回は「談義＋懇親会」という構成で愛好会を実施していましたが、てんでバラバラの背景の人たちが懇親会だけで仲良くなるのはけっこう難しいですよね。
でも『耐久もくもく会』のように一緒にいる時間が長ければ仲良くなれるチャンスは大幅増です！
仲良くなった人が増えれば次回愛好会に参加するのも楽しみになりますし、談義や質問をする際のハードルも仲良い人であればだいぶ下がると思います。
ということで３回に１回程度の割合で「耐久もくもく会＋談義＋懇親会」という構成の回を混ざるようになりました。

=== Swift愛好会合宿

『耐久もくもく会』の極め付けが１周年記念で行った@<href>{https://love-swift.connpass.com/event/43865/, Swift愛好会合宿}です。
会社も年齢も性別もバラバラな大人が、土日を潰してずっと開発する合宿に「22名」も集まりました。
横のつながりができていない状態であったら緊張して申し込みも躊躇しちゃうと思うのでびっくりでした。

//image[gasshuku][]{
//}

なお、合宿のレポートは運営メンバーによる

 * @<href>{https://qiita.com/gotou015/items/40081f33b68f616491b8, 22名で開発合宿いったけど土善旅館さん、なんだこれまじで最高か？}

やDevelopers.IOでレポートしていただいた

 * @<href>{http://dev.classmethod.jp/etc/event-report-love-swift-camp-day-1/, Swift愛好会1周年記念合宿に参加してきました！ – 1日目}
 * @<href>{http://dev.classmethod.jp/etc/event-report-love-swift-camp-day-2/, Swift愛好会1周年記念合宿に参加してきました！ – 2日目}

などをご覧いただけると嬉しいです。

=== 他の勉強会との連携

横のつながりが強くなった副次的なものとして「他の勉強会との横のつながりも強くなる」という効果も現れました。
愛好会に参加してくれた方の中には主に別の勉強会で登壇したり、参加していたりする方もいらっしゃいますので、その方を通じて勉強会同士の連携が強くなったという感じです。

例えば

 * @<href>{https://cswift.connpass.com/, カジュアルSwift}
 * @<href>{https://swift-beginners.doorkeeper.jp/, Swiftビギナーズ倶楽部}

クラスメソッドさんが開催されてるAKIBA.swiftとは共催もしました。

 * @<href>{https://love-swift.connpass.com/event/37019/, AKIBA.swift×Swift愛好会}

=== SwiftDay!


== Swift愛好会の運営

これまで楽しく・・・の仕掛けについてでしたが、今度は継続のための仕掛けを書きたいと思います。

Swift愛好会の運営メンバーはベテラン揃い

Swift愛好会では何かを選択する際の優先順位として運営>登壇者>参加者としています。
参加者からいろいろな要望やクレームが来ると思いますが、運営が辛くなっては続けることはできません。

まず継続するために運営が辛くないこと、これがいろいろな意思決定をする際の基準になります。

そして運営にかける工数もできるだけ省くこと

もちろん運営にやる気と余裕があるときには徹底的にいろいろな企画をやったりします。
しかし、運営がみんな忙しい時期が重なるとなると毎回大変なことを続けることはできません。

運営は６人いますが、最低2人いれば開催できるようになっています。
テンプレートの確立してきているので
参加人数も毎回50人くらい、イベントページを立てて特に宣伝せずに登壇者から枠が埋まり、当日近くにほぼほぼ満席になる。

最近は３ヶ月に一度ほどSwift復習会という勉強会と合同でSwiftDay!というイベントも開催しています。
SwiftDay!は普段東京で開催している勉強会を地方に遊びに行って現地のエンジニアと交流するイベントです。
今まで沖縄、札幌、仙台、福岡などいろいろ遊びに行っています。


===[column] Swift愛好会の参加費について

価格について
500円

無料の勉強会が多いが無料にするつもりはない
少しでもお金を払ってでも来たいという意思がある人に参加してほしい
ドタキャンが減る
お金の心配をすることで運営が疲れない

たまにスポンサーがついて無料になることはあるかもしれないけど


===[column] Swift愛好会の恵まれているところ

勉強会で大変なのは会場の確保だと思います。
Swift愛好会では会場を提供してくれる会社に恵まれ、会場に困ることがあまりありませんでした。
これはSwift愛好会の継続性にとても貢献していただいた各社に感謝いたします。

 * レバレジーズ
 * dots.(現Tech Play)
 * 21cafe
 * ジーズアカデミーTOKYO

= 最後に

== Swift愛好会の今後

今のSwift愛好会の素晴らしいところは「ゆるい、優しい、温かい、けど真剣」という空気にあると思っています。
この空気についてはSwift愛好会に参加してくださったみなさんが醸し出してくれたものです。

筆者らはこの素晴らしい空気を維持継続できるように引き続き工夫していく所存です。

最後まで読んでいただきありがとうございました！

感想やフィードバックいただける方、ぜひTwitterにてDMいただけるととても嬉しいです。

@<href>{https://twitter.com/jollyjoester, @jollyjoester}

また技術コミュニティを運営されている方、運営しようと思っている方、一緒に悩みを共有できたらと思いますのでぜひご連絡ください。
