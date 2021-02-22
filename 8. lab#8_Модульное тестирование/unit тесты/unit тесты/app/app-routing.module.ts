import { ChatComponent } from './chat/chat.component';
import { LentaComponent } from './lenta/lenta.component';

import {NgModule} from '@angular/core';
import {Routes, RouterModule} from '@angular/router';
import {LoginComponent} from "./login/login.component";
import {WelcomeComponent} from "./welcome/welcome.component";


const routes: Routes = [
  {path: 'login', component: LoginComponent},
  {path: 'lenta', component: LentaComponent},
  {path: 'welcome/:name', component: WelcomeComponent},
  {path:'chat', component: ChatComponent}


];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule {
}