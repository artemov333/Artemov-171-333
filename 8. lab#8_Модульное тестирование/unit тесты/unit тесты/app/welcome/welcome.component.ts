import {Component, OnInit} from '@angular/core';
import {ActivatedRoute} from "@angular/router";

@Component({
  selector: 'app-welcome',
  templateUrl: './welcome.component.html',
  styleUrls: ['./welcome.component.css']
})
export class WelcomeComponent implements OnInit {
  username: string = "user";

  constructor(private router: ActivatedRoute) {
  }

  ngOnInit() {
    this.username = this.router.snapshot.params['name'];
  }

}